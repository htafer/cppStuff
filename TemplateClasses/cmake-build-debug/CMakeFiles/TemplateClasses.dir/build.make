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
CMAKE_SOURCE_DIR = /home/htafer/CLionProjects/TemplateClasses

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/htafer/CLionProjects/TemplateClasses/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TemplateClasses.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TemplateClasses.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TemplateClasses.dir/flags.make

CMakeFiles/TemplateClasses.dir/main.cpp.o: CMakeFiles/TemplateClasses.dir/flags.make
CMakeFiles/TemplateClasses.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/htafer/CLionProjects/TemplateClasses/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TemplateClasses.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TemplateClasses.dir/main.cpp.o -c /home/htafer/CLionProjects/TemplateClasses/main.cpp

CMakeFiles/TemplateClasses.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TemplateClasses.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/htafer/CLionProjects/TemplateClasses/main.cpp > CMakeFiles/TemplateClasses.dir/main.cpp.i

CMakeFiles/TemplateClasses.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TemplateClasses.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/htafer/CLionProjects/TemplateClasses/main.cpp -o CMakeFiles/TemplateClasses.dir/main.cpp.s

# Object files for target TemplateClasses
TemplateClasses_OBJECTS = \
"CMakeFiles/TemplateClasses.dir/main.cpp.o"

# External object files for target TemplateClasses
TemplateClasses_EXTERNAL_OBJECTS =

TemplateClasses: CMakeFiles/TemplateClasses.dir/main.cpp.o
TemplateClasses: CMakeFiles/TemplateClasses.dir/build.make
TemplateClasses: CMakeFiles/TemplateClasses.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/htafer/CLionProjects/TemplateClasses/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TemplateClasses"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TemplateClasses.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TemplateClasses.dir/build: TemplateClasses

.PHONY : CMakeFiles/TemplateClasses.dir/build

CMakeFiles/TemplateClasses.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TemplateClasses.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TemplateClasses.dir/clean

CMakeFiles/TemplateClasses.dir/depend:
	cd /home/htafer/CLionProjects/TemplateClasses/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/htafer/CLionProjects/TemplateClasses /home/htafer/CLionProjects/TemplateClasses /home/htafer/CLionProjects/TemplateClasses/cmake-build-debug /home/htafer/CLionProjects/TemplateClasses/cmake-build-debug /home/htafer/CLionProjects/TemplateClasses/cmake-build-debug/CMakeFiles/TemplateClasses.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TemplateClasses.dir/depend

