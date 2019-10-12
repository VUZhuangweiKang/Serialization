cmake_minimum_required(VERSION 3.15)
project(Serialization CXX)

set(CMAKE_CXX_STANDARD 14)

# Protobuf
find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ProtobufCustomType.proto)

# Cap'n proto
find_package(CapnProto CONFIG REQUIRED)
capnp_generate_cpp(TestCustomTypeSources TestCustomTypeHeaders TestCustomType.capnp)

# executables
add_executable(msgpack msgpack_main.cpp)
add_executable(protobuf protobuf_main.cpp ProtobufCustomType.proto ${PROTO_SRCS} ${PROTO_HDRS})
add_executable(capnproto capnproto_main.cpp ${TestCustomTypeSources})

# link libraries
target_link_libraries(protobuf ${PROTOBUF_LIBRARY})
target_link_libraries(capnproto PRIVATE CapnProto::capnp)
target_include_directories(capnproto PRIVATE ${CMAKE_CURRENT_BINARY_DIR})