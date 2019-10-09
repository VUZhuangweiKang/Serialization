cmake_minimum_required(VERSION 3.15)
project(TestSerial)

set(CMAKE_CXX_STANDARD 14)

add_executable(TestSerial msgpack_main.cpp protobuf_main.cpp utl.cpp)