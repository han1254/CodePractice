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
include CMakeFiles/expression_change.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/expression_change.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/expression_change.dir/flags.make

CMakeFiles/expression_change.dir/_3_stack_and_queue/application/expression_change.c.obj: CMakeFiles/expression_change.dir/flags.make
CMakeFiles/expression_change.dir/_3_stack_and_queue/application/expression_change.c.obj: ../_3_stack_and_queue/application/expression_change.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/expression_change.dir/_3_stack_and_queue/application/expression_change.c.obj"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\expression_change.dir\_3_stack_and_queue\application\expression_change.c.obj -c F:\Cloud\CodePractice\datastructure\clion_datastructure\_3_stack_and_queue\application\expression_change.c

CMakeFiles/expression_change.dir/_3_stack_and_queue/application/expression_change.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/expression_change.dir/_3_stack_and_queue/application/expression_change.c.i"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Cloud\CodePractice\datastructure\clion_datastructure\_3_stack_and_queue\application\expression_change.c > CMakeFiles\expression_change.dir\_3_stack_and_queue\application\expression_change.c.i

CMakeFiles/expression_change.dir/_3_stack_and_queue/application/expression_change.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/expression_change.dir/_3_stack_and_queue/application/expression_change.c.s"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Cloud\CodePractice\datastructure\clion_datastructure\_3_stack_and_queue\application\expression_change.c -o CMakeFiles\expression_change.dir\_3_stack_and_queue\application\expression_change.c.s

# Object files for target expression_change
expression_change_OBJECTS = \
"CMakeFiles/expression_change.dir/_3_stack_and_queue/application/expression_change.c.obj"

# External object files for target expression_change
expression_change_EXTERNAL_OBJECTS =

expression_change.exe: CMakeFiles/expression_change.dir/_3_stack_and_queue/application/expression_change.c.obj
expression_change.exe: CMakeFiles/expression_change.dir/build.make
expression_change.exe: CMakeFiles/expression_change.dir/linklibs.rsp
expression_change.exe: CMakeFiles/expression_change.dir/objects1.rsp
expression_change.exe: CMakeFiles/expression_change.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable expression_change.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\expression_change.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/expression_change.dir/build: expression_change.exe

.PHONY : CMakeFiles/expression_change.dir/build

CMakeFiles/expression_change.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\expression_change.dir\cmake_clean.cmake
.PHONY : CMakeFiles/expression_change.dir/clean

CMakeFiles/expression_change.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\Cloud\CodePractice\datastructure\clion_datastructure F:\Cloud\CodePractice\datastructure\clion_datastructure F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug F:\Cloud\CodePractice\datastructure\clion_datastructure\cmake-build-debug\CMakeFiles\expression_change.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/expression_change.dir/depend

