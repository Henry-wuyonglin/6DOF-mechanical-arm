from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            name='spawn_robot',
            output='screen',
            arguments=[
                '-file', 'src/my_robot_description/urdf/my_robot.urdf',
                '-entity', 'my_robot'
            ]
        ),
    ])
