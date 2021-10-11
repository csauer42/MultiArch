FROM ubuntu:20.04

LABEL version "1.0.2"

ENV DEBIAN_FRONTEND=noninteractive

# update & install
RUN apt-get update && \
    apt-get install -y \
  avr-libc \
  build-essential \
  cmake \
  git \
  gcc-avr \
  xz-utils

# Install aarch64 toolchain
COPY gcc-arm-10.3-2021.07-x86_64-aarch64-none-linux-gnu.tar.xz /tmp
RUN mkdir /usr/local/gcc-10.3-2021.07-aarch64 && tar -C /usr/local/gcc-10.3-2021.07-aarch64/ -xf /tmp/gcc-arm-10.3-2021.07-x86_64-aarch64-none-linux-gnu.tar.xz && rm /tmp/gcc-arm-10.3-2021.07-x86_64-aarch64-none-linux-gnu.tar.xz
