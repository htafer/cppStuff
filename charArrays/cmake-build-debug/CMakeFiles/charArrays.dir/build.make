# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/htafer/bin/clion-2018.3.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/htafer/bin/clion-2018.3.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/htafer/CLionProjects/charArrays

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/htafer/CLionProjects/charArrays/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/charArrays.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/charArrays.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/charArrays.dir/flags.make

CMakeFiles/charArrays.dir/main.cpp.o: CMakeFiles/charArrays.dir/flags.make
CMakeFiles/charArrays.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/htafer/CLionProjects/charArrays/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/charArrays.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/charArrays.dir/main.cpp.o -c /home/htafer/CLionProjects/charArrays/main.cpp

CMakeFiles/charArrays.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/charArrays.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/htafer/CLionProjects/charArrays/main.cpp > CMakeFiles/charArrays.dir/main.cpp.i

CMakeFiles/charArrays.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/charArrays.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/htafer/CLionProjects/charArrays/main.cpp -o CMakeFiles/charArrays.dir/main.cpp.s

# Object files for target charArrays
charArrays_OBJECTS = \
"CMakeFiles/charArrays.dir/main.cpp.o"

# External object files for target charArrays
charArrays_EXTERNAL_OBJECTS =

charArrays: CMakeFiles/charArrays.dir/main.cpp.o
charArrays: CMakeFiles/charArrays.dir/build.make
charArrays: CMakeFiles/charArrays.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/htafer/CLionProjects/charArrays/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable charArrays"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/charArrays.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/charArrays.dir/build: charArrays

.PHONY : CMakeFiles/charArrays.dir/build

CMakeFiles/charArrays.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/charArrays.dir/cmake_clean.cmake
.PHONY : CMakeFiles/charArrays.dir/clean

CMakeFiles/charArrays.dir/depend:
	cd /home/htafer/CLionProjects/charArrays/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/htafer/CLionProjects/charArrays /home/htafer/CLionProjects/charArrays /home/htafer/CLionProjects/charArrays/cmake-build-debug /home/htafer/CLionProjects/charArrays/cmake-build-debug /home/htafer/CLionProjects/charArrays/cmake-build-debug/CMakeFiles/charArrays.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/charArrays.dir/depend

