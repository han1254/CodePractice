# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "F:\Cloud\clion\pro\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "F:\Cloud\clion\pro\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\Cloud\CodePractice\datastructure\clion_datastructure

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/thread_tree_main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/thread_tree_main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/thread_tree_main.dir/flags.make

CMakeFiles/thread_tree_main.dir/_5_tree/ThreadTreeMain.c.obj: CMakeFiles/thread_tree_main.dir/flags.make
CMakeFiles/thread_tree_main.dir/_5_tree/ThreadTreeMain.c.obj: ../_5_tree/ThreadTreeMain.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/thread_tree_main.dir/_5_tree/ThreadTreeMain.c.obj"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\thread_tree_main.dir\_5_tree\ThreadTreeMain.c.obj -c F:\Cloud\CodePractice\datastructure\clion_datastructure\_5_tree\ThreadTreeMain.c

CMakeFiles/thread_tree_main.dir/_5_tree/ThreadTreeMain.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/thread_tree_main.dir/_5_tree/ThreadTreeMain.c.i"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Cloud\CodePractice\datastructure\clion_datastructure\_5_tree\ThreadTreeMain.c > CMakeFiles\thread_tree_main.dir\_5_tree\ThreadTreeMain.c.i

CMakeFiles/thread_tree_main.dir/_5_tree/ThreadTreeMain.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/thread_tree_main.dir/_5_tree/ThreadTreeMain.c.s"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Cloud\CodePractice\datastructure\clion_datastructure\_5_tree\ThreadTreeMain.c -o CMakeFiles\thread_tree_main.dir\_5_tree\ThreadTreeMain.c.s

# Object files for target thread_tree_main
thread_tree_main_OBJECTS = \
"CMakeFiles/thread_tree_main.dir/_5_tree/ThreadTreeMain.c.obj"

# External object files for target thread_tree_main
thread_tree_main_EXTERNAL_OBJECTS =

thread_tree_main.exe: CMakeFiles/thread_tree_main.dir/_5_tree/ThreadTreeMain.c.obj
thread_tree_main.exe: CMakeFiles/thread_tree_main.dir/build.make
thread_tree_main.exe: CMakeFiles/thread_tree_main.dir/linklibs.rsp
thread_tree_main.exe: CMakeFiles/thread_tree_main.dir/objects1.rsp
thread_tree_main.exe: CMakeFiles/thread_tree_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable thread_tree_main.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\thread_tree_main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/thread_tree_main.dir/build: thread_tree_main.exe

.PHONY : CMakeFiles/thread_tree_main.dir/build

CMakeFiles/thread_tree_main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\thread_tree_main.dir\cmake_clean.cmake
.PHONY : CMakeFiles/thread_tree_main.dir/clean

CMakeFiles/thread_tree_main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\Cloud\CodePractice\datastructure\clion_datastructure F:\Cloud\CodePractice\datastructure\clion_datastructure F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug\CMakeFiles\thread_tree_main.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/thread_tree_main.dir/depend

