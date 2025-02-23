# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_SOURCE_DIR = /home/azard/hueta/Infotecs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/azard/hueta/Infotecs

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/azard/hueta/Infotecs/CMakeFiles /home/azard/hueta/Infotecs//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/azard/hueta/Infotecs/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named funktion

# Build rule for target.
funktion: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 funktion
.PHONY : funktion

# fast build rule for target.
funktion/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/funktion.dir/build.make CMakeFiles/funktion.dir/build
.PHONY : funktion/fast

#=============================================================================
# Target rules for targets named prog1

# Build rule for target.
prog1: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 prog1
.PHONY : prog1

# fast build rule for target.
prog1/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog1.dir/build.make CMakeFiles/prog1.dir/build
.PHONY : prog1/fast

src/funktion.o: src/funktion.cpp.o
.PHONY : src/funktion.o

# target to build an object file
src/funktion.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/funktion.dir/build.make CMakeFiles/funktion.dir/src/funktion.cpp.o
.PHONY : src/funktion.cpp.o

src/funktion.i: src/funktion.cpp.i
.PHONY : src/funktion.i

# target to preprocess a source file
src/funktion.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/funktion.dir/build.make CMakeFiles/funktion.dir/src/funktion.cpp.i
.PHONY : src/funktion.cpp.i

src/funktion.s: src/funktion.cpp.s
.PHONY : src/funktion.s

# target to generate assembly for a file
src/funktion.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/funktion.dir/build.make CMakeFiles/funktion.dir/src/funktion.cpp.s
.PHONY : src/funktion.cpp.s

src/prog1.o: src/prog1.cpp.o
.PHONY : src/prog1.o

# target to build an object file
src/prog1.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog1.dir/build.make CMakeFiles/prog1.dir/src/prog1.cpp.o
.PHONY : src/prog1.cpp.o

src/prog1.i: src/prog1.cpp.i
.PHONY : src/prog1.i

# target to preprocess a source file
src/prog1.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog1.dir/build.make CMakeFiles/prog1.dir/src/prog1.cpp.i
.PHONY : src/prog1.cpp.i

src/prog1.s: src/prog1.cpp.s
.PHONY : src/prog1.s

# target to generate assembly for a file
src/prog1.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/prog1.dir/build.make CMakeFiles/prog1.dir/src/prog1.cpp.s
.PHONY : src/prog1.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... funktion"
	@echo "... prog1"
	@echo "... src/funktion.o"
	@echo "... src/funktion.i"
	@echo "... src/funktion.s"
	@echo "... src/prog1.o"
	@echo "... src/prog1.i"
	@echo "... src/prog1.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

