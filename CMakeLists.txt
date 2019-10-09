cmake_minimum_required(VERSION 3.15)
project(Serialization)

set(CMAKE_CXX_STANDARD 14)

find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ProtobufCustomType.proto)

add_executable(msgpack msgpack_main.cpp)
add_executable(protobuf protobuf_main.cpp ProtobufCustomType.proto ${PROTO_SRCS} ${PROTO_HDRS})

target_link_libraries(protobuf ${PROTOBUF_LIBRARY})