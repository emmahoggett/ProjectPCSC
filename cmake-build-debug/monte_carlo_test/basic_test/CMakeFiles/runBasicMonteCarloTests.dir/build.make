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
CMAKE_SOURCE_DIR = /mnt/c/Users/pierr/Desktop/PCSC_safe_3/ProjectPCSC_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/pierr/Desktop/PCSC_safe_3/ProjectPCSC_2/cmake-build-debug

# Include any dependencies generated for this target.
include monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/depend.make

# Include the progress variables for this target.
include monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/progress.make

# Include the compile flags for this target's objects.
include monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/flags.make

monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.o: monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/flags.make
monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.o: ../monte_carlo_test/basic_test/test_google_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/pierr/Desktop/PCSC_safe_3/ProjectPCSC_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.o"
	cd /mnt/c/Users/pierr/Desktop/PCSC_safe_3/ProjectPCSC_2/cmake-build-debug/monte_carlo_test/basic_test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.o -c /mnt/c/Users/pierr/Desktop/PCSC_safe_3/ProjectPCSC_2/monte_carlo_test/basic_test/test_google_test.cpp

monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.i"
	cd /mnt/c/Users/pierr/Desktop/PCSC_safe_3/ProjectPCSC_2/cmake-build-debug/monte_carlo_test/basic_test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/pierr/Desktop/PCSC_safe_3/ProjectPCSC_2/monte_carlo_test/basic_test/test_google_test.cpp > CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.i

monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.s"
	cd /mnt/c/Users/pierr/Desktop/PCSC_safe_3/ProjectPCSC_2/cmake-build-debug/monte_carlo_test/basic_test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/pierr/Desktop/PCSC_safe_3/ProjectPCSC_2/monte_carlo_test/basic_test/test_google_test.cpp -o CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.s

monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.o.requires:

.PHONY : monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.o.requires

monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.o.provides: monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.o.requires
	$(MAKE) -f monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/build.make monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.o.provides.build
.PHONY : monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.o.provides

monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.o.provides.build: monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.o


# Object files for target runBasicMonteCarloTests
runBasicMonteCarloTests_OBJECTS = \
"CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.o"

# External object files for target runBasicMonteCarloTests
runBasicMonteCarloTests_EXTERNAL_OBJECTS =

monte_carlo_test/basic_test/runBasicMonteCarloTests: monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.o
monte_carlo_test/basic_test/runBasicMonteCarloTests: monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/build.make
monte_carlo_test/basic_test/runBasicMonteCarloTests: lib/libgtestd.a
monte_carlo_test/basic_test/runBasicMonteCarloTests: lib/libgtest_maind.a
monte_carlo_test/basic_test/runBasicMonteCarloTests: lib/libgtestd.a
monte_carlo_test/basic_test/runBasicMonteCarloTests: monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/pierr/Desktop/PCSC_safe_3/ProjectPCSC_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable runBasicMonteCarloTests"
	cd /mnt/c/Users/pierr/Desktop/PCSC_safe_3/ProjectPCSC_2/cmake-build-debug/monte_carlo_test/basic_test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/runBasicMonteCarloTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/build: monte_carlo_test/basic_test/runBasicMonteCarloTests

.PHONY : monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/build

monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/requires: monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/test_google_test.cpp.o.requires

.PHONY : monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/requires

monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/clean:
	cd /mnt/c/Users/pierr/Desktop/PCSC_safe_3/ProjectPCSC_2/cmake-build-debug/monte_carlo_test/basic_test && $(CMAKE_COMMAND) -P CMakeFiles/runBasicMonteCarloTests.dir/cmake_clean.cmake
.PHONY : monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/clean

monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/depend:
	cd /mnt/c/Users/pierr/Desktop/PCSC_safe_3/ProjectPCSC_2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/pierr/Desktop/PCSC_safe_3/ProjectPCSC_2 /mnt/c/Users/pierr/Desktop/PCSC_safe_3/ProjectPCSC_2/monte_carlo_test/basic_test /mnt/c/Users/pierr/Desktop/PCSC_safe_3/ProjectPCSC_2/cmake-build-debug /mnt/c/Users/pierr/Desktop/PCSC_safe_3/ProjectPCSC_2/cmake-build-debug/monte_carlo_test/basic_test /mnt/c/Users/pierr/Desktop/PCSC_safe_3/ProjectPCSC_2/cmake-build-debug/monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : monte_carlo_test/basic_test/CMakeFiles/runBasicMonteCarloTests.dir/depend

