# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.18.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.18.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/didi/Desktop/test/proto_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/didi/Desktop/test/proto_test/build

# Include any dependencies generated for this target.
include CMakeFiles/read_data.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/read_data.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/read_data.dir/flags.make

CMakeFiles/read_data.dir/src/reader.cpp.o: CMakeFiles/read_data.dir/flags.make
CMakeFiles/read_data.dir/src/reader.cpp.o: ../src/reader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/didi/Desktop/test/proto_test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/read_data.dir/src/reader.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/read_data.dir/src/reader.cpp.o -c /Users/didi/Desktop/test/proto_test/src/reader.cpp

CMakeFiles/read_data.dir/src/reader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/read_data.dir/src/reader.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/didi/Desktop/test/proto_test/src/reader.cpp > CMakeFiles/read_data.dir/src/reader.cpp.i

CMakeFiles/read_data.dir/src/reader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/read_data.dir/src/reader.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/didi/Desktop/test/proto_test/src/reader.cpp -o CMakeFiles/read_data.dir/src/reader.cpp.s

# Object files for target read_data
read_data_OBJECTS = \
"CMakeFiles/read_data.dir/src/reader.cpp.o"

# External object files for target read_data
read_data_EXTERNAL_OBJECTS =

read_data: CMakeFiles/read_data.dir/src/reader.cpp.o
read_data: CMakeFiles/read_data.dir/build.make
read_data: proto/libproto.a
read_data: /usr/local/lib/libprotobuf.dylib
read_data: CMakeFiles/read_data.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/didi/Desktop/test/proto_test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable read_data"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/read_data.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/read_data.dir/build: read_data

.PHONY : CMakeFiles/read_data.dir/build

CMakeFiles/read_data.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/read_data.dir/cmake_clean.cmake
.PHONY : CMakeFiles/read_data.dir/clean

CMakeFiles/read_data.dir/depend:
	cd /Users/didi/Desktop/test/proto_test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/didi/Desktop/test/proto_test /Users/didi/Desktop/test/proto_test /Users/didi/Desktop/test/proto_test/build /Users/didi/Desktop/test/proto_test/build /Users/didi/Desktop/test/proto_test/build/CMakeFiles/read_data.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/read_data.dir/depend

