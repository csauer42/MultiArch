FROM ubuntu:20.04

ENV DEVIAN_FRONTEND=noninteractive

run apt-get update && \
    apt-get install -y \
  build-essential \
  cmake \
  gcc-avr
