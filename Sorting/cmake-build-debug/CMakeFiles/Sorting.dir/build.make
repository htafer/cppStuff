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
CMAKE_SOURCE_DIR = /home/htafer/CLionProjects/Sorting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/htafer/CLionProjects/Sorting/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Sorting.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Sorting.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sorting.dir/flags.make

CMakeFiles/Sorting.dir/main.cpp.o: CMakeFiles/Sorting.dir/flags.make
CMakeFiles/Sorting.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/htafer/CLionProjects/Sorting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sorting.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sorting.dir/main.cpp.o -c /home/htafer/CLionProjects/Sorting/main.cpp

CMakeFiles/Sorting.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sorting.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/htafer/CLionProjects/Sorting/main.cpp > CMakeFiles/Sorting.dir/main.cpp.i

CMakeFiles/Sorting.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sorting.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/htafer/CLionProjects/Sorting/main.cpp -o CMakeFiles/Sorting.dir/main.cpp.s

# Object files for target Sorting
Sorting_OBJECTS = \
"CMakeFiles/Sorting.dir/main.cpp.o"

# External object files for target Sorting
Sorting_EXTERNAL_OBJECTS =

Sorting: CMakeFiles/Sorting.dir/main.cpp.o
Sorting: CMakeFiles/Sorting.dir/build.make
Sorting: CMakeFiles/Sorting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/htafer/CLionProjects/Sorting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Sorting"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sorting.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sorting.dir/build: Sorting

.PHONY : CMakeFiles/Sorting.dir/build

CMakeFiles/Sorting.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Sorting.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Sorting.dir/clean

CMakeFiles/Sorting.dir/depend:
	cd /home/htafer/CLionProjects/Sorting/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/htafer/CLionProjects/Sorting /home/htafer/CLionProjects/Sorting /home/htafer/CLionProjects/Sorting/cmake-build-debug /home/htafer/CLionProjects/Sorting/cmake-build-debug /home/htafer/CLionProjects/Sorting/cmake-build-debug/CMakeFiles/Sorting.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Sorting.dir/depend

