# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /usr/src/bbJammerNetz

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /usr/src/bbJammerNetz/builds

# Include any dependencies generated for this target.
include common/CMakeFiles/JammerCommon.dir/depend.make

# Include the progress variables for this target.
include common/CMakeFiles/JammerCommon.dir/progress.make

# Include the compile flags for this target's objects.
include common/CMakeFiles/JammerCommon.dir/flags.make

common/JammerNetzPackages_generated.h: ../common/JammerNetzPackages.fbs
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/usr/src/bbJammerNetz/builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C++ header for JammerNetzPackages.fbs"
	cd /usr/src/bbJammerNetz/common && /usr/src/bbJammerNetz/common/../third_party/flatbuffers/LinuxBuilds/flatc -c -o /usr/src/bbJammerNetz/builds/common/ JammerNetzPackages.fbs

common/CMakeFiles/JammerCommon.dir/JammerNetzPackage.cpp.o: common/CMakeFiles/JammerCommon.dir/flags.make
common/CMakeFiles/JammerCommon.dir/JammerNetzPackage.cpp.o: ../common/JammerNetzPackage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/usr/src/bbJammerNetz/builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object common/CMakeFiles/JammerCommon.dir/JammerNetzPackage.cpp.o"
	cd /usr/src/bbJammerNetz/builds/common && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JammerCommon.dir/JammerNetzPackage.cpp.o -c /usr/src/bbJammerNetz/common/JammerNetzPackage.cpp

common/CMakeFiles/JammerCommon.dir/JammerNetzPackage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JammerCommon.dir/JammerNetzPackage.cpp.i"
	cd /usr/src/bbJammerNetz/builds/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /usr/src/bbJammerNetz/common/JammerNetzPackage.cpp > CMakeFiles/JammerCommon.dir/JammerNetzPackage.cpp.i

common/CMakeFiles/JammerCommon.dir/JammerNetzPackage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JammerCommon.dir/JammerNetzPackage.cpp.s"
	cd /usr/src/bbJammerNetz/builds/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /usr/src/bbJammerNetz/common/JammerNetzPackage.cpp -o CMakeFiles/JammerCommon.dir/JammerNetzPackage.cpp.s

common/CMakeFiles/JammerCommon.dir/PacketStreamQueue.cpp.o: common/CMakeFiles/JammerCommon.dir/flags.make
common/CMakeFiles/JammerCommon.dir/PacketStreamQueue.cpp.o: ../common/PacketStreamQueue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/usr/src/bbJammerNetz/builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object common/CMakeFiles/JammerCommon.dir/PacketStreamQueue.cpp.o"
	cd /usr/src/bbJammerNetz/builds/common && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JammerCommon.dir/PacketStreamQueue.cpp.o -c /usr/src/bbJammerNetz/common/PacketStreamQueue.cpp

common/CMakeFiles/JammerCommon.dir/PacketStreamQueue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JammerCommon.dir/PacketStreamQueue.cpp.i"
	cd /usr/src/bbJammerNetz/builds/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /usr/src/bbJammerNetz/common/PacketStreamQueue.cpp > CMakeFiles/JammerCommon.dir/PacketStreamQueue.cpp.i

common/CMakeFiles/JammerCommon.dir/PacketStreamQueue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JammerCommon.dir/PacketStreamQueue.cpp.s"
	cd /usr/src/bbJammerNetz/builds/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /usr/src/bbJammerNetz/common/PacketStreamQueue.cpp -o CMakeFiles/JammerCommon.dir/PacketStreamQueue.cpp.s

common/CMakeFiles/JammerCommon.dir/Recorder.cpp.o: common/CMakeFiles/JammerCommon.dir/flags.make
common/CMakeFiles/JammerCommon.dir/Recorder.cpp.o: ../common/Recorder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/usr/src/bbJammerNetz/builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object common/CMakeFiles/JammerCommon.dir/Recorder.cpp.o"
	cd /usr/src/bbJammerNetz/builds/common && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JammerCommon.dir/Recorder.cpp.o -c /usr/src/bbJammerNetz/common/Recorder.cpp

