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
CMAKE_SOURCE_DIR = /home/htafer/CLionProjects/functionPointers

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/htafer/CLionProjects/functionPointers/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/functionPointers.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/functionPointers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/functionPointers.dir/flags.make

CMakeFiles/functionPointers.dir/main.cpp.o: CMakeFiles/functionPointers.dir/flags.make
CMakeFiles/functionPointers.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/htafer/CLionProjects/functionPointers/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/functionPointers.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/functionPointers.dir/main.cpp.o -c /home/htafer/CLionProjects/functionPointers/main.cpp

CMakeFiles/functionPointers.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/functionPointers.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/htafer/CLionProjects/functionPointers/main.cpp > CMakeFiles/functionPointers.dir/main.cpp.i

CMakeFiles/functionPointers.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/functionPointers.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/htafer/CLionProjects/functionPointers/main.cpp -o CMakeFiles/functionPointers.dir/main.cpp.s

# Object files for target functionPointers
functionPointers_OBJECTS = \
"CMakeFiles/functionPointers.dir/main.cpp.o"

# External object files for target functionPointers
functionPointers_EXTERNAL_OBJECTS =

functionPointers: CMakeFiles/functionPointers.dir/main.cpp.o
functionPointers: CMakeFiles/functionPointers.dir/build.make
functionPointers: CMakeFiles/functionPointers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/htafer/CLionProjects/functionPointers/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable functionPointers"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/functionPointers.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/functionPointers.dir/build: functionPointers

.PHONY : CMakeFiles/functionPointers.dir/build

CMakeFiles/functionPointers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/functionPointers.dir/cmake_clean.cmake
.PHONY : CMakeFiles/functionPointers.dir/clean

CMakeFiles/functionPointers.dir/depend:
	cd /home/htafer/CLionProjects/functionPointers/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/htafer/CLionProjects/functionPointers /home/htafer/CLionProjects/functionPointers /home/htafer/CLionProjects/functionPointers/cmake-build-debug /home/htafer/CLionProjects/functionPointers/cmake-build-debug /home/htafer/CLionProjects/functionPointers/cmake-build-debug/CMakeFiles/functionPointers.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/functionPointers.dir/depend
