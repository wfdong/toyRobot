# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/fudongwang/Documents/Interview-Australia/20210127/Iress/toyRobot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fudongwang/Documents/Interview-Australia/20210127/Iress/toyRobot/build

# Utility rule file for test.

# Include the progress variables for this target.
include test/CMakeFiles/test.dir/progress.make

test/CMakeFiles/test:
	cd /Users/fudongwang/Documents/Interview-Australia/20210127/Iress/toyRobot/build/test && ./tests-run -d\ yes

test: test/CMakeFiles/test
test: test/CMakeFiles/test.dir/build.make

.PHONY : test

# Rule to build all files generated by this target.
test/CMakeFiles/test.dir/build: test

.PHONY : test/CMakeFiles/test.dir/build

test/CMakeFiles/test.dir/clean:
	cd /Users/fudongwang/Documents/Interview-Australia/20210127/Iress/toyRobot/build/test && $(CMAKE_COMMAND) -P CMakeFiles/test.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/test.dir/clean

test/CMakeFiles/test.dir/depend:
	cd /Users/fudongwang/Documents/Interview-Australia/20210127/Iress/toyRobot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fudongwang/Documents/Interview-Australia/20210127/Iress/toyRobot /Users/fudongwang/Documents/Interview-Australia/20210127/Iress/toyRobot/test /Users/fudongwang/Documents/Interview-Australia/20210127/Iress/toyRobot/build /Users/fudongwang/Documents/Interview-Australia/20210127/Iress/toyRobot/build/test /Users/fudongwang/Documents/Interview-Australia/20210127/Iress/toyRobot/build/test/CMakeFiles/test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/test.dir/depend

