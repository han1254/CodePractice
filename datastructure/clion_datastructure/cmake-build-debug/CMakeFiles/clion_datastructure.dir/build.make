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
include CMakeFiles/clion_datastructure.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/clion_datastructure.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/clion_datastructure.dir/flags.make

CMakeFiles/clion_datastructure.dir/_3_stack_and_queue/stack/LinkStackMain.c.obj: CMakeFiles/clion_datastructure.dir/flags.make
CMakeFiles/clion_datastructure.dir/_3_stack_and_queue/stack/LinkStackMain.c.obj: ../_3_stack_and_queue/stack/LinkStackMain.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/clion_datastructure.dir/_3_stack_and_queue/stack/LinkStackMain.c.obj"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\clion_datastructure.dir\_3_stack_and_queue\stack\LinkStackMain.c.obj -c F:\Cloud\CodePractice\datastructure\clion_datastructure\_3_stack_and_queue\stack\LinkStackMain.c

CMakeFiles/clion_datastructure.dir/_3_stack_and_queue/stack/LinkStackMain.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/clion_datastructure.dir/_3_stack_and_queue/stack/LinkStackMain.c.i"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Cloud\CodePractice\datastructure\clion_datastructure\_3_stack_and_queue\stack\LinkStackMain.c > CMakeFiles\clion_datastructure.dir\_3_stack_and_queue\stack\LinkStackMain.c.i

CMakeFiles/clion_datastructure.dir/_3_stack_and_queue/stack/LinkStackMain.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/clion_datastructure.dir/_3_stack_and_queue/stack/LinkStackMain.c.s"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Cloud\CodePractice\datastructure\clion_datastructure\_3_stack_and_queue\stack\LinkStackMain.c -o CMakeFiles\clion_datastructure.dir\_3_stack_and_queue\stack\LinkStackMain.c.s

CMakeFiles/clion_datastructure.dir/_2_linear_list/LinkListMain.c.obj: CMakeFiles/clion_datastructure.dir/flags.make
CMakeFiles/clion_datastructure.dir/_2_linear_list/LinkListMain.c.obj: ../_2_linear_list/LinkListMain.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/clion_datastructure.dir/_2_linear_list/LinkListMain.c.obj"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\clion_datastructure.dir\_2_linear_list\LinkListMain.c.obj -c F:\Cloud\CodePractice\datastructure\clion_datastructure\_2_linear_list\LinkListMain.c

CMakeFiles/clion_datastructure.dir/_2_linear_list/LinkListMain.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/clion_datastructure.dir/_2_linear_list/LinkListMain.c.i"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Cloud\CodePractice\datastructure\clion_datastructure\_2_linear_list\LinkListMain.c > CMakeFiles\clion_datastructure.dir\_2_linear_list\LinkListMain.c.i

CMakeFiles/clion_datastructure.dir/_2_linear_list/LinkListMain.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/clion_datastructure.dir/_2_linear_list/LinkListMain.c.s"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Cloud\CodePractice\datastructure\clion_datastructure\_2_linear_list\LinkListMain.c -o CMakeFiles\clion_datastructure.dir\_2_linear_list\LinkListMain.c.s

# Object files for target clion_datastructure
clion_datastructure_OBJECTS = \
"CMakeFiles/clion_datastructure.dir/_3_stack_and_queue/stack/LinkStackMain.c.obj" \
"CMakeFiles/clion_datastructure.dir/_2_linear_list/LinkListMain.c.obj"

# External object files for target clion_datastructure
clion_datastructure_EXTERNAL_OBJECTS =

clion_datastructure.exe: CMakeFiles/clion_datastructure.dir/_3_stack_and_queue/stack/LinkStackMain.c.obj
clion_datastructure.exe: CMakeFiles/clion_datastructure.dir/_2_linear_list/LinkListMain.c.obj
clion_datastructure.exe: CMakeFiles/clion_datastructure.dir/build.make
clion_datastructure.exe: CMakeFiles/clion_datastructure.dir/linklibs.rsp
clion_datastructure.exe: CMakeFiles/clion_datastructure.dir/objects1.rsp
clion_datastructure.exe: CMakeFiles/clion_datastructure.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable clion_datastructure.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\clion_datastructure.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/clion_datastructure.dir/build: clion_datastructure.exe

.PHONY : CMakeFiles/clion_datastructure.dir/build

CMakeFiles/clion_datastructure.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\clion_datastructure.dir\cmake_clean.cmake
.PHONY : CMakeFiles/clion_datastructure.dir/clean

CMakeFiles/clion_datastructure.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\Cloud\CodePractice\datastructure\clion_datastructure F:\Cloud\CodePractice\datastructure\clion_datastructure F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug\CMakeFiles\clion_datastructure.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/clion_datastructure.dir/depend

