#!/bin/bash

# install message pack

git clone https://github.com/msgpack/msgpack-c.git
cd msgpack-c
cmake .
make
sudo make install


# install protobuf
sudo apt-get install libprotobuf-dev protobuf-compiler
wget https://github.com/protocolbuffers/protobuf/releases/download/v3.6.1/protobuf-all-3.6.1.tar.gz
tar -xzvf protobuf-all-3.6.1.tar.gz
cd protobuf-all-3.6.1.tar.gz
./configure CXXFLAGS="-D_GLIBCXX_USE_CXX11_ABI=0"
make
make check
sudo make install
sudo ldconfig