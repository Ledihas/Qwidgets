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

# Include any dependencies generated for this target.
include CMakeFiles/qwidgect.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/qwidgect.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/qwidgect.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/qwidgect.dir/flags.make

qwidgect_autogen/timestamp: /usr/lib/qt5/bin/moc
qwidgect_autogen/timestamp: /usr/lib/qt5/bin/uic
qwidgect_autogen/timestamp: CMakeFiles/qwidgect.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/home/zaza/work space/developmentW/c++/qt/qwidgect/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target qwidgect"
	/usr/bin/cmake -E cmake_autogen "/home/zaza/work space/developmentW/c++/qt/qwidgect/build/CMakeFiles/qwidgect_autogen.dir/AutogenInfo.json" ""
	/usr/bin/cmake -E touch "/home/zaza/work space/developmentW/c++/qt/qwidgect/build/qwidgect_autogen/timestamp"

CMakeFiles/qwidgect.dir/qwidgect_autogen/mocs_compilation.cpp.o: CMakeFiles/qwidgect.dir/flags.make
CMakeFiles/qwidgect.dir/qwidgect_autogen/mocs_compilation.cpp.o: qwidgect_autogen/mocs_compilation.cpp
CMakeFiles/qwidgect.dir/qwidgect_autogen/mocs_compilation.cpp.o: CMakeFiles/qwidgect.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/zaza/work space/developmentW/c++/qt/qwidgect/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/qwidgect.dir/qwidgect_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qwidgect.dir/qwidgect_autogen/mocs_compilation.cpp.o -MF CMakeFiles/qwidgect.dir/qwidgect_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/qwidgect.dir/qwidgect_autogen/mocs_compilation.cpp.o -c "/home/zaza/work space/developmentW/c++/qt/qwidgect/build/qwidgect_autogen/mocs_compilation.cpp"

CMakeFiles/qwidgect.dir/qwidgect_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qwidgect.dir/qwidgect_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/zaza/work space/developmentW/c++/qt/qwidgect/build/qwidgect_autogen/mocs_compilation.cpp" > CMakeFiles/qwidgect.dir/qwidgect_autogen/mocs_compilation.cpp.i

CMakeFiles/qwidgect.dir/qwidgect_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qwidgect.dir/qwidgect_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/zaza/work space/developmentW/c++/qt/qwidgect/build/qwidgect_autogen/mocs_compilation.cpp" -o CMakeFiles/qwidgect.dir/qwidgect_autogen/mocs_compilation.cpp.s

CMakeFiles/qwidgect.dir/main.cpp.o: CMakeFiles/qwidgect.dir/flags.make
CMakeFiles/qwidgect.dir/main.cpp.o: /home/zaza/work\ space/developmentW/c++/qt/qwidgect/main.cpp
CMakeFiles/qwidgect.dir/main.cpp.o: CMakeFiles/qwidgect.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/zaza/work space/developmentW/c++/qt/qwidgect/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/qwidgect.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qwidgect.dir/main.cpp.o -MF CMakeFiles/qwidgect.dir/main.cpp.o.d -o CMakeFiles/qwidgect.dir/main.cpp.o -c "/home/zaza/work space/developmentW/c++/qt/qwidgect/main.cpp"

CMakeFiles/qwidgect.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qwidgect.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/zaza/work space/developmentW/c++/qt/qwidgect/main.cpp" > CMakeFiles/qwidgect.dir/main.cpp.i

CMakeFiles/qwidgect.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qwidgect.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/zaza/work space/developmentW/c++/qt/qwidgect/main.cpp" -o CMakeFiles/qwidgect.dir/main.cpp.s

CMakeFiles/qwidgect.dir/widget.cpp.o: CMakeFiles/qwidgect.dir/flags.make
CMakeFiles/qwidgect.dir/widget.cpp.o: /home/zaza/work\ space/developmentW/c++/qt/qwidgect/widget.cpp
CMakeFiles/qwidgect.dir/widget.cpp.o: CMakeFiles/qwidgect.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/zaza/work space/developmentW/c++/qt/qwidgect/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/qwidgect.dir/widget.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qwidgect.dir/widget.cpp.o -MF CMakeFiles/qwidgect.dir/widget.cpp.o.d -o CMakeFiles/qwidgect.dir/widget.cpp.o -c "/home/zaza/work space/developmentW/c++/qt/qwidgect/widget.cpp"

CMakeFiles/qwidgect.dir/widget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qwidgect.dir/widget.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/zaza/work space/developmentW/c++/qt/qwidgect/widget.cpp" > CMakeFiles/qwidgect.dir/widget.cpp.i

CMakeFiles/qwidgect.dir/widget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qwidgect.dir/widget.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/zaza/work space/developmentW/c++/qt/qwidgect/widget.cpp" -o CMakeFiles/qwidgect.dir/widget.cpp.s

CMakeFiles/qwidgect.dir/database.cpp.o: CMakeFiles/qwidgect.dir/flags.make
CMakeFiles/qwidgect.dir/database.cpp.o: /home/zaza/work\ space/developmentW/c++/qt/qwidgect/database.cpp
CMakeFiles/qwidgect.dir/database.cpp.o: CMakeFiles/qwidgect.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/zaza/work space/developmentW/c++/qt/qwidgect/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/qwidgect.dir/database.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qwidgect.dir/database.cpp.o -MF CMakeFiles/qwidgect.dir/database.cpp.o.d -o CMakeFiles/qwidgect.dir/database.cpp.o -c "/home/zaza/work space/developmentW/c++/qt/qwidgect/database.cpp"

