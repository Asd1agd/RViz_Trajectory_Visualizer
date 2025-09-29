import rclpy
from rclpy.node import Node
from rclpy.time import Time
from nav_msgs.msg import Odometry
from visualization_msgs.msg import Marker, MarkerArray
from geometry_msgs.msg import Point, PoseStamped
from std_srvs.srv import Trigger
from example_interfaces.srv import SetBool
from custom_interfaces_anscer.srv import TimeInSec
import csv
import time
from collections import deque
import tf2_ros
import tf2_geometry_msgs  # Needed for tf pose transform

import rclpy
from rclpy.node import Node
from rclpy.time import Time
from nav_msgs.msg import Odometry
from visualization_msgs.msg import Marker, MarkerArray
from geometry_msgs.msg import Point, Quaternion
from std_srvs.srv import Trigger
from example_interfaces.srv import SetBool  # or create a custom service if needed
import csv
from collections import deque

class TrajectoryPublisherSaver(Node):
    def __init__(self):
        super().__init__('trajectory_publisher_saver')

        self.odom_sub = self.create_subscription(Odometry, '/odom', self.odom_callback, 10)
        self.marker_pub_trajectory_markers = self.create_publisher(MarkerArray, '/trajectory_markers', 10) 
        self.marker_pub_waypoints = self.create_publisher(MarkerArray, '/waypoints', 10)
        self.save_srv = self.create_service(TimeInSec, 'save_trajectory', self.save_callback)

        # Store pose history as (timestamp, point)
        self.trajectory = deque()
        self.max_duration_sec = 120  # you can limit total memory, e.g., 2 min history

        self.marker_id_counter = 0
        self.timer = self.create_timer(1.0, self.publish_marker_array)

        self.get_logger().info("TrajectoryPublisherSaver initialized.")

    def odom_callback(self, msg: Odometry):
        now = self.get_clock().now()
        point = Point(
            x=msg.pose.pose.position.x,
            y=msg.pose.pose.position.y,
            z=msg.pose.pose.position.z
        )
        orientation = msg.pose.pose.orientation

        self.trajectory.append((now, point, orientation))

        # Remove old points beyond max_duration
        while (now - self.trajectory[0][0]).nanoseconds * 1e-9 > self.max_duration_sec:
            self.trajectory.popleft()

    def publish_marker_array(self):
        marker_array = MarkerArray()

        # 1. Line Strip Marker
        line_strip = Marker()
        line_strip.header.frame_id = 'map'
        line_strip.header.stamp = self.get_clock().now().to_msg()
        line_strip.ns = 'trajectory'
        line_strip.id = 0
        line_strip.type = Marker.LINE_STRIP
        line_strip.action = Marker.ADD
        line_strip.scale.x = 0.03
        line_strip.color.r = 1.0
        line_strip.color.g = 0.3
        line_strip.color.a = 1.0
        line_strip.points = [pt for _, pt, _ in self.trajectory] 
        marker_array.markers.append(line_strip)

        # 2. Arrow Markers
        for idx, (t, pt, orientation) in enumerate(self.trajectory):
            if idx % 100 != 0:
                continue  # skip all poses except every 5th
            arrow_marker = Marker()
            arrow_marker.header.frame_id = 'map'
            arrow_marker.header.stamp = self.get_clock().now().to_msg()
            arrow_marker.ns = 'trajectory_arrows'
            arrow_marker.id = idx + 1  # Ensure unique ID (line_strip is 0)

            arrow_marker.type = Marker.ARROW
            arrow_marker.action = Marker.ADD
            arrow_marker.pose.position = pt
            arrow_marker.pose.orientation = orientation

            arrow_marker.scale.x = 0.2  # Length
            arrow_marker.scale.y = 0.04  # Shaft diameter
            arrow_marker.scale.z = 0.04  # Head diameter

            arrow_marker.color.r = 0.0
            arrow_marker.color.g = 1.0
            arrow_marker.color.b = 0.0
            arrow_marker.color.a = 1.0

            marker_array.markers.append(arrow_marker)

        self.marker_pub_trajectory_markers.publish(marker_array)
        self.marker_pub_waypoints.publish(marker_array)

    def save_callback(self, request, response):
        """Save recent trajectory to CSV. Request.data = duration in seconds (float)."""
        duration_to_save = 30  # default fallback
        try:
            duration_to_save = request.time_sec


        except:
            pass

        now = self.get_clock().now()
        filtered_traj = [(t, pt, orientation ) for t, pt, orientation in self.trajectory if (now - t).nanoseconds * 1e-9 <= duration_to_save]

        filename = f'/home/asd/ros2_ws7/trajectories/trajectory_{now}_{duration_to_save}s.csv'
        with open(filename, mode='w') as file:
            writer = csv.writer(file)
            writer.writerow(['time_sec', 'x', 'y', 'z' , 'w'])
            for t, pt, orientation in filtered_traj:
                writer.writerow([t.nanoseconds * 1e-9, pt.x, pt.y, pt.z , [orientation.x,orientation.y,orientation.z,orientation.w]])

        self.get_logger().info(f"Saved trajectory to {filename}")
        response.success = True
        response.message = f"Saved last {duration_to_save} seconds to {filename}"
        return response

def main(args=None):
    rclpy.init(args=args)
    node = TrajectoryPublisherSaver()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