common/CMakeFiles/JammerCommon.dir/Recorder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JammerCommon.dir/Recorder.cpp.i"
	cd /usr/src/bbJammerNetz/builds/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /usr/src/bbJammerNetz/common/Recorder.cpp > CMakeFiles/JammerCommon.dir/Recorder.cpp.i

common/CMakeFiles/JammerCommon.dir/Recorder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JammerCommon.dir/Recorder.cpp.s"
	cd /usr/src/bbJammerNetz/builds/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /usr/src/bbJammerNetz/common/Recorder.cpp -o CMakeFiles/JammerCommon.dir/Recorder.cpp.s

common/CMakeFiles/JammerCommon.dir/ServerInfo.cpp.o: common/CMakeFiles/JammerCommon.dir/flags.make
common/CMakeFiles/JammerCommon.dir/ServerInfo.cpp.o: ../common/ServerInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/usr/src/bbJammerNetz/builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object common/CMakeFiles/JammerCommon.dir/ServerInfo.cpp.o"
	cd /usr/src/bbJammerNetz/builds/common && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JammerCommon.dir/ServerInfo.cpp.o -c /usr/src/bbJammerNetz/common/ServerInfo.cpp

common/CMakeFiles/JammerCommon.dir/ServerInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JammerCommon.dir/ServerInfo.cpp.i"
	cd /usr/src/bbJammerNetz/builds/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /usr/src/bbJammerNetz/common/ServerInfo.cpp > CMakeFiles/JammerCommon.dir/ServerInfo.cpp.i

common/CMakeFiles/JammerCommon.dir/ServerInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JammerCommon.dir/ServerInfo.cpp.s"
	cd /usr/src/bbJammerNetz/builds/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /usr/src/bbJammerNetz/common/ServerInfo.cpp -o CMakeFiles/JammerCommon.dir/ServerInfo.cpp.s

# Object files for target JammerCommon
JammerCommon_OBJECTS = \
"CMakeFiles/JammerCommon.dir/JammerNetzPackage.cpp.o" \
"CMakeFiles/JammerCommon.dir/PacketStreamQueue.cpp.o" \
"CMakeFiles/JammerCommon.dir/Recorder.cpp.o" \
"CMakeFiles/JammerCommon.dir/ServerInfo.cpp.o"

# External object files for target JammerCommon
JammerCommon_EXTERNAL_OBJECTS =

common/libJammerCommon.a: common/CMakeFiles/JammerCommon.dir/JammerNetzPackage.cpp.o
common/libJammerCommon.a: common/CMakeFiles/JammerCommon.dir/PacketStreamQueue.cpp.o
common/libJammerCommon.a: common/CMakeFiles/JammerCommon.dir/Recorder.cpp.o
common/libJammerCommon.a: common/CMakeFiles/JammerCommon.dir/ServerInfo.cpp.o
common/libJammerCommon.a: common/CMakeFiles/JammerCommon.dir/build.make
common/libJammerCommon.a: common/CMakeFiles/JammerCommon.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/usr/src/bbJammerNetz/builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library libJammerCommon.a"
	cd /usr/src/bbJammerNetz/builds/common && $(CMAKE_COMMAND) -P CMakeFiles/JammerCommon.dir/cmake_clean_target.cmake
	cd /usr/src/bbJammerNetz/builds/common && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/JammerCommon.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
common/CMakeFiles/JammerCommon.dir/build: common/libJammerCommon.a

.PHONY : common/CMakeFiles/JammerCommon.dir/build

common/CMakeFiles/JammerCommon.dir/clean:
	cd /usr/src/bbJammerNetz/builds/common && $(CMAKE_COMMAND) -P CMakeFiles/JammerCommon.dir/cmake_clean.cmake
.PHONY : common/CMakeFiles/JammerCommon.dir/clean

common/CMakeFiles/JammerCommon.dir/depend: common/JammerNetzPackages_generated.h
	cd /usr/src/bbJammerNetz/builds && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /usr/src/bbJammerNetz /usr/src/bbJammerNetz/common /usr/src/bbJammerNetz/builds /usr/src/bbJammerNetz/builds/common /usr/src/bbJammerNetz/builds/common/CMakeFiles/JammerCommon.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : common/CMakeFiles/JammerCommon.dir/depend
