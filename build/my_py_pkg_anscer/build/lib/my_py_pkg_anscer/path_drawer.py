# path_drawer.py
import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry, Path
from geometry_msgs.msg import PoseStamped
from builtin_interfaces.msg import Time

class OdomToPath(Node):
    def __init__(self):
        super().__init__('odom_to_path')
        self.path_pub = self.create_publisher(Path, '/odom_path', 10)
        self.odom_sub = self.create_subscription(Odometry, '/odom', self.odom_callback, 10)
        # self.odom_sub = self.create_subscription(Odometry, '/diff_drive_controller/odom', self.odom_callback, 10)
        self.path_msg = Path()
        self.path_msg.header.frame_id = 'odom'

    def odom_callback(self, msg: Odometry):
        pose = PoseStamped()
        pose.header = msg.header
        pose.pose = msg.pose.pose
        self.path_msg.header.stamp = msg.header.stamp
        self.path_msg.poses.append(pose)
        self.path_pub.publish(self.path_msg)

def main(args=None):
    rclpy.init(args=args)
    node = OdomToPath()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    
