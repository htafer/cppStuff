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
CMAKE_SOURCE_DIR = /home/htafer/CLionProjects/objectSlicingPolymorphism

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/htafer/CLionProjects/objectSlicingPolymorphism/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/objectSlicingPolymorphism.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/objectSlicingPolymorphism.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/objectSlicingPolymorphism.dir/flags.make

CMakeFiles/objectSlicingPolymorphism.dir/main.cpp.o: CMakeFiles/objectSlicingPolymorphism.dir/flags.make
CMakeFiles/objectSlicingPolymorphism.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/htafer/CLionProjects/objectSlicingPolymorphism/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/objectSlicingPolymorphism.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/objectSlicingPolymorphism.dir/main.cpp.o -c /home/htafer/CLionProjects/objectSlicingPolymorphism/main.cpp

CMakeFiles/objectSlicingPolymorphism.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/objectSlicingPolymorphism.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/htafer/CLionProjects/objectSlicingPolymorphism/main.cpp > CMakeFiles/objectSlicingPolymorphism.dir/main.cpp.i

CMakeFiles/objectSlicingPolymorphism.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/objectSlicingPolymorphism.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/htafer/CLionProjects/objectSlicingPolymorphism/main.cpp -o CMakeFiles/objectSlicingPolymorphism.dir/main.cpp.s

# Object files for target objectSlicingPolymorphism
objectSlicingPolymorphism_OBJECTS = \
"CMakeFiles/objectSlicingPolymorphism.dir/main.cpp.o"

# External object files for target objectSlicingPolymorphism
objectSlicingPolymorphism_EXTERNAL_OBJECTS =

objectSlicingPolymorphism: CMakeFiles/objectSlicingPolymorphism.dir/main.cpp.o
objectSlicingPolymorphism: CMakeFiles/objectSlicingPolymorphism.dir/build.make
objectSlicingPolymorphism: CMakeFiles/objectSlicingPolymorphism.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/htafer/CLionProjects/objectSlicingPolymorphism/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable objectSlicingPolymorphism"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/objectSlicingPolymorphism.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/objectSlicingPolymorphism.dir/build: objectSlicingPolymorphism

.PHONY : CMakeFiles/objectSlicingPolymorphism.dir/build

CMakeFiles/objectSlicingPolymorphism.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/objectSlicingPolymorphism.dir/cmake_clean.cmake
.PHONY : CMakeFiles/objectSlicingPolymorphism.dir/clean

CMakeFiles/objectSlicingPolymorphism.dir/depend:
	cd /home/htafer/CLionProjects/objectSlicingPolymorphism/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/htafer/CLionProjects/objectSlicingPolymorphism /home/htafer/CLionProjects/objectSlicingPolymorphism /home/htafer/CLionProjects/objectSlicingPolymorphism/cmake-build-debug /home/htafer/CLionProjects/objectSlicingPolymorphism/cmake-build-debug /home/htafer/CLionProjects/objectSlicingPolymorphism/cmake-build-debug/CMakeFiles/objectSlicingPolymorphism.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/objectSlicingPolymorphism.dir/depend

