import rclpy
from rclpy.node import Node
from ackermann_msgs.msg import AckermannMessage

class SimplePublisher(Node):
        def __init__(self):
            super().__init__('simple_publisher')
            self.publisher_ = self.create_publisher(AckermannMessage, 'cmd_vel', 10)
            self.timer = self.create_timer(0.5, self.timer_callback)
            self.i = 0
    
        def timer_callback(self):
            msg = AckermannMessage()
            msg.linear_velocity = 1.0
            msg.steering_angle = 0.5
            self.publisher_.publish(msg)
            self.get_logger().info('Linear velocity: "%s"' % msg.linear_velocity)
            self.get_logger().info('Steering Angle: "%s"' % msg.steering_angle)

def main(args=None):
    rclpy.init(args=args)
    simple_publisher = SimplePublisher()
    rclpy.spin(simple_publisher)
    simple_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
     main()