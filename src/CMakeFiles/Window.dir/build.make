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
include src/CMakeFiles/Window.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/Window.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/Window.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/Window.dir/flags.make

src/CMakeFiles/Window.dir/Window.cpp.o: src/CMakeFiles/Window.dir/flags.make
src/CMakeFiles/Window.dir/Window.cpp.o: src/Window.cpp
src/CMakeFiles/Window.dir/Window.cpp.o: src/CMakeFiles/Window.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rhysm/Projects/GalaxyToy/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/Window.dir/Window.cpp.o"
	cd /home/rhysm/Projects/GalaxyToy/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/Window.dir/Window.cpp.o -MF CMakeFiles/Window.dir/Window.cpp.o.d -o CMakeFiles/Window.dir/Window.cpp.o -c /home/rhysm/Projects/GalaxyToy/src/Window.cpp

src/CMakeFiles/Window.dir/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Window.dir/Window.cpp.i"
	cd /home/rhysm/Projects/GalaxyToy/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rhysm/Projects/GalaxyToy/src/Window.cpp > CMakeFiles/Window.dir/Window.cpp.i

src/CMakeFiles/Window.dir/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Window.dir/Window.cpp.s"
	cd /home/rhysm/Projects/GalaxyToy/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rhysm/Projects/GalaxyToy/src/Window.cpp -o CMakeFiles/Window.dir/Window.cpp.s

# Object files for target Window
Window_OBJECTS = \
"CMakeFiles/Window.dir/Window.cpp.o"

# External object files for target Window
Window_EXTERNAL_OBJECTS =

src/libWindow.a: src/CMakeFiles/Window.dir/Window.cpp.o
src/libWindow.a: src/CMakeFiles/Window.dir/build.make
src/libWindow.a: src/CMakeFiles/Window.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rhysm/Projects/GalaxyToy/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libWindow.a"
	cd /home/rhysm/Projects/GalaxyToy/src && $(CMAKE_COMMAND) -P CMakeFiles/Window.dir/cmake_clean_target.cmake
	cd /home/rhysm/Projects/GalaxyToy/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Window.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/Window.dir/build: src/libWindow.a
.PHONY : src/CMakeFiles/Window.dir/build

src/CMakeFiles/Window.dir/clean:
	cd /home/rhysm/Projects/GalaxyToy/src && $(CMAKE_COMMAND) -P CMakeFiles/Window.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/Window.dir/clean

src/CMakeFiles/Window.dir/depend:
	cd /home/rhysm/Projects/GalaxyToy && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rhysm/Projects/GalaxyToy /home/rhysm/Projects/GalaxyToy/src /home/rhysm/Projects/GalaxyToy /home/rhysm/Projects/GalaxyToy/src /home/rhysm/Projects/GalaxyToy/src/CMakeFiles/Window.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/Window.dir/depend

