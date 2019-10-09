#!/bin/bash

# install message pack

git clone https://github.com/msgpack/msgpack-c.git
cd msgpack-c
cmake .
make
sudo make install


# install protobuf
sudo apt-get install autoconf automake libtool curl make g++ unzip -y
git clone https://github.com/google/protobuf.git
cd protobuf
git submodule update --init --recursive
./autogen.sh && ./configure
make
make check
sudo make install
sudo ldconfig