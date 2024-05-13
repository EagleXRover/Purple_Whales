from setuptools import find_packages, setup

package_name = 'uaq_robot'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Paolo Reyes',
    maintainer_email='paolo.alfonso.reyes@gmail.com',
    description='ROS2 package for the UAQ competition robot',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'simple_publisher = uaq_robot.simple_publisher:main',
        ],
    },
)
