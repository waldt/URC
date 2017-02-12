#!/bin/bash

# Exit on error
set -e

# MISC
sudo apt-get update
sudo apt-get install vim git tmux tcpdump python-pip
pip install wstool
pip install --upgrade platformio