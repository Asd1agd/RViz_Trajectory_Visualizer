from setuptools import find_packages, setup
import os 
from glob import glob

package_name = 'my_py_pkg_anscer'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # Include the srv files in the install
        (os.path.join('share', package_name, 'srv'), glob('srv/*.srv')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='asd',
    maintainer_email='asd@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "trajectory_publisher_saver = my_py_pkg_anscer.trajectory_publisher_saver:main",
            "path_drawer = my_py_pkg_anscer.path_drawer:main",
            "trajectory_visualizer = my_py_pkg_anscer.trajectory_visualizer:main"
        ],
    },
)

