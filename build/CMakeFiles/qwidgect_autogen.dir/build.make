# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/zaza/work space/developmentW/c++/qt/qwidgect"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/zaza/work space/developmentW/c++/qt/qwidgect/build"

# Utility rule file for qwidgect_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/qwidgect_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/qwidgect_autogen.dir/progress.make

CMakeFiles/qwidgect_autogen: qwidgect_autogen/timestamp

qwidgect_autogen/timestamp: /usr/lib/qt5/bin/moc
qwidgect_autogen/timestamp: /usr/lib/qt5/bin/uic
qwidgect_autogen/timestamp: CMakeFiles/qwidgect_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/home/zaza/work space/developmentW/c++/qt/qwidgect/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target qwidgect"
	/usr/bin/cmake -E cmake_autogen "/home/zaza/work space/developmentW/c++/qt/qwidgect/build/CMakeFiles/qwidgect_autogen.dir/AutogenInfo.json" ""
	/usr/bin/cmake -E touch "/home/zaza/work space/developmentW/c++/qt/qwidgect/build/qwidgect_autogen/timestamp"

qwidgect_autogen: CMakeFiles/qwidgect_autogen
qwidgect_autogen: qwidgect_autogen/timestamp
qwidgect_autogen: CMakeFiles/qwidgect_autogen.dir/build.make
.PHONY : qwidgect_autogen

# Rule to build all files generated by this target.
CMakeFiles/qwidgect_autogen.dir/build: qwidgect_autogen
.PHONY : CMakeFiles/qwidgect_autogen.dir/build

CMakeFiles/qwidgect_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/qwidgect_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/qwidgect_autogen.dir/clean

CMakeFiles/qwidgect_autogen.dir/depend:
	cd "/home/zaza/work space/developmentW/c++/qt/qwidgect/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/zaza/work space/developmentW/c++/qt/qwidgect" "/home/zaza/work space/developmentW/c++/qt/qwidgect" "/home/zaza/work space/developmentW/c++/qt/qwidgect/build" "/home/zaza/work space/developmentW/c++/qt/qwidgect/build" "/home/zaza/work space/developmentW/c++/qt/qwidgect/build/CMakeFiles/qwidgect_autogen.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/qwidgect_autogen.dir/depend

