# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/overflowUser/repositories/cpp_tutorials/IO_Streams

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/overflowUser/repositories/cpp_tutorials/IO_Streams/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/IO_Streams.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/IO_Streams.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/IO_Streams.dir/flags.make

CMakeFiles/IO_Streams.dir/main.cpp.o: CMakeFiles/IO_Streams.dir/flags.make
CMakeFiles/IO_Streams.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/overflowUser/repositories/cpp_tutorials/IO_Streams/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/IO_Streams.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/IO_Streams.dir/main.cpp.o -c /Users/overflowUser/repositories/cpp_tutorials/IO_Streams/main.cpp

CMakeFiles/IO_Streams.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IO_Streams.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/overflowUser/repositories/cpp_tutorials/IO_Streams/main.cpp > CMakeFiles/IO_Streams.dir/main.cpp.i

CMakeFiles/IO_Streams.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IO_Streams.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/overflowUser/repositories/cpp_tutorials/IO_Streams/main.cpp -o CMakeFiles/IO_Streams.dir/main.cpp.s

# Object files for target IO_Streams
IO_Streams_OBJECTS = \
"CMakeFiles/IO_Streams.dir/main.cpp.o"

# External object files for target IO_Streams
IO_Streams_EXTERNAL_OBJECTS =

IO_Streams: CMakeFiles/IO_Streams.dir/main.cpp.o
IO_Streams: CMakeFiles/IO_Streams.dir/build.make
IO_Streams: CMakeFiles/IO_Streams.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/overflowUser/repositories/cpp_tutorials/IO_Streams/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable IO_Streams"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IO_Streams.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/IO_Streams.dir/build: IO_Streams

.PHONY : CMakeFiles/IO_Streams.dir/build

CMakeFiles/IO_Streams.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/IO_Streams.dir/cmake_clean.cmake
.PHONY : CMakeFiles/IO_Streams.dir/clean

CMakeFiles/IO_Streams.dir/depend:
	cd /Users/overflowUser/repositories/cpp_tutorials/IO_Streams/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/overflowUser/repositories/cpp_tutorials/IO_Streams /Users/overflowUser/repositories/cpp_tutorials/IO_Streams /Users/overflowUser/repositories/cpp_tutorials/IO_Streams/cmake-build-debug /Users/overflowUser/repositories/cpp_tutorials/IO_Streams/cmake-build-debug /Users/overflowUser/repositories/cpp_tutorials/IO_Streams/cmake-build-debug/CMakeFiles/IO_Streams.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/IO_Streams.dir/depend

