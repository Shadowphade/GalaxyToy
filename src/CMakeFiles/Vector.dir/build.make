# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rhysm/Projects/GalaxyToy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rhysm/Projects/GalaxyToy

# Include any dependencies generated for this target.
include src/CMakeFiles/Vector.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/Vector.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/Vector.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/Vector.dir/flags.make

src/CMakeFiles/Vector.dir/Velocity.cpp.o: src/CMakeFiles/Vector.dir/flags.make
src/CMakeFiles/Vector.dir/Velocity.cpp.o: src/Velocity.cpp
src/CMakeFiles/Vector.dir/Velocity.cpp.o: src/CMakeFiles/Vector.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rhysm/Projects/GalaxyToy/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/Vector.dir/Velocity.cpp.o"
	cd /home/rhysm/Projects/GalaxyToy/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/Vector.dir/Velocity.cpp.o -MF CMakeFiles/Vector.dir/Velocity.cpp.o.d -o CMakeFiles/Vector.dir/Velocity.cpp.o -c /home/rhysm/Projects/GalaxyToy/src/Velocity.cpp

src/CMakeFiles/Vector.dir/Velocity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Vector.dir/Velocity.cpp.i"
	cd /home/rhysm/Projects/GalaxyToy/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rhysm/Projects/GalaxyToy/src/Velocity.cpp > CMakeFiles/Vector.dir/Velocity.cpp.i

src/CMakeFiles/Vector.dir/Velocity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Vector.dir/Velocity.cpp.s"
	cd /home/rhysm/Projects/GalaxyToy/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rhysm/Projects/GalaxyToy/src/Velocity.cpp -o CMakeFiles/Vector.dir/Velocity.cpp.s

# Object files for target Vector
Vector_OBJECTS = \
"CMakeFiles/Vector.dir/Velocity.cpp.o"

# External object files for target Vector
Vector_EXTERNAL_OBJECTS =

src/libVector.a: src/CMakeFiles/Vector.dir/Velocity.cpp.o
src/libVector.a: src/CMakeFiles/Vector.dir/build.make
src/libVector.a: src/CMakeFiles/Vector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rhysm/Projects/GalaxyToy/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libVector.a"
	cd /home/rhysm/Projects/GalaxyToy/src && $(CMAKE_COMMAND) -P CMakeFiles/Vector.dir/cmake_clean_target.cmake
	cd /home/rhysm/Projects/GalaxyToy/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Vector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/Vector.dir/build: src/libVector.a
.PHONY : src/CMakeFiles/Vector.dir/build

src/CMakeFiles/Vector.dir/clean:
	cd /home/rhysm/Projects/GalaxyToy/src && $(CMAKE_COMMAND) -P CMakeFiles/Vector.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/Vector.dir/clean

src/CMakeFiles/Vector.dir/depend:
	cd /home/rhysm/Projects/GalaxyToy && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rhysm/Projects/GalaxyToy /home/rhysm/Projects/GalaxyToy/src /home/rhysm/Projects/GalaxyToy /home/rhysm/Projects/GalaxyToy/src /home/rhysm/Projects/GalaxyToy/src/CMakeFiles/Vector.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/Vector.dir/depend

