# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\DEVEL\stage\opt\CLion-2024.1.4\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = D:\DEVEL\stage\opt\CLion-2024.1.4\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\var\GitHub\dcl112-2024-aug-05\module03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\var\GitHub\dcl112-2024-aug-05\module03\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/module03-5.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/module03-5.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/module03-5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/module03-5.dir/flags.make

CMakeFiles/module03-5.dir/exercise05.cpp.obj: CMakeFiles/module03-5.dir/flags.make
CMakeFiles/module03-5.dir/exercise05.cpp.obj: D:/var/GitHub/dcl112-2024-aug-05/module03/exercise05.cpp
CMakeFiles/module03-5.dir/exercise05.cpp.obj: CMakeFiles/module03-5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\var\GitHub\dcl112-2024-aug-05\module03\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/module03-5.dir/exercise05.cpp.obj"
	D:\DEVEL\stage\opt\CLion-2024.1.4\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/module03-5.dir/exercise05.cpp.obj -MF CMakeFiles\module03-5.dir\exercise05.cpp.obj.d -o CMakeFiles\module03-5.dir\exercise05.cpp.obj -c D:\var\GitHub\dcl112-2024-aug-05\module03\exercise05.cpp

CMakeFiles/module03-5.dir/exercise05.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/module03-5.dir/exercise05.cpp.i"
	D:\DEVEL\stage\opt\CLion-2024.1.4\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\var\GitHub\dcl112-2024-aug-05\module03\exercise05.cpp > CMakeFiles\module03-5.dir\exercise05.cpp.i

CMakeFiles/module03-5.dir/exercise05.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/module03-5.dir/exercise05.cpp.s"
	D:\DEVEL\stage\opt\CLion-2024.1.4\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\var\GitHub\dcl112-2024-aug-05\module03\exercise05.cpp -o CMakeFiles\module03-5.dir\exercise05.cpp.s

CMakeFiles/module03-5.dir/vehicle.cpp.obj: CMakeFiles/module03-5.dir/flags.make
CMakeFiles/module03-5.dir/vehicle.cpp.obj: D:/var/GitHub/dcl112-2024-aug-05/module03/vehicle.cpp
CMakeFiles/module03-5.dir/vehicle.cpp.obj: CMakeFiles/module03-5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\var\GitHub\dcl112-2024-aug-05\module03\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/module03-5.dir/vehicle.cpp.obj"
	D:\DEVEL\stage\opt\CLion-2024.1.4\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/module03-5.dir/vehicle.cpp.obj -MF CMakeFiles\module03-5.dir\vehicle.cpp.obj.d -o CMakeFiles\module03-5.dir\vehicle.cpp.obj -c D:\var\GitHub\dcl112-2024-aug-05\module03\vehicle.cpp

CMakeFiles/module03-5.dir/vehicle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/module03-5.dir/vehicle.cpp.i"
	D:\DEVEL\stage\opt\CLion-2024.1.4\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\var\GitHub\dcl112-2024-aug-05\module03\vehicle.cpp > CMakeFiles\module03-5.dir\vehicle.cpp.i

CMakeFiles/module03-5.dir/vehicle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/module03-5.dir/vehicle.cpp.s"
	D:\DEVEL\stage\opt\CLion-2024.1.4\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\var\GitHub\dcl112-2024-aug-05\module03\vehicle.cpp -o CMakeFiles\module03-5.dir\vehicle.cpp.s

# Object files for target module03-5
module03__5_OBJECTS = \
"CMakeFiles/module03-5.dir/exercise05.cpp.obj" \
"CMakeFiles/module03-5.dir/vehicle.cpp.obj"

# External object files for target module03-5
module03__5_EXTERNAL_OBJECTS =

module03-5.exe: CMakeFiles/module03-5.dir/exercise05.cpp.obj
module03-5.exe: CMakeFiles/module03-5.dir/vehicle.cpp.obj
module03-5.exe: CMakeFiles/module03-5.dir/build.make
module03-5.exe: CMakeFiles/module03-5.dir/linkLibs.rsp
module03-5.exe: CMakeFiles/module03-5.dir/objects1.rsp
module03-5.exe: CMakeFiles/module03-5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\var\GitHub\dcl112-2024-aug-05\module03\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable module03-5.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\module03-5.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/module03-5.dir/build: module03-5.exe
.PHONY : CMakeFiles/module03-5.dir/build

CMakeFiles/module03-5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\module03-5.dir\cmake_clean.cmake
.PHONY : CMakeFiles/module03-5.dir/clean

CMakeFiles/module03-5.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\var\GitHub\dcl112-2024-aug-05\module03 D:\var\GitHub\dcl112-2024-aug-05\module03 D:\var\GitHub\dcl112-2024-aug-05\module03\cmake-build-debug D:\var\GitHub\dcl112-2024-aug-05\module03\cmake-build-debug D:\var\GitHub\dcl112-2024-aug-05\module03\cmake-build-debug\CMakeFiles\module03-5.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/module03-5.dir/depend

