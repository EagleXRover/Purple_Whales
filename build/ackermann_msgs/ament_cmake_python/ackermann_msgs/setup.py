from setuptools import find_packages
from setuptools import setup

setup(
    name='ackermann_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('ackermann_msgs', 'ackermann_msgs.*')),
)
