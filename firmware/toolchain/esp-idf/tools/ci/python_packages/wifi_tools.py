# Copyright 2018 Espressif Systems (Shanghai) PTE LTD
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

import dbus
import dbus.mainloop.glib
import netifaces
import time


def get_wiface_name():
    for iface in netifaces.interfaces():
        if iface.startswith('w'):
            return iface
    return None


def get_wiface_IPv4(iface):
    try:
        [info] = netifaces.ifaddresses(iface)[netifaces.AF_INET]
        return info['addr']
    except KeyError:
        return None


class wpa_cli:
    def __init__(self, iface, reset_on_exit=False):
        self.iface_name = iface
        self.iface_obj = None
        self.iface_ifc = None
        self.old_network = None
        self.new_network = None
        self.connected = False
        self.reset_on_exit = reset_on_exit
        dbus.mainloop.glib.DBusGMainLoop(set_as_default=True)
        bus = dbus.SystemBus()

        service = dbus.Interface(bus.get_object("fi.w1.wpa_supplicant1", "/fi/w1/wpa_supplicant1"),
                                 "fi.w1.wpa_supplicant1")
        iface_path = service.GetInterface(self.iface_name)
        self.iface_obj = bus.get_object("fi.w1.wpa_supplicant1", iface_path)
        self.iface_ifc = dbus.Interface(self.iface_obj, "fi.w1.wpa_supplicant1.Interface")
        self.iface_props = dbus.Interface(self.iface_obj, 'org.freedesktop.DBus.Properties')
        if self.iface_ifc is None:
            raise RuntimeError('supplicant : Failed to fetch interface')

        self.old_network = self._get_iface_property("CurrentNetwork")
        print("Old network is %s" % self.old_network)

        if self.old_network == '/':
            self.old_network = None
        else:
            self.connected = True

    def _get_iface_property(self, name):
        """ Read the property with 'name' from the wi-fi interface object

        Note: The result is a dbus wrapped type, so should usually convert it to the corresponding native
        Python type
        """
        return self.iface_props.Get("fi.w1.wpa_supplicant1.Interface", name)

    def connect(self, ssid, password):
        if self.connected is True:
            self.iface_ifc.Disconnect()
            self.connected = False

        if self.new_network is not None:
            self.iface_ifc.RemoveNetwork(self.new_network)

        print("Pre-connect state is %s, IP is %s" % (self._get_iface_property("State"), get_wiface_IPv4(self.iface_name)))

        self.new_network = self.iface_ifc.AddNetwork({"ssid": ssid, "psk": password})
        self.iface_ifc.SelectNetwork(self.new_network)

        ip = None
        retry = 10
        while retry > 0:
            time.sleep(5)

            state = str(self._get_iface_property("State"))
            print("wpa iface state %s (scanning %s)" % (state, bool(self._get_iface_property("Scanning"))))
            if state in ["disconnected", "inactive"]:
                self.iface_ifc.Reconnect()

            ip = get_wiface_IPv4(self.iface_name)
            print("wpa iface %s IP %s" % (self.iface_name, ip))
            if ip is not None:
                self.connected = True
                return ip
            retry -= 1

        self.reset()
        raise RuntimeError('wpa_cli : Connection failed')

    def reset(self):
        if self.iface_ifc is not None:
            if self.connected is True:
                self.iface_ifc.Disconnect()
                self.connected = False
            if self.new_network is not None:
                self.iface_ifc.RemoveNetwork(self.new_network)
                self.new_network = None
            if self.old_network is not None:
                self.iface_ifc.SelectNetwork(self.old_network)
                self.old_network = None

    def __del__(self):
        if self.reset_on_exit is True:
            self.reset()
