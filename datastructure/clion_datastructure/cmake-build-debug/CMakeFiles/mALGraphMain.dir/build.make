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
include CMakeFiles/mALGraphMain.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mALGraphMain.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mALGraphMain.dir/flags.make

CMakeFiles/mALGraphMain.dir/_6_graph/_2_adjacency_list/ALGraphMain.c.obj: CMakeFiles/mALGraphMain.dir/flags.make
CMakeFiles/mALGraphMain.dir/_6_graph/_2_adjacency_list/ALGraphMain.c.obj: ../_6_graph/_2_adjacency_list/ALGraphMain.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/mALGraphMain.dir/_6_graph/_2_adjacency_list/ALGraphMain.c.obj"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\mALGraphMain.dir\_6_graph\_2_adjacency_list\ALGraphMain.c.obj -c F:\Cloud\CodePractice\datastructure\clion_datastructure\_6_graph\_2_adjacency_list\ALGraphMain.c

CMakeFiles/mALGraphMain.dir/_6_graph/_2_adjacency_list/ALGraphMain.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mALGraphMain.dir/_6_graph/_2_adjacency_list/ALGraphMain.c.i"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Cloud\CodePractice\datastructure\clion_datastructure\_6_graph\_2_adjacency_list\ALGraphMain.c > CMakeFiles\mALGraphMain.dir\_6_graph\_2_adjacency_list\ALGraphMain.c.i

CMakeFiles/mALGraphMain.dir/_6_graph/_2_adjacency_list/ALGraphMain.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mALGraphMain.dir/_6_graph/_2_adjacency_list/ALGraphMain.c.s"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Cloud\CodePractice\datastructure\clion_datastructure\_6_graph\_2_adjacency_list\ALGraphMain.c -o CMakeFiles\mALGraphMain.dir\_6_graph\_2_adjacency_list\ALGraphMain.c.s

# Object files for target mALGraphMain
mALGraphMain_OBJECTS = \
"CMakeFiles/mALGraphMain.dir/_6_graph/_2_adjacency_list/ALGraphMain.c.obj"

# External object files for target mALGraphMain
mALGraphMain_EXTERNAL_OBJECTS =

mALGraphMain.exe: CMakeFiles/mALGraphMain.dir/_6_graph/_2_adjacency_list/ALGraphMain.c.obj
mALGraphMain.exe: CMakeFiles/mALGraphMain.dir/build.make
mALGraphMain.exe: CMakeFiles/mALGraphMain.dir/linklibs.rsp
mALGraphMain.exe: CMakeFiles/mALGraphMain.dir/objects1.rsp
mALGraphMain.exe: CMakeFiles/mALGraphMain.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable mALGraphMain.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mALGraphMain.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mALGraphMain.dir/build: mALGraphMain.exe

.PHONY : CMakeFiles/mALGraphMain.dir/build

CMakeFiles/mALGraphMain.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mALGraphMain.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mALGraphMain.dir/clean

CMakeFiles/mALGraphMain.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\Cloud\CodePractice\datastructure\clion_datastructure F:\Cloud\CodePractice\datastructure\clion_datastructure F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug\CMakeFiles\mALGraphMain.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mALGraphMain.dir/depend

