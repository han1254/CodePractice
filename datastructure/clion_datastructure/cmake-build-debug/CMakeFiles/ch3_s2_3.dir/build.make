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
include CMakeFiles/ch3_s2_3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ch3_s2_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ch3_s2_3.dir/flags.make

CMakeFiles/ch3_s2_3.dir/_3_stack_and_queue/queue/_ch3_se2_3.c.obj: CMakeFiles/ch3_s2_3.dir/flags.make
CMakeFiles/ch3_s2_3.dir/_3_stack_and_queue/queue/_ch3_se2_3.c.obj: ../_3_stack_and_queue/queue/_ch3_se2_3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ch3_s2_3.dir/_3_stack_and_queue/queue/_ch3_se2_3.c.obj"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ch3_s2_3.dir\_3_stack_and_queue\queue\_ch3_se2_3.c.obj -c F:\Cloud\CodePractice\datastructure\clion_datastructure\_3_stack_and_queue\queue\_ch3_se2_3.c

CMakeFiles/ch3_s2_3.dir/_3_stack_and_queue/queue/_ch3_se2_3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ch3_s2_3.dir/_3_stack_and_queue/queue/_ch3_se2_3.c.i"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Cloud\CodePractice\datastructure\clion_datastructure\_3_stack_and_queue\queue\_ch3_se2_3.c > CMakeFiles\ch3_s2_3.dir\_3_stack_and_queue\queue\_ch3_se2_3.c.i

CMakeFiles/ch3_s2_3.dir/_3_stack_and_queue/queue/_ch3_se2_3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ch3_s2_3.dir/_3_stack_and_queue/queue/_ch3_se2_3.c.s"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Cloud\CodePractice\datastructure\clion_datastructure\_3_stack_and_queue\queue\_ch3_se2_3.c -o CMakeFiles\ch3_s2_3.dir\_3_stack_and_queue\queue\_ch3_se2_3.c.s

# Object files for target ch3_s2_3
ch3_s2_3_OBJECTS = \
"CMakeFiles/ch3_s2_3.dir/_3_stack_and_queue/queue/_ch3_se2_3.c.obj"

# External object files for target ch3_s2_3
ch3_s2_3_EXTERNAL_OBJECTS =

ch3_s2_3.exe: CMakeFiles/ch3_s2_3.dir/_3_stack_and_queue/queue/_ch3_se2_3.c.obj
ch3_s2_3.exe: CMakeFiles/ch3_s2_3.dir/build.make
ch3_s2_3.exe: CMakeFiles/ch3_s2_3.dir/linklibs.rsp
ch3_s2_3.exe: CMakeFiles/ch3_s2_3.dir/objects1.rsp
ch3_s2_3.exe: CMakeFiles/ch3_s2_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ch3_s2_3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ch3_s2_3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ch3_s2_3.dir/build: ch3_s2_3.exe

.PHONY : CMakeFiles/ch3_s2_3.dir/build

CMakeFiles/ch3_s2_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ch3_s2_3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ch3_s2_3.dir/clean

CMakeFiles/ch3_s2_3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\Cloud\CodePractice\datastructure\clion_datastructure F:\Cloud\CodePractice\datastructure\clion_datastructure F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug\CMakeFiles\ch3_s2_3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ch3_s2_3.dir/depend

