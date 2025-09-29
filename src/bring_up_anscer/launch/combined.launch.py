#!/usr/bin/env python3

import os

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution, TextSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from ament_index_python.packages import get_package_share_directory

# Set TurtleBot3 model (burger, waffle, or waffle_pi)
os.environ['TURTLEBOT3_MODEL'] = 'waffle'

def generate_launch_description():
    # Get environment variables or set defaults
    TURTLEBOT3_MODEL = os.environ.get('TURTLEBOT3_MODEL', 'waffle')
    ROS_DISTRO = os.environ.get('ROS_DISTRO', 'humble')

    # World launch path
    world_launch = PathJoinSubstitution([
        FindPackageShare('turtlebot3_gazebo'),
        'launch',
        'turtlebot3_world.launch.py'
    ])

    # Navigation2 launch path
    nav2_launch = PathJoinSubstitution([
        FindPackageShare('turtlebot3_navigation2'),
        'launch',
        'navigation2.launch.py'
    ])

    # Parameter YAML path
    params_file = os.path.join(
        get_package_share_directory('turtlebot3_navigation2'),
        'param', ROS_DISTRO,
        f'{TURTLEBOT3_MODEL}.yaml'
    )

    # Launch TurtleBot3 Gazebo world
    turtlebot3_world_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(world_launch),
        launch_arguments={'use_sim_time': 'true'}.items()
    )

    # Launch Navigation2 stack
    turtlebot3_nav2_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(nav2_launch),
        launch_arguments={
            'use_sim_time': 'true',
            'autostart': 'true',
            'params_file': params_file
        }.items()
    )

    # Custom node: trajectory saver
    trajectory_saver_node = Node(
        package='my_py_pkg_anscer',
        executable='trajectory_publisher_saver',
        output='screen'
    )

    # Custom node: trajectory visualizer
    trajectory_visualizer_node = Node(
        package='my_py_pkg_anscer',
        executable='trajectory_visualizer',
        output='screen'
    )

    # RQT Service Caller
    rqt_service_caller = ExecuteProcess(
        cmd=['rqt', '--standalone', 'rqt_service_caller'],
        output='screen'
    )

    return LaunchDescription([
        turtlebot3_world_launch,
        turtlebot3_nav2_launch,
        trajectory_saver_node,
        trajectory_visualizer_node,
        rqt_service_caller
    ])
