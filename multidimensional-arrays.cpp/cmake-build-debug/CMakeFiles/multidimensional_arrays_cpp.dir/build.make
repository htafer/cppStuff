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
CMAKE_SOURCE_DIR = /home/htafer/CLionProjects/multidimensional-arrays.cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/htafer/CLionProjects/multidimensional-arrays.cpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/multidimensional_arrays_cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/multidimensional_arrays_cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/multidimensional_arrays_cpp.dir/flags.make

CMakeFiles/multidimensional_arrays_cpp.dir/main.cpp.o: CMakeFiles/multidimensional_arrays_cpp.dir/flags.make
CMakeFiles/multidimensional_arrays_cpp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/htafer/CLionProjects/multidimensional-arrays.cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/multidimensional_arrays_cpp.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/multidimensional_arrays_cpp.dir/main.cpp.o -c /home/htafer/CLionProjects/multidimensional-arrays.cpp/main.cpp

CMakeFiles/multidimensional_arrays_cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/multidimensional_arrays_cpp.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/htafer/CLionProjects/multidimensional-arrays.cpp/main.cpp > CMakeFiles/multidimensional_arrays_cpp.dir/main.cpp.i

CMakeFiles/multidimensional_arrays_cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/multidimensional_arrays_cpp.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/htafer/CLionProjects/multidimensional-arrays.cpp/main.cpp -o CMakeFiles/multidimensional_arrays_cpp.dir/main.cpp.s

CMakeFiles/multidimensional_arrays_cpp.dir/utils.cpp.o: CMakeFiles/multidimensional_arrays_cpp.dir/flags.make
CMakeFiles/multidimensional_arrays_cpp.dir/utils.cpp.o: ../utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/htafer/CLionProjects/multidimensional-arrays.cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/multidimensional_arrays_cpp.dir/utils.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/multidimensional_arrays_cpp.dir/utils.cpp.o -c /home/htafer/CLionProjects/multidimensional-arrays.cpp/utils.cpp

CMakeFiles/multidimensional_arrays_cpp.dir/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/multidimensional_arrays_cpp.dir/utils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/htafer/CLionProjects/multidimensional-arrays.cpp/utils.cpp > CMakeFiles/multidimensional_arrays_cpp.dir/utils.cpp.i

CMakeFiles/multidimensional_arrays_cpp.dir/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/multidimensional_arrays_cpp.dir/utils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/htafer/CLionProjects/multidimensional-arrays.cpp/utils.cpp -o CMakeFiles/multidimensional_arrays_cpp.dir/utils.cpp.s

# Object files for target multidimensional_arrays_cpp
multidimensional_arrays_cpp_OBJECTS = \
"CMakeFiles/multidimensional_arrays_cpp.dir/main.cpp.o" \
"CMakeFiles/multidimensional_arrays_cpp.dir/utils.cpp.o"

# External object files for target multidimensional_arrays_cpp
multidimensional_arrays_cpp_EXTERNAL_OBJECTS =

multidimensional_arrays_cpp: CMakeFiles/multidimensional_arrays_cpp.dir/main.cpp.o
multidimensional_arrays_cpp: CMakeFiles/multidimensional_arrays_cpp.dir/utils.cpp.o
multidimensional_arrays_cpp: CMakeFiles/multidimensional_arrays_cpp.dir/build.make
multidimensional_arrays_cpp: CMakeFiles/multidimensional_arrays_cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/htafer/CLionProjects/multidimensional-arrays.cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable multidimensional_arrays_cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/multidimensional_arrays_cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/multidimensional_arrays_cpp.dir/build: multidimensional_arrays_cpp

.PHONY : CMakeFiles/multidimensional_arrays_cpp.dir/build

CMakeFiles/multidimensional_arrays_cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/multidimensional_arrays_cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/multidimensional_arrays_cpp.dir/clean

CMakeFiles/multidimensional_arrays_cpp.dir/depend:
	cd /home/htafer/CLionProjects/multidimensional-arrays.cpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/htafer/CLionProjects/multidimensional-arrays.cpp /home/htafer/CLionProjects/multidimensional-arrays.cpp /home/htafer/CLionProjects/multidimensional-arrays.cpp/cmake-build-debug /home/htafer/CLionProjects/multidimensional-arrays.cpp/cmake-build-debug /home/htafer/CLionProjects/multidimensional-arrays.cpp/cmake-build-debug/CMakeFiles/multidimensional_arrays_cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/multidimensional_arrays_cpp.dir/depend

