# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/paolo/purple_whales_ws/firmware/dev_ws/ament/ament_cmake/ament_cmake_vendor_package/test/depender

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/paolo/purple_whales_ws/firmware/dev_ws/build/ament_cmake_vendor_package/test/depender-prefix/src/depender-build

# Include any dependencies generated for this target.
include CMakeFiles/depender.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/depender.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/depender.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/depender.dir/flags.make

CMakeFiles/depender.dir/src/depender.c.o: CMakeFiles/depender.dir/flags.make
CMakeFiles/depender.dir/src/depender.c.o: /home/paolo/purple_whales_ws/firmware/dev_ws/ament/ament_cmake/ament_cmake_vendor_package/test/depender/src/depender.c
CMakeFiles/depender.dir/src/depender.c.o: CMakeFiles/depender.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/paolo/purple_whales_ws/firmware/dev_ws/build/ament_cmake_vendor_package/test/depender-prefix/src/depender-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/depender.dir/src/depender.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/depender.dir/src/depender.c.o -MF CMakeFiles/depender.dir/src/depender.c.o.d -o CMakeFiles/depender.dir/src/depender.c.o -c /home/paolo/purple_whales_ws/firmware/dev_ws/ament/ament_cmake/ament_cmake_vendor_package/test/depender/src/depender.c

CMakeFiles/depender.dir/src/depender.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/depender.dir/src/depender.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/paolo/purple_whales_ws/firmware/dev_ws/ament/ament_cmake/ament_cmake_vendor_package/test/depender/src/depender.c > CMakeFiles/depender.dir/src/depender.c.i

CMakeFiles/depender.dir/src/depender.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/depender.dir/src/depender.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/paolo/purple_whales_ws/firmware/dev_ws/ament/ament_cmake/ament_cmake_vendor_package/test/depender/src/depender.c -o CMakeFiles/depender.dir/src/depender.c.s

# Object files for target depender
depender_OBJECTS = \
"CMakeFiles/depender.dir/src/depender.c.o"

# External object files for target depender
depender_EXTERNAL_OBJECTS =

depender: CMakeFiles/depender.dir/src/depender.c.o
depender: CMakeFiles/depender.dir/build.make
depender: /home/paolo/purple_whales_ws/firmware/dev_ws/build/ament_cmake_vendor_package/test/exlib_bad-prefix/install/lib/libexlib.so
depender: CMakeFiles/depender.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/paolo/purple_whales_ws/firmware/dev_ws/build/ament_cmake_vendor_package/test/depender-prefix/src/depender-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable depender"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/depender.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/depender.dir/build: depender
.PHONY : CMakeFiles/depender.dir/build

CMakeFiles/depender.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/depender.dir/cmake_clean.cmake
.PHONY : CMakeFiles/depender.dir/clean

CMakeFiles/depender.dir/depend:
	cd /home/paolo/purple_whales_ws/firmware/dev_ws/build/ament_cmake_vendor_package/test/depender-prefix/src/depender-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/paolo/purple_whales_ws/firmware/dev_ws/ament/ament_cmake/ament_cmake_vendor_package/test/depender /home/paolo/purple_whales_ws/firmware/dev_ws/ament/ament_cmake/ament_cmake_vendor_package/test/depender /home/paolo/purple_whales_ws/firmware/dev_ws/build/ament_cmake_vendor_package/test/depender-prefix/src/depender-build /home/paolo/purple_whales_ws/firmware/dev_ws/build/ament_cmake_vendor_package/test/depender-prefix/src/depender-build /home/paolo/purple_whales_ws/firmware/dev_ws/build/ament_cmake_vendor_package/test/depender-prefix/src/depender-build/CMakeFiles/depender.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/depender.dir/depend

