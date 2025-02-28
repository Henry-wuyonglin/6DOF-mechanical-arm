from setuptools import find_packages
from setuptools import setup

setup(
    name='dynamixel_interfaces',
    version='1.0.0',
    packages=find_packages(
        include=('dynamixel_interfaces', 'dynamixel_interfaces.*')),
)
