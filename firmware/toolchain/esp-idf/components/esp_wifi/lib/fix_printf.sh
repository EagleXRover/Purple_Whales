#!/bin/bash
for dir in esp32 esp32s2beta; do
    if [ -d "$dir" ]; then
        cd $dir
        if [ $dir == esp32 ]; then
            git status libphy.a | grep modified >/dev/null 2>&1
            if [ $? -eq 0 ]; then
                echo $dir/libphy.a fixed
                xtensa-esp32-elf-objcopy --redefine-sym ets_printf=phy_printf libphy.a
            fi
        elif [ $dir == esp32s2beta ]; then
            git status libphyA.a | grep modified >/dev/null 2>&1
            if [ $? -eq 0 ]; then
                echo $dir/libphyA.a fixed
                xtensa-esp32-elf-objcopy --redefine-sym ets_printf=phy_printf libphyA.a
            fi

            git status libphyB.a | grep modified >/dev/null 2>&1
            if [ $? -eq 0 ]; then
                echo $dir/libphyB.a fixed
                xtensa-esp32-elf-objcopy --redefine-sym ets_printf=phy_printf libphyB.a
            fi

            git status libphy_marlin3.a | grep modified >/dev/null 2>&1
            if [ $? -eq 0 ]; then
                echo $dir/libphy_marlin3.a fixed
                xtensa-esp32-elf-objcopy --redefine-sym ets_printf=phy_printf libphy_marlin3.a
            fi
        fi
        git status librtc.a | grep modified >/dev/null 2>&1
        if [ $? -eq 0 ]; then
            echo $dir/librtc.a fixed
	    xtensa-esp32-elf-objcopy --redefine-sym ets_printf=rtc_printf librtc.a
	fi

        git status libsmartconfig.a | grep modified >/dev/null 2>&1
        if [ $? -eq 0 ]; then
            echo $dir/libsmartconfig.a fixed
            xtensa-esp32-elf-objcopy --redefine-sym printf=sc_printf libsmartconfig.a
        fi

        git status libpp.a | grep modified >/dev/null 2>&1
        if [ $? -eq 0 ]; then
            echo $dir/libpp.a fixed
            xtensa-esp32-elf-objcopy --redefine-sym printf=pp_printf libpp.a
        fi

        git status libnet80211.a | grep modified >/dev/null 2>&1
        if [ $? -eq 0 ]; then
            echo $dir/libnet80211.a fixed
            xtensa-esp32-elf-objcopy --redefine-sym printf=net80211_printf libnet80211.a
        fi


        git status libcore.a | grep modified >/dev/null 2>&1
        if [ $? -eq 0 ]; then
            echo $dir/libcore.a fixed
            xtensa-esp32-elf-objcopy --redefine-sym printf=core_printf libcore.a
            xtensa-esp32-elf-objcopy --redefine-sym ets_printf=core_printf libcore.a
        fi

        git status libcoexist.a | grep modified >/dev/null 2>&1
        if [ $? -eq 0 ]; then
            echo $dir/libcoexist.a fixed
            xtensa-esp32-elf-objcopy --redefine-sym ets_printf=coexist_printf libcoexist.a
            xtensa-esp32-elf-objcopy --redefine-sym printf=coexist_printf libcoexist.a
        fi
        cd ..
    else
        echo "$dir does not exist"
    fi
done;
