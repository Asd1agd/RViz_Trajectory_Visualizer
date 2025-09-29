import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point, Quaternion
from visualization_msgs.msg import Marker, MarkerArray
from custom_interfaces_anscer.srv import CsvPath
import csv
from pathlib import Path

class TrajectoryVisualizer(Node):
    def __init__(self):
        super().__init__('trajectory_visualizer')

        self.marker_pub = self.create_publisher(MarkerArray, '/loaded_trajectory_markers', 10)
        self.trajectory = []
        self.timer = None

        # Create service to get CSV path
        self.srv = self.create_service(CsvPath, 'load_trajectory_csv', self.csv_path_callback)
        self.get_logger().info("Service 'load_trajectory_csv' ready. Waiting for CSV path...")

    def csv_path_callback(self, request, response):
        file_path = request.filepath.strip()
        path = Path(file_path)

        if not path.exists():
            error_msg = f"File does not exist: {file_path}"
            self.get_logger().error(error_msg)
            response.success = False
            response.message = error_msg
            return response

        # Try loading trajectory
        try:
            self.trajectory.clear()
            with open(path, 'r') as file:
                reader = csv.DictReader(file)
                for row in reader:
                    pt = Point(
                        x=float(row['x']),
                        y=float(row['y']),
                        z=float(row['z'])
                    )
                    quat_vals = row['w'].strip('[]').split(',')
                    quat = Quaternion(
                        x=float(quat_vals[0]),
                        y=float(quat_vals[1]),
                        z=float(quat_vals[2]),
                        w=float(quat_vals[3])
                    )
                    self.trajectory.append((pt, quat))

            self.get_logger().info(f"Loaded {len(self.trajectory)} points from {file_path}")

            # Create the publishing timer (only once)
            if self.timer is None:
                self.timer = self.create_timer(1.0, self.publish_markers)
                self.get_logger().info("Started publishing trajectory markers every 1 second.")

            response.success = True
            response.message = f"Trajectory loaded successfully from {file_path}"
        except Exception as e:
            self.get_logger().error(f"Failed to read CSV: {e}")
            response.success = False
            response.message = str(e)

        return response

    def publish_markers(self):
        if not self.trajectory:
            return

        marker_array = MarkerArray()

        # Line Strip
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
        line_strip.points = [pt for pt, _ in self.trajectory]
        marker_array.markers.append(line_strip)

        # Arrows
        for idx, (pt, quat) in enumerate(self.trajectory):
            if idx % 100 != 0:
                continue
            arrow = Marker()
            arrow.header.frame_id = 'map'
            arrow.header.stamp = self.get_clock().now().to_msg()
            arrow.ns = 'trajectory_arrows'
            arrow.id = idx + 1
            arrow.type = Marker.ARROW
            arrow.action = Marker.ADD
            arrow.pose.position = pt
            arrow.pose.orientation = quat
            arrow.scale.x = 0.2
            arrow.scale.y = 0.04
            arrow.scale.z = 0.04
            arrow.color.r = 0.0
            arrow.color.g = 1.0
            arrow.color.b = 0.0
            arrow.color.a = 1.0
            marker_array.markers.append(arrow)

        self.marker_pub.publish(marker_array)
        self.get_logger().info("Published trajectory markers.")

def main(args=None):
    rclpy.init(args=args)
    node = TrajectoryVisualizer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
