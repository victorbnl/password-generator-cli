# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/mnt/c/Users/Victor/Desktop/Password generator"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/Victor/Desktop/Password generator"

# Include any dependencies generated for this target.
include src/CMakeFiles/passw_gen_cli.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/passw_gen_cli.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/passw_gen_cli.dir/flags.make

src/CMakeFiles/passw_gen_cli.dir/main.cpp.o: src/CMakeFiles/passw_gen_cli.dir/flags.make
src/CMakeFiles/passw_gen_cli.dir/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Victor/Desktop/Password generator/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/passw_gen_cli.dir/main.cpp.o"
	cd "/mnt/c/Users/Victor/Desktop/Password generator/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/passw_gen_cli.dir/main.cpp.o -c "/mnt/c/Users/Victor/Desktop/Password generator/src/main.cpp"

src/CMakeFiles/passw_gen_cli.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/passw_gen_cli.dir/main.cpp.i"
	cd "/mnt/c/Users/Victor/Desktop/Password generator/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/Victor/Desktop/Password generator/src/main.cpp" > CMakeFiles/passw_gen_cli.dir/main.cpp.i

src/CMakeFiles/passw_gen_cli.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/passw_gen_cli.dir/main.cpp.s"
	cd "/mnt/c/Users/Victor/Desktop/Password generator/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/Victor/Desktop/Password generator/src/main.cpp" -o CMakeFiles/passw_gen_cli.dir/main.cpp.s

# Object files for target passw_gen_cli
passw_gen_cli_OBJECTS = \
"CMakeFiles/passw_gen_cli.dir/main.cpp.o"

# External object files for target passw_gen_cli
passw_gen_cli_EXTERNAL_OBJECTS =

src/passw_gen_cli: src/CMakeFiles/passw_gen_cli.dir/main.cpp.o
src/passw_gen_cli: src/CMakeFiles/passw_gen_cli.dir/build.make
src/passw_gen_cli: lib/libpassw_gen_lib.a
src/passw_gen_cli: src/CMakeFiles/passw_gen_cli.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Users/Victor/Desktop/Password generator/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable passw_gen_cli"
	cd "/mnt/c/Users/Victor/Desktop/Password generator/src" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/passw_gen_cli.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/passw_gen_cli.dir/build: src/passw_gen_cli

.PHONY : src/CMakeFiles/passw_gen_cli.dir/build

src/CMakeFiles/passw_gen_cli.dir/clean:
	cd "/mnt/c/Users/Victor/Desktop/Password generator/src" && $(CMAKE_COMMAND) -P CMakeFiles/passw_gen_cli.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/passw_gen_cli.dir/clean

src/CMakeFiles/passw_gen_cli.dir/depend:
	cd "/mnt/c/Users/Victor/Desktop/Password generator" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/Victor/Desktop/Password generator" "/mnt/c/Users/Victor/Desktop/Password generator/src" "/mnt/c/Users/Victor/Desktop/Password generator" "/mnt/c/Users/Victor/Desktop/Password generator/src" "/mnt/c/Users/Victor/Desktop/Password generator/src/CMakeFiles/passw_gen_cli.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : src/CMakeFiles/passw_gen_cli.dir/depend
