# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_SOURCE_DIR = /Users/mrfksiv/CLionProjects/cpp_tutorials/Operator_overloading

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mrfksiv/CLionProjects/cpp_tutorials/Operator_overloading/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Operator_overloading.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Operator_overloading.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Operator_overloading.dir/flags.make

CMakeFiles/Operator_overloading.dir/main.cpp.o: CMakeFiles/Operator_overloading.dir/flags.make
CMakeFiles/Operator_overloading.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mrfksiv/CLionProjects/cpp_tutorials/Operator_overloading/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Operator_overloading.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Operator_overloading.dir/main.cpp.o -c /Users/mrfksiv/CLionProjects/cpp_tutorials/Operator_overloading/main.cpp

CMakeFiles/Operator_overloading.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Operator_overloading.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mrfksiv/CLionProjects/cpp_tutorials/Operator_overloading/main.cpp > CMakeFiles/Operator_overloading.dir/main.cpp.i

CMakeFiles/Operator_overloading.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Operator_overloading.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mrfksiv/CLionProjects/cpp_tutorials/Operator_overloading/main.cpp -o CMakeFiles/Operator_overloading.dir/main.cpp.s

# Object files for target Operator_overloading
Operator_overloading_OBJECTS = \
"CMakeFiles/Operator_overloading.dir/main.cpp.o"

# External object files for target Operator_overloading
Operator_overloading_EXTERNAL_OBJECTS =

Operator_overloading: CMakeFiles/Operator_overloading.dir/main.cpp.o
Operator_overloading: CMakeFiles/Operator_overloading.dir/build.make
Operator_overloading: CMakeFiles/Operator_overloading.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mrfksiv/CLionProjects/cpp_tutorials/Operator_overloading/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Operator_overloading"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Operator_overloading.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Operator_overloading.dir/build: Operator_overloading

.PHONY : CMakeFiles/Operator_overloading.dir/build

CMakeFiles/Operator_overloading.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Operator_overloading.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Operator_overloading.dir/clean

CMakeFiles/Operator_overloading.dir/depend:
	cd /Users/mrfksiv/CLionProjects/cpp_tutorials/Operator_overloading/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mrfksiv/CLionProjects/cpp_tutorials/Operator_overloading /Users/mrfksiv/CLionProjects/cpp_tutorials/Operator_overloading /Users/mrfksiv/CLionProjects/cpp_tutorials/Operator_overloading/cmake-build-debug /Users/mrfksiv/CLionProjects/cpp_tutorials/Operator_overloading/cmake-build-debug /Users/mrfksiv/CLionProjects/cpp_tutorials/Operator_overloading/cmake-build-debug/CMakeFiles/Operator_overloading.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Operator_overloading.dir/depend

