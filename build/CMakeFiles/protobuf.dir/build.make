# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zhuangwei/Desktop/Serialization

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zhuangwei/Desktop/Serialization/build

# Include any dependencies generated for this target.
include CMakeFiles/protobuf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/protobuf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/protobuf.dir/flags.make

ProtobufCustomType.pb.cc: ../Protobuf/ProtobufCustomType.proto
ProtobufCustomType.pb.cc: /usr/local/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/zhuangwei/Desktop/Serialization/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running C++ protocol buffer compiler on Protobuf/ProtobufCustomType.proto"
	/usr/local/bin/protoc --cpp_out=/home/zhuangwei/Desktop/Serialization/build -I /home/zhuangwei/Desktop/Serialization/Protobuf /home/zhuangwei/Desktop/Serialization/Protobuf/ProtobufCustomType.proto

ProtobufCustomType.pb.h: ProtobufCustomType.pb.cc
	@$(CMAKE_COMMAND) -E touch_nocreate ProtobufCustomType.pb.h

CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.o: CMakeFiles/protobuf.dir/flags.make
CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.o: ../Protobuf/protobuf_main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhuangwei/Desktop/Serialization/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.o -c /home/zhuangwei/Desktop/Serialization/Protobuf/protobuf_main.cpp

CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhuangwei/Desktop/Serialization/Protobuf/protobuf_main.cpp > CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.i

CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhuangwei/Desktop/Serialization/Protobuf/protobuf_main.cpp -o CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.s

CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.o.requires:

.PHONY : CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.o.requires

CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.o.provides: CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.o.requires
	$(MAKE) -f CMakeFiles/protobuf.dir/build.make CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.o.provides.build
.PHONY : CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.o.provides

CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.o.provides.build: CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.o


CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.o: CMakeFiles/protobuf.dir/flags.make
CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.o: ProtobufCustomType.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhuangwei/Desktop/Serialization/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.o -c /home/zhuangwei/Desktop/Serialization/build/ProtobufCustomType.pb.cc

CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhuangwei/Desktop/Serialization/build/ProtobufCustomType.pb.cc > CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.i

CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhuangwei/Desktop/Serialization/build/ProtobufCustomType.pb.cc -o CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.s

CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.o.requires:

.PHONY : CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.o.requires

CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.o.provides: CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.o.requires
	$(MAKE) -f CMakeFiles/protobuf.dir/build.make CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.o.provides.build
.PHONY : CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.o.provides

CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.o.provides.build: CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.o


# Object files for target protobuf
protobuf_OBJECTS = \
"CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.o" \
"CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.o"

# External object files for target protobuf
protobuf_EXTERNAL_OBJECTS =

protobuf: CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.o
protobuf: CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.o
protobuf: CMakeFiles/protobuf.dir/build.make
protobuf: /usr/local/lib/libprotobuf.so
protobuf: CMakeFiles/protobuf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zhuangwei/Desktop/Serialization/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable protobuf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/protobuf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/protobuf.dir/build: protobuf

.PHONY : CMakeFiles/protobuf.dir/build

CMakeFiles/protobuf.dir/requires: CMakeFiles/protobuf.dir/Protobuf/protobuf_main.cpp.o.requires
CMakeFiles/protobuf.dir/requires: CMakeFiles/protobuf.dir/ProtobufCustomType.pb.cc.o.requires

.PHONY : CMakeFiles/protobuf.dir/requires

CMakeFiles/protobuf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/protobuf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/protobuf.dir/clean

CMakeFiles/protobuf.dir/depend: ProtobufCustomType.pb.cc
CMakeFiles/protobuf.dir/depend: ProtobufCustomType.pb.h
	cd /home/zhuangwei/Desktop/Serialization/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zhuangwei/Desktop/Serialization /home/zhuangwei/Desktop/Serialization /home/zhuangwei/Desktop/Serialization/build /home/zhuangwei/Desktop/Serialization/build /home/zhuangwei/Desktop/Serialization/build/CMakeFiles/protobuf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/protobuf.dir/depend
