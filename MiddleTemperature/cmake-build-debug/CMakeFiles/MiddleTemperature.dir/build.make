# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /home/dream/Documents/clion-2020.1.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/dream/Documents/clion-2020.1.2/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dream/CLionProjects/MiddleTemperature

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dream/CLionProjects/MiddleTemperature/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MiddleTemperature.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MiddleTemperature.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MiddleTemperature.dir/flags.make

CMakeFiles/MiddleTemperature.dir/main.cpp.o: CMakeFiles/MiddleTemperature.dir/flags.make
CMakeFiles/MiddleTemperature.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dream/CLionProjects/MiddleTemperature/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MiddleTemperature.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MiddleTemperature.dir/main.cpp.o -c /home/dream/CLionProjects/MiddleTemperature/main.cpp

CMakeFiles/MiddleTemperature.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MiddleTemperature.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dream/CLionProjects/MiddleTemperature/main.cpp > CMakeFiles/MiddleTemperature.dir/main.cpp.i

CMakeFiles/MiddleTemperature.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MiddleTemperature.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dream/CLionProjects/MiddleTemperature/main.cpp -o CMakeFiles/MiddleTemperature.dir/main.cpp.s

# Object files for target MiddleTemperature
MiddleTemperature_OBJECTS = \
"CMakeFiles/MiddleTemperature.dir/main.cpp.o"

# External object files for target MiddleTemperature
MiddleTemperature_EXTERNAL_OBJECTS =

MiddleTemperature: CMakeFiles/MiddleTemperature.dir/main.cpp.o
MiddleTemperature: CMakeFiles/MiddleTemperature.dir/build.make
MiddleTemperature: CMakeFiles/MiddleTemperature.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dream/CLionProjects/MiddleTemperature/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MiddleTemperature"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MiddleTemperature.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MiddleTemperature.dir/build: MiddleTemperature

.PHONY : CMakeFiles/MiddleTemperature.dir/build

CMakeFiles/MiddleTemperature.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MiddleTemperature.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MiddleTemperature.dir/clean

CMakeFiles/MiddleTemperature.dir/depend:
	cd /home/dream/CLionProjects/MiddleTemperature/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dream/CLionProjects/MiddleTemperature /home/dream/CLionProjects/MiddleTemperature /home/dream/CLionProjects/MiddleTemperature/cmake-build-debug /home/dream/CLionProjects/MiddleTemperature/cmake-build-debug /home/dream/CLionProjects/MiddleTemperature/cmake-build-debug/CMakeFiles/MiddleTemperature.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MiddleTemperature.dir/depend

