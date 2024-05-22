# Humble Dockerfile for Jetson Nano with Micro-ROS & Gazebo
# Humble Image for Jetson Xavier NX
# Image used for the Arcitecture linux/arm64/v8s
FROM dustynv/ros:humble-desktop-l4t-r35.4.1

COPY Purple_whales/ /Purple_whales/

# Running cte error here and in the Jetson Xavier NX
# Install Python3 and Git
RUN apt-get install -y git && apt-get install -y python3-pip

RUN apt-get install -y \
    build-essential \
    cmake \
    python3-colcon-common-extensions \
    python3-pip \
    python3-rosdep \
    python3-vcstool \
    wget

# nvidia-container-runtime
ENV NVIDIA_VISIBLE_DEVICES all
ENV NVIDIA_DRIVER_CAPABILITIES graphics,utility,compute

# Install Gazebo
RUN apt-get update && apt-get install -y \
    curl -sSL http://get.gazebosim.org | sh

# Install Pytorch
RUN pip3 install torch torchvision torchaudio --index-url https://download.pytorch.org/whl/cu118

# Update dependencies using rosdep
RUN sudo apt update && rosdep update
RUN rosdep install --from-paths src --ignore-src -y

ARG USERNAME=ros
ARG USER_UID=1000
ARG USER_GID=$USER_UID

# Create a non-root user
RUN groupadd --gid $USER_GID $USERNAME \
    && useradd -s /bin/bash --uid $USER_UID --gid $USER_GID -m $USERNAME \
    && mkdir /home/$USERNAME/.config && chown $USER_UID:$USER_UID /home/$USERNAME/.config

# Create sudo user
RUN apt-get update \
&& apt-get install -y sudo\
&& echo $USERNAME ALL =\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME\
&& chmod 0440 /etc/sudoers.d/$USERNAME \
&& rm -rf /var/lib/apt/lists/*

RUN echo 'All set!'