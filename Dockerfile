FROM ubuntu:20.04

run apt-get update && apt-get install -y \
  avr-gcc \
  build-essential \
  cmake
