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
CMAKE_SOURCE_DIR = F:\Cloud\CodePractice\os_code\os_try

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\Cloud\CodePractice\os_code\os_try\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/os_try.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/os_try.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/os_try.dir/flags.make

CMakeFiles/os_try.dir/main.c.obj: CMakeFiles/os_try.dir/flags.make
CMakeFiles/os_try.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Cloud\CodePractice\os_code\os_try\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/os_try.dir/main.c.obj"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\os_try.dir\main.c.obj -c F:\Cloud\CodePractice\os_code\os_try\main.c

CMakeFiles/os_try.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/os_try.dir/main.c.i"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Cloud\CodePractice\os_code\os_try\main.c > CMakeFiles\os_try.dir\main.c.i

CMakeFiles/os_try.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/os_try.dir/main.c.s"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Cloud\CodePractice\os_code\os_try\main.c -o CMakeFiles\os_try.dir\main.c.s

CMakeFiles/os_try.dir/producer_cosumer.c.obj: CMakeFiles/os_try.dir/flags.make
CMakeFiles/os_try.dir/producer_cosumer.c.obj: ../producer_cosumer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Cloud\CodePractice\os_code\os_try\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/os_try.dir/producer_cosumer.c.obj"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\os_try.dir\producer_cosumer.c.obj -c F:\Cloud\CodePractice\os_code\os_try\producer_cosumer.c

CMakeFiles/os_try.dir/producer_cosumer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/os_try.dir/producer_cosumer.c.i"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Cloud\CodePractice\os_code\os_try\producer_cosumer.c > CMakeFiles\os_try.dir\producer_cosumer.c.i

CMakeFiles/os_try.dir/producer_cosumer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/os_try.dir/producer_cosumer.c.s"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Cloud\CodePractice\os_code\os_try\producer_cosumer.c -o CMakeFiles\os_try.dir\producer_cosumer.c.s

CMakeFiles/os_try.dir/soft_mutex_1.c.obj: CMakeFiles/os_try.dir/flags.make
CMakeFiles/os_try.dir/soft_mutex_1.c.obj: ../soft_mutex_1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Cloud\CodePractice\os_code\os_try\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/os_try.dir/soft_mutex_1.c.obj"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\os_try.dir\soft_mutex_1.c.obj -c F:\Cloud\CodePractice\os_code\os_try\soft_mutex_1.c

CMakeFiles/os_try.dir/soft_mutex_1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/os_try.dir/soft_mutex_1.c.i"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Cloud\CodePractice\os_code\os_try\soft_mutex_1.c > CMakeFiles\os_try.dir\soft_mutex_1.c.i

CMakeFiles/os_try.dir/soft_mutex_1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/os_try.dir/soft_mutex_1.c.s"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Cloud\CodePractice\os_code\os_try\soft_mutex_1.c -o CMakeFiles\os_try.dir\soft_mutex_1.c.s

CMakeFiles/os_try.dir/soft_mutex_1_thread.c.obj: CMakeFiles/os_try.dir/flags.make
CMakeFiles/os_try.dir/soft_mutex_1_thread.c.obj: ../soft_mutex_1_thread.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Cloud\CodePractice\os_code\os_try\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/os_try.dir/soft_mutex_1_thread.c.obj"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\os_try.dir\soft_mutex_1_thread.c.obj -c F:\Cloud\CodePractice\os_code\os_try\soft_mutex_1_thread.c

CMakeFiles/os_try.dir/soft_mutex_1_thread.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/os_try.dir/soft_mutex_1_thread.c.i"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Cloud\CodePractice\os_code\os_try\soft_mutex_1_thread.c > CMakeFiles\os_try.dir\soft_mutex_1_thread.c.i

CMakeFiles/os_try.dir/soft_mutex_1_thread.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/os_try.dir/soft_mutex_1_thread.c.s"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Cloud\CodePractice\os_code\os_try\soft_mutex_1_thread.c -o CMakeFiles\os_try.dir\soft_mutex_1_thread.c.s

CMakeFiles/os_try.dir/banker_alg/banker_algorithm.c.obj: CMakeFiles/os_try.dir/flags.make
CMakeFiles/os_try.dir/banker_alg/banker_algorithm.c.obj: ../banker_alg/banker_algorithm.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Cloud\CodePractice\os_code\os_try\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/os_try.dir/banker_alg/banker_algorithm.c.obj"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\os_try.dir\banker_alg\banker_algorithm.c.obj -c F:\Cloud\CodePractice\os_code\os_try\banker_alg\banker_algorithm.c

CMakeFiles/os_try.dir/banker_alg/banker_algorithm.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/os_try.dir/banker_alg/banker_algorithm.c.i"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Cloud\CodePractice\os_code\os_try\banker_alg\banker_algorithm.c > CMakeFiles\os_try.dir\banker_alg\banker_algorithm.c.i

CMakeFiles/os_try.dir/banker_alg/banker_algorithm.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/os_try.dir/banker_alg/banker_algorithm.c.s"
	D:\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Cloud\CodePractice\os_code\os_try\banker_alg\banker_algorithm.c -o CMakeFiles\os_try.dir\banker_alg\banker_algorithm.c.s

# Object files for target os_try
os_try_OBJECTS = \
"CMakeFiles/os_try.dir/main.c.obj" \
"CMakeFiles/os_try.dir/producer_cosumer.c.obj" \
"CMakeFiles/os_try.dir/soft_mutex_1.c.obj" \
"CMakeFiles/os_try.dir/soft_mutex_1_thread.c.obj" \
"CMakeFiles/os_try.dir/banker_alg/banker_algorithm.c.obj"

# External object files for target os_try
os_try_EXTERNAL_OBJECTS =

os_try.exe: CMakeFiles/os_try.dir/main.c.obj
os_try.exe: CMakeFiles/os_try.dir/producer_cosumer.c.obj
os_try.exe: CMakeFiles/os_try.dir/soft_mutex_1.c.obj
os_try.exe: CMakeFiles/os_try.dir/soft_mutex_1_thread.c.obj
os_try.exe: CMakeFiles/os_try.dir/banker_alg/banker_algorithm.c.obj
os_try.exe: CMakeFiles/os_try.dir/build.make
os_try.exe: CMakeFiles/os_try.dir/linklibs.rsp
os_try.exe: CMakeFiles/os_try.dir/objects1.rsp
os_try.exe: CMakeFiles/os_try.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\Cloud\CodePractice\os_code\os_try\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable os_try.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\os_try.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/os_try.dir/build: os_try.exe

.PHONY : CMakeFiles/os_try.dir/build

CMakeFiles/os_try.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\os_try.dir\cmake_clean.cmake
.PHONY : CMakeFiles/os_try.dir/clean

CMakeFiles/os_try.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\Cloud\CodePractice\os_code\os_try F:\Cloud\CodePractice\os_code\os_try F:\Cloud\CodePractice\os_code\os_try\cmake-build-debug F:\Cloud\CodePractice\os_code\os_try\cmake-build-debug F:\Cloud\CodePractice\os_code\os_try\cmake-build-debug\CMakeFiles\os_try.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/os_try.dir/depend

