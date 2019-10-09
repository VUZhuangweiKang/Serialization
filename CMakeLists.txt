cmake_minimum_required(VERSION 3.15)
project(Serialization)

set(CMAKE_CXX_STANDARD 14)

add_executable(msgpack msgpack_main.cpp)
add_executable(protobuf protobuf_main.cpp)