CMakeFiles/qwidgect.dir/database.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qwidgect.dir/database.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/zaza/work space/developmentW/c++/qt/qwidgect/database.cpp" > CMakeFiles/qwidgect.dir/database.cpp.i

CMakeFiles/qwidgect.dir/database.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qwidgect.dir/database.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/zaza/work space/developmentW/c++/qt/qwidgect/database.cpp" -o CMakeFiles/qwidgect.dir/database.cpp.s

CMakeFiles/qwidgect.dir/persondialog.cpp.o: CMakeFiles/qwidgect.dir/flags.make
CMakeFiles/qwidgect.dir/persondialog.cpp.o: /home/zaza/work\ space/developmentW/c++/qt/qwidgect/persondialog.cpp
CMakeFiles/qwidgect.dir/persondialog.cpp.o: CMakeFiles/qwidgect.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/zaza/work space/developmentW/c++/qt/qwidgect/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/qwidgect.dir/persondialog.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qwidgect.dir/persondialog.cpp.o -MF CMakeFiles/qwidgect.dir/persondialog.cpp.o.d -o CMakeFiles/qwidgect.dir/persondialog.cpp.o -c "/home/zaza/work space/developmentW/c++/qt/qwidgect/persondialog.cpp"

CMakeFiles/qwidgect.dir/persondialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qwidgect.dir/persondialog.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/zaza/work space/developmentW/c++/qt/qwidgect/persondialog.cpp" > CMakeFiles/qwidgect.dir/persondialog.cpp.i

CMakeFiles/qwidgect.dir/persondialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qwidgect.dir/persondialog.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/zaza/work space/developmentW/c++/qt/qwidgect/persondialog.cpp" -o CMakeFiles/qwidgect.dir/persondialog.cpp.s

CMakeFiles/qwidgect.dir/libdialog.cpp.o: CMakeFiles/qwidgect.dir/flags.make
CMakeFiles/qwidgect.dir/libdialog.cpp.o: /home/zaza/work\ space/developmentW/c++/qt/qwidgect/libdialog.cpp
CMakeFiles/qwidgect.dir/libdialog.cpp.o: CMakeFiles/qwidgect.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/zaza/work space/developmentW/c++/qt/qwidgect/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/qwidgect.dir/libdialog.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qwidgect.dir/libdialog.cpp.o -MF CMakeFiles/qwidgect.dir/libdialog.cpp.o.d -o CMakeFiles/qwidgect.dir/libdialog.cpp.o -c "/home/zaza/work space/developmentW/c++/qt/qwidgect/libdialog.cpp"

CMakeFiles/qwidgect.dir/libdialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qwidgect.dir/libdialog.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/zaza/work space/developmentW/c++/qt/qwidgect/libdialog.cpp" > CMakeFiles/qwidgect.dir/libdialog.cpp.i

CMakeFiles/qwidgect.dir/libdialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qwidgect.dir/libdialog.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/zaza/work space/developmentW/c++/qt/qwidgect/libdialog.cpp" -o CMakeFiles/qwidgect.dir/libdialog.cpp.s

# Object files for target qwidgect
qwidgect_OBJECTS = \
"CMakeFiles/qwidgect.dir/qwidgect_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/qwidgect.dir/main.cpp.o" \
"CMakeFiles/qwidgect.dir/widget.cpp.o" \
"CMakeFiles/qwidgect.dir/database.cpp.o" \
"CMakeFiles/qwidgect.dir/persondialog.cpp.o" \
"CMakeFiles/qwidgect.dir/libdialog.cpp.o"

# External object files for target qwidgect
qwidgect_EXTERNAL_OBJECTS =

qwidgect: CMakeFiles/qwidgect.dir/qwidgect_autogen/mocs_compilation.cpp.o
qwidgect: CMakeFiles/qwidgect.dir/main.cpp.o
qwidgect: CMakeFiles/qwidgect.dir/widget.cpp.o
qwidgect: CMakeFiles/qwidgect.dir/database.cpp.o
qwidgect: CMakeFiles/qwidgect.dir/persondialog.cpp.o
qwidgect: CMakeFiles/qwidgect.dir/libdialog.cpp.o
qwidgect: CMakeFiles/qwidgect.dir/build.make
qwidgect: /usr/lib/x86_64-linux-gnu/libQt5Sql.so.5.15.13
qwidgect: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.13
qwidgect: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.13
qwidgect: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.13
qwidgect: CMakeFiles/qwidgect.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/home/zaza/work space/developmentW/c++/qt/qwidgect/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable qwidgect"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qwidgect.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/qwidgect.dir/build: qwidgect
.PHONY : CMakeFiles/qwidgect.dir/build

CMakeFiles/qwidgect.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/qwidgect.dir/cmake_clean.cmake
.PHONY : CMakeFiles/qwidgect.dir/clean

CMakeFiles/qwidgect.dir/depend: qwidgect_autogen/timestamp
	cd "/home/zaza/work space/developmentW/c++/qt/qwidgect/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/zaza/work space/developmentW/c++/qt/qwidgect" "/home/zaza/work space/developmentW/c++/qt/qwidgect" "/home/zaza/work space/developmentW/c++/qt/qwidgect/build" "/home/zaza/work space/developmentW/c++/qt/qwidgect/build" "/home/zaza/work space/developmentW/c++/qt/qwidgect/build/CMakeFiles/qwidgect.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/qwidgect.dir/depend

