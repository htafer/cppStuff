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
CMAKE_SOURCE_DIR = /home/htafer/CLionProjects/Classes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/htafer/CLionProjects/Classes/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Classes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Classes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Classes.dir/flags.make

CMakeFiles/Classes.dir/main.cpp.o: CMakeFiles/Classes.dir/flags.make
CMakeFiles/Classes.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/htafer/CLionProjects/Classes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Classes.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Classes.dir/main.cpp.o -c /home/htafer/CLionProjects/Classes/main.cpp

CMakeFiles/Classes.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Classes.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/htafer/CLionProjects/Classes/main.cpp > CMakeFiles/Classes.dir/main.cpp.i

CMakeFiles/Classes.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Classes.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/htafer/CLionProjects/Classes/main.cpp -o CMakeFiles/Classes.dir/main.cpp.s

CMakeFiles/Classes.dir/Cat.cpp.o: CMakeFiles/Classes.dir/flags.make
CMakeFiles/Classes.dir/Cat.cpp.o: ../Cat.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/htafer/CLionProjects/Classes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Classes.dir/Cat.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Classes.dir/Cat.cpp.o -c /home/htafer/CLionProjects/Classes/Cat.cpp

CMakeFiles/Classes.dir/Cat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Classes.dir/Cat.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/htafer/CLionProjects/Classes/Cat.cpp > CMakeFiles/Classes.dir/Cat.cpp.i

CMakeFiles/Classes.dir/Cat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Classes.dir/Cat.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/htafer/CLionProjects/Classes/Cat.cpp -o CMakeFiles/Classes.dir/Cat.cpp.s

# Object files for target Classes
Classes_OBJECTS = \
"CMakeFiles/Classes.dir/main.cpp.o" \
"CMakeFiles/Classes.dir/Cat.cpp.o"

# External object files for target Classes
Classes_EXTERNAL_OBJECTS =

Classes: CMakeFiles/Classes.dir/main.cpp.o
Classes: CMakeFiles/Classes.dir/Cat.cpp.o
Classes: CMakeFiles/Classes.dir/build.make
Classes: CMakeFiles/Classes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/htafer/CLionProjects/Classes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Classes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Classes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Classes.dir/build: Classes

.PHONY : CMakeFiles/Classes.dir/build

CMakeFiles/Classes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Classes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Classes.dir/clean

CMakeFiles/Classes.dir/depend:
	cd /home/htafer/CLionProjects/Classes/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/htafer/CLionProjects/Classes /home/htafer/CLionProjects/Classes /home/htafer/CLionProjects/Classes/cmake-build-debug /home/htafer/CLionProjects/Classes/cmake-build-debug /home/htafer/CLionProjects/Classes/cmake-build-debug/CMakeFiles/Classes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Classes.dir/depend

