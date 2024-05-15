import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np
from .submodules.functions import *
from .submodules.line_class import Line

class LineFollower(Node):
    def __init__(self):
        super().__init__('line_follower')
        self.bridge = CvBridge()

        self.subscription = self.create_subscription(Image,'image_raw',self.camera_callback,10)
        
        self.pub = self.create_publisher(Image, '/line_image', 10)
        self.pub2 = self.create_publisher(Image, '/wraped', 10)
        self.pub3 = self.create_publisher(Image, '/original_frame', 10)

        self.recieved_flag = False

        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.timer_callback)
        
        self.get_logger().info('Line Follower Node has been started!!!')

    def camera_callback(self, msg):
        try:
            self.msg_image = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
            self.recieved_flag = True
        except:
            self.get_logger().info('Error in converting image')

    def timer_callback(self):
        if self.recieved_flag:

            frame = self.msg_image.copy()

            frame = cv2.resize(frame, (240, 240))

            """ Functions for wrapping and masking the image """
            warped = warper(frame)

            hsv = cv2.cvtColor(warped, cv2.COLOR_BGR2HSV)

            lower_white = np.array([0, 0, 168], np.uint8)
            upper_white = np.array([180, 255, 255], np.uint8)

            mask = cv2.inRange(hsv, lower_white, upper_white)
            
            left_mask = mask[:, :120]
            right_mask = mask[:, 120:]

            left_line = Line(image=warped[:, :120], mask=left_mask, parts=8)
            right_line = Line(image=warped[:, 120:], mask=right_mask, parts=8)
            
            left_line()
            right_line(right=True)

            mid_x = frame.shape[0] // 2
            mid_y = frame.shape[1] // 2

            center_x, center_y = obtain_center(left_line, right_line)

            error = center_error(center_x, center_y)
            center = line_center(left_line, right_line)

            final = unwrapper(warped)

            cv2.line(frame, (mid_x, mid_y - 10), (mid_x, mid_y + 10), (0, 0, 255), 1)
            cv2.line(frame, (mid_x - 10, mid_y), (mid_x + 10, mid_y), (0, 0, 255), 1)
            cv2.line(warped, (int(center + mid_x), mid_y - 10), (int(center + mid_x), mid_y + 10), (255, 0, 255), 1)
            cv2.circle(frame, (int(center_x), int(center_y)), 5, (0, 255, 0), -1)
            cv2.putText(frame, f'Error: {error[0]}', (10, 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 255), 1)
            cv2.putText(frame, f'Line Error: {center}', (10, 20), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 255), 1)

            result = cv2.addWeighted(frame, 1, final, 0.5, 0)

            self.pub.publish(self.bridge.cv2_to_imgmsg(result, 'bgr8'))
            self.pub2.publish(self.bridge.cv2_to_imgmsg(warped, 'bgr8'))
            self.pub3.publish(self.bridge.cv2_to_imgmsg(frame, 'bgr8'))
            self.recieved_flag = False
    

def main():
    rclpy.init()
    line_follower = LineFollower()
    rclpy.spin(line_follower)
    line_follower.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()