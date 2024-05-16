import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import cv2.aruco as aruco

class Aruco(Node):
    def __init__(self):
        super().__init__('aruco')
        self.bridge = CvBridge()

        self.subscription = self.create_subscription(Image,'image_raw',self.camera_callback,10)
        
        self.pub = self.create_publisher(Image, '/aruco_image', 10)

        self.recieved_flag = False

        self.aruco_dict = aruco.getPredefinedDictionary(aruco.DICT_APRILTAG_36h11)
        self.parameters = aruco.DetectorParameters()
        self.detector = aruco.ArucoDetector(dictionary=self.aruco_dict, detectorParams=self.parameters)

        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.timer_callback)
        
        self.get_logger().info('Aruco Node has been started!!!')

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

            gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            markerCorner, markerID, rejectedCandidates = self.detector.detectMarkers(gray)

            frame = aruco.drawDetectedMarkers(frame, markerCorner, markerID)

            self.pub.publish(self.bridge.cv2_to_imgmsg(frame, 'bgr8'))
            if markerID is not None:
                id = markerID[0][0]
                self.get_logger().info(f'The Aruco detected is {id}')

def main(args=None):
    rclpy.init(args=args)
    aruco = Aruco()
    rclpy.spin(aruco)
    aruco.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()