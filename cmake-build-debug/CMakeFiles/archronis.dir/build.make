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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Peter/CLionProjects/archronis

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Peter/CLionProjects/archronis/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/archronis.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/archronis.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/archronis.dir/flags.make

CMakeFiles/archronis.dir/main.cpp.o: CMakeFiles/archronis.dir/flags.make
CMakeFiles/archronis.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Peter/CLionProjects/archronis/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/archronis.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/archronis.dir/main.cpp.o -c /Users/Peter/CLionProjects/archronis/main.cpp

CMakeFiles/archronis.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/archronis.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Peter/CLionProjects/archronis/main.cpp > CMakeFiles/archronis.dir/main.cpp.i

CMakeFiles/archronis.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/archronis.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Peter/CLionProjects/archronis/main.cpp -o CMakeFiles/archronis.dir/main.cpp.s

CMakeFiles/archronis.dir/Sources/read_files.cpp.o: CMakeFiles/archronis.dir/flags.make
CMakeFiles/archronis.dir/Sources/read_files.cpp.o: ../Sources/read_files.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Peter/CLionProjects/archronis/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/archronis.dir/Sources/read_files.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/archronis.dir/Sources/read_files.cpp.o -c /Users/Peter/CLionProjects/archronis/Sources/read_files.cpp

CMakeFiles/archronis.dir/Sources/read_files.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/archronis.dir/Sources/read_files.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Peter/CLionProjects/archronis/Sources/read_files.cpp > CMakeFiles/archronis.dir/Sources/read_files.cpp.i

CMakeFiles/archronis.dir/Sources/read_files.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/archronis.dir/Sources/read_files.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Peter/CLionProjects/archronis/Sources/read_files.cpp -o CMakeFiles/archronis.dir/Sources/read_files.cpp.s

CMakeFiles/archronis.dir/Sources/lz77.cpp.o: CMakeFiles/archronis.dir/flags.make
CMakeFiles/archronis.dir/Sources/lz77.cpp.o: ../Sources/lz77.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Peter/CLionProjects/archronis/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/archronis.dir/Sources/lz77.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/archronis.dir/Sources/lz77.cpp.o -c /Users/Peter/CLionProjects/archronis/Sources/lz77.cpp

CMakeFiles/archronis.dir/Sources/lz77.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/archronis.dir/Sources/lz77.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Peter/CLionProjects/archronis/Sources/lz77.cpp > CMakeFiles/archronis.dir/Sources/lz77.cpp.i

CMakeFiles/archronis.dir/Sources/lz77.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/archronis.dir/Sources/lz77.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Peter/CLionProjects/archronis/Sources/lz77.cpp -o CMakeFiles/archronis.dir/Sources/lz77.cpp.s

CMakeFiles/archronis.dir/Sources/compressed_data.cpp.o: CMakeFiles/archronis.dir/flags.make
CMakeFiles/archronis.dir/Sources/compressed_data.cpp.o: ../Sources/compressed_data.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Peter/CLionProjects/archronis/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/archronis.dir/Sources/compressed_data.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/archronis.dir/Sources/compressed_data.cpp.o -c /Users/Peter/CLionProjects/archronis/Sources/compressed_data.cpp

CMakeFiles/archronis.dir/Sources/compressed_data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/archronis.dir/Sources/compressed_data.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Peter/CLionProjects/archronis/Sources/compressed_data.cpp > CMakeFiles/archronis.dir/Sources/compressed_data.cpp.i

CMakeFiles/archronis.dir/Sources/compressed_data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/archronis.dir/Sources/compressed_data.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Peter/CLionProjects/archronis/Sources/compressed_data.cpp -o CMakeFiles/archronis.dir/Sources/compressed_data.cpp.s

CMakeFiles/archronis.dir/Sources/node.cpp.o: CMakeFiles/archronis.dir/flags.make
CMakeFiles/archronis.dir/Sources/node.cpp.o: ../Sources/node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Peter/CLionProjects/archronis/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/archronis.dir/Sources/node.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/archronis.dir/Sources/node.cpp.o -c /Users/Peter/CLionProjects/archronis/Sources/node.cpp

CMakeFiles/archronis.dir/Sources/node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/archronis.dir/Sources/node.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Peter/CLionProjects/archronis/Sources/node.cpp > CMakeFiles/archronis.dir/Sources/node.cpp.i

CMakeFiles/archronis.dir/Sources/node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/archronis.dir/Sources/node.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Peter/CLionProjects/archronis/Sources/node.cpp -o CMakeFiles/archronis.dir/Sources/node.cpp.s

# Object files for target archronis
archronis_OBJECTS = \
"CMakeFiles/archronis.dir/main.cpp.o" \
"CMakeFiles/archronis.dir/Sources/read_files.cpp.o" \
"CMakeFiles/archronis.dir/Sources/lz77.cpp.o" \
"CMakeFiles/archronis.dir/Sources/compressed_data.cpp.o" \
"CMakeFiles/archronis.dir/Sources/node.cpp.o"

# External object files for target archronis
archronis_EXTERNAL_OBJECTS =

archronis: CMakeFiles/archronis.dir/main.cpp.o
archronis: CMakeFiles/archronis.dir/Sources/read_files.cpp.o
archronis: CMakeFiles/archronis.dir/Sources/lz77.cpp.o
archronis: CMakeFiles/archronis.dir/Sources/compressed_data.cpp.o
archronis: CMakeFiles/archronis.dir/Sources/node.cpp.o
archronis: CMakeFiles/archronis.dir/build.make
archronis: CMakeFiles/archronis.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Peter/CLionProjects/archronis/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable archronis"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/archronis.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/archronis.dir/build: archronis

.PHONY : CMakeFiles/archronis.dir/build

CMakeFiles/archronis.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/archronis.dir/cmake_clean.cmake
.PHONY : CMakeFiles/archronis.dir/clean

CMakeFiles/archronis.dir/depend:
	cd /Users/Peter/CLionProjects/archronis/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Peter/CLionProjects/archronis /Users/Peter/CLionProjects/archronis /Users/Peter/CLionProjects/archronis/cmake-build-debug /Users/Peter/CLionProjects/archronis/cmake-build-debug /Users/Peter/CLionProjects/archronis/cmake-build-debug/CMakeFiles/archronis.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/archronis.dir/depend

