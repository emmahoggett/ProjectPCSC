# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test_random_var.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_random_var.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_random_var.dir/flags.make

CMakeFiles/test_random_var.dir/test_random_variable.o: CMakeFiles/test_random_var.dir/flags.make
CMakeFiles/test_random_var.dir/test_random_variable.o: ../test_random_variable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_random_var.dir/test_random_variable.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_random_var.dir/test_random_variable.o -c /mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2/test_random_variable.cpp

CMakeFiles/test_random_var.dir/test_random_variable.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_random_var.dir/test_random_variable.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2/test_random_variable.cpp > CMakeFiles/test_random_var.dir/test_random_variable.i

CMakeFiles/test_random_var.dir/test_random_variable.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_random_var.dir/test_random_variable.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2/test_random_variable.cpp -o CMakeFiles/test_random_var.dir/test_random_variable.s

CMakeFiles/test_random_var.dir/test_random_variable.o.requires:

.PHONY : CMakeFiles/test_random_var.dir/test_random_variable.o.requires

CMakeFiles/test_random_var.dir/test_random_variable.o.provides: CMakeFiles/test_random_var.dir/test_random_variable.o.requires
	$(MAKE) -f CMakeFiles/test_random_var.dir/build.make CMakeFiles/test_random_var.dir/test_random_variable.o.provides.build
.PHONY : CMakeFiles/test_random_var.dir/test_random_variable.o.provides

CMakeFiles/test_random_var.dir/test_random_variable.o.provides.build: CMakeFiles/test_random_var.dir/test_random_variable.o


CMakeFiles/test_random_var.dir/Normal.o: CMakeFiles/test_random_var.dir/flags.make
CMakeFiles/test_random_var.dir/Normal.o: ../Normal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test_random_var.dir/Normal.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_random_var.dir/Normal.o -c /mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2/Normal.cpp

CMakeFiles/test_random_var.dir/Normal.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_random_var.dir/Normal.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2/Normal.cpp > CMakeFiles/test_random_var.dir/Normal.i

CMakeFiles/test_random_var.dir/Normal.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_random_var.dir/Normal.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2/Normal.cpp -o CMakeFiles/test_random_var.dir/Normal.s

CMakeFiles/test_random_var.dir/Normal.o.requires:

.PHONY : CMakeFiles/test_random_var.dir/Normal.o.requires

CMakeFiles/test_random_var.dir/Normal.o.provides: CMakeFiles/test_random_var.dir/Normal.o.requires
	$(MAKE) -f CMakeFiles/test_random_var.dir/build.make CMakeFiles/test_random_var.dir/Normal.o.provides.build
.PHONY : CMakeFiles/test_random_var.dir/Normal.o.provides

CMakeFiles/test_random_var.dir/Normal.o.provides.build: CMakeFiles/test_random_var.dir/Normal.o


CMakeFiles/test_random_var.dir/Uniform.o: CMakeFiles/test_random_var.dir/flags.make
CMakeFiles/test_random_var.dir/Uniform.o: ../Uniform.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/test_random_var.dir/Uniform.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_random_var.dir/Uniform.o -c /mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2/Uniform.cpp

CMakeFiles/test_random_var.dir/Uniform.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_random_var.dir/Uniform.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2/Uniform.cpp > CMakeFiles/test_random_var.dir/Uniform.i

CMakeFiles/test_random_var.dir/Uniform.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_random_var.dir/Uniform.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2/Uniform.cpp -o CMakeFiles/test_random_var.dir/Uniform.s

CMakeFiles/test_random_var.dir/Uniform.o.requires:

.PHONY : CMakeFiles/test_random_var.dir/Uniform.o.requires

CMakeFiles/test_random_var.dir/Uniform.o.provides: CMakeFiles/test_random_var.dir/Uniform.o.requires
	$(MAKE) -f CMakeFiles/test_random_var.dir/build.make CMakeFiles/test_random_var.dir/Uniform.o.provides.build
.PHONY : CMakeFiles/test_random_var.dir/Uniform.o.provides

CMakeFiles/test_random_var.dir/Uniform.o.provides.build: CMakeFiles/test_random_var.dir/Uniform.o


# Object files for target test_random_var
test_random_var_OBJECTS = \
"CMakeFiles/test_random_var.dir/test_random_variable.o" \
"CMakeFiles/test_random_var.dir/Normal.o" \
"CMakeFiles/test_random_var.dir/Uniform.o"

# External object files for target test_random_var
test_random_var_EXTERNAL_OBJECTS =

test_random_var: CMakeFiles/test_random_var.dir/test_random_variable.o
test_random_var: CMakeFiles/test_random_var.dir/Normal.o
test_random_var: CMakeFiles/test_random_var.dir/Uniform.o
test_random_var: CMakeFiles/test_random_var.dir/build.make
test_random_var: CMakeFiles/test_random_var.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable test_random_var"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_random_var.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_random_var.dir/build: test_random_var

.PHONY : CMakeFiles/test_random_var.dir/build

CMakeFiles/test_random_var.dir/requires: CMakeFiles/test_random_var.dir/test_random_variable.o.requires
CMakeFiles/test_random_var.dir/requires: CMakeFiles/test_random_var.dir/Normal.o.requires
CMakeFiles/test_random_var.dir/requires: CMakeFiles/test_random_var.dir/Uniform.o.requires

.PHONY : CMakeFiles/test_random_var.dir/requires

CMakeFiles/test_random_var.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_random_var.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_random_var.dir/clean

CMakeFiles/test_random_var.dir/depend:
	cd /mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2 /mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2 /mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2/cmake-build-debug /mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2/cmake-build-debug /mnt/c/Users/pierr/Documents/GitHub/ProjectPCSC_2/cmake-build-debug/CMakeFiles/test_random_var.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_random_var.dir/depend
