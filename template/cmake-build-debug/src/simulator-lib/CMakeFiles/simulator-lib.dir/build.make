# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.3\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.3\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Mina\Desktop\hw2\template

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Mina\Desktop\hw2\template\cmake-build-debug

# Include any dependencies generated for this target.
include src/simulator-lib/CMakeFiles/simulator-lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/simulator-lib/CMakeFiles/simulator-lib.dir/compiler_depend.make

# Include the progress variables for this target.
include src/simulator-lib/CMakeFiles/simulator-lib.dir/progress.make

# Include the compile flags for this target's objects.
include src/simulator-lib/CMakeFiles/simulator-lib.dir/flags.make

src/simulator-lib/CMakeFiles/simulator-lib.dir/bar-simulator.cpp.obj: src/simulator-lib/CMakeFiles/simulator-lib.dir/flags.make
src/simulator-lib/CMakeFiles/simulator-lib.dir/bar-simulator.cpp.obj: src/simulator-lib/CMakeFiles/simulator-lib.dir/includes_CXX.rsp
src/simulator-lib/CMakeFiles/simulator-lib.dir/bar-simulator.cpp.obj: C:/Users/Mina/Desktop/hw2/template/src/simulator-lib/bar-simulator.cpp
src/simulator-lib/CMakeFiles/simulator-lib.dir/bar-simulator.cpp.obj: src/simulator-lib/CMakeFiles/simulator-lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Mina\Desktop\hw2\template\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/simulator-lib/CMakeFiles/simulator-lib.dir/bar-simulator.cpp.obj"
	cd /d C:\Users\Mina\Desktop\hw2\template\cmake-build-debug\src\simulator-lib && C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/simulator-lib/CMakeFiles/simulator-lib.dir/bar-simulator.cpp.obj -MF CMakeFiles\simulator-lib.dir\bar-simulator.cpp.obj.d -o CMakeFiles\simulator-lib.dir\bar-simulator.cpp.obj -c C:\Users\Mina\Desktop\hw2\template\src\simulator-lib\bar-simulator.cpp

src/simulator-lib/CMakeFiles/simulator-lib.dir/bar-simulator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/simulator-lib.dir/bar-simulator.cpp.i"
	cd /d C:\Users\Mina\Desktop\hw2\template\cmake-build-debug\src\simulator-lib && C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Mina\Desktop\hw2\template\src\simulator-lib\bar-simulator.cpp > CMakeFiles\simulator-lib.dir\bar-simulator.cpp.i

src/simulator-lib/CMakeFiles/simulator-lib.dir/bar-simulator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/simulator-lib.dir/bar-simulator.cpp.s"
	cd /d C:\Users\Mina\Desktop\hw2\template\cmake-build-debug\src\simulator-lib && C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Mina\Desktop\hw2\template\src\simulator-lib\bar-simulator.cpp -o CMakeFiles\simulator-lib.dir\bar-simulator.cpp.s

# Object files for target simulator-lib
simulator__lib_OBJECTS = \
"CMakeFiles/simulator-lib.dir/bar-simulator.cpp.obj"

# External object files for target simulator-lib
simulator__lib_EXTERNAL_OBJECTS =

src/simulator-lib/libsimulator-lib.a: src/simulator-lib/CMakeFiles/simulator-lib.dir/bar-simulator.cpp.obj
src/simulator-lib/libsimulator-lib.a: src/simulator-lib/CMakeFiles/simulator-lib.dir/build.make
src/simulator-lib/libsimulator-lib.a: src/simulator-lib/CMakeFiles/simulator-lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\Mina\Desktop\hw2\template\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libsimulator-lib.a"
	cd /d C:\Users\Mina\Desktop\hw2\template\cmake-build-debug\src\simulator-lib && $(CMAKE_COMMAND) -P CMakeFiles\simulator-lib.dir\cmake_clean_target.cmake
	cd /d C:\Users\Mina\Desktop\hw2\template\cmake-build-debug\src\simulator-lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\simulator-lib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/simulator-lib/CMakeFiles/simulator-lib.dir/build: src/simulator-lib/libsimulator-lib.a
.PHONY : src/simulator-lib/CMakeFiles/simulator-lib.dir/build

src/simulator-lib/CMakeFiles/simulator-lib.dir/clean:
	cd /d C:\Users\Mina\Desktop\hw2\template\cmake-build-debug\src\simulator-lib && $(CMAKE_COMMAND) -P CMakeFiles\simulator-lib.dir\cmake_clean.cmake
.PHONY : src/simulator-lib/CMakeFiles/simulator-lib.dir/clean

src/simulator-lib/CMakeFiles/simulator-lib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Mina\Desktop\hw2\template C:\Users\Mina\Desktop\hw2\template\src\simulator-lib C:\Users\Mina\Desktop\hw2\template\cmake-build-debug C:\Users\Mina\Desktop\hw2\template\cmake-build-debug\src\simulator-lib C:\Users\Mina\Desktop\hw2\template\cmake-build-debug\src\simulator-lib\CMakeFiles\simulator-lib.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/simulator-lib/CMakeFiles/simulator-lib.dir/depend

