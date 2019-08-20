|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# CMake

The make utility and Makefiles provide a build system that can be used to manage the compilation and re-compilation of programs that are written in any programming language.  

CMake is designed to be used in conjunction with the native build environment. Simple configuration files placed in each source directory (called CMakeLists.txt files) are used to generate standard build files (e.g., makefiles on Unix and projects/workspaces in Windows MSVC) which are used in the usual way. CMake can generate a native build environment that will compile source code, create libraries, generate wrappers and build executables in arbitrary combinations. CMake supports in-place and out-of-place builds, and can therefore support multiple builds from a single source tree. CMake also supports static and dynamic library builds. Another nice feature of CMake is that it generates a cache file that is designed to be used with a graphical editor. For example, when CMake runs, it locates include files, libraries, and executables, and may encounter optional build directives. This information is gathered into the cache, which may be changed by the user prior to the generation of the native build files.  

Building complex projects is where CMake really shines — CMake is a cross-platform Makefile generator! Simply put, CMake automatically generates the Makefiles for your project.  

### Installation

To install CMake in Linux, run the following in the terminal:

```
# For Ubuntu

$ sudo apt-get install cmake

# For Fedora

$ dnf install cmake
```

On Windows download and run the installer:  

https://cmake.org/download/  

### Help
You can get the help manual via the --help option. For example;

```
$ cmake --help  

// or 

$ cmake -h
```

### Simple Program
This is a simple example program in C++ to printout: Hello World.

```
// test.cpp

#include <iostream>

using namespace std;

int main(void) {

     cout << "Hello World" << endl;

     return(0);

}
```

### CMakeList.txt
```
# Specify a minimum version for CMake
cmake_minimum_required(VERSION 2.8.9)

# Project's name
project (hello)

# Requests an executable named hello and be built using test.cpp
add_executable(hello test.cpp)
```

Make sure you are in the directory where you saved test.cpp and CMakeList.txt  
Then enter:

```
# The "." refers to the current directory
$ cmake .
-- The C compiler identification is GNU 8.2.0
-- The CXX compiler identification is GNU 8.2.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/patagonia/Documents/Code
```

CMake identified the environment settings for the Linux device and created the Makefile for this project, which can be viewed. Do not make edits to this Makefile, as any edits will be overwritten the next time that the cmake utility is executed.  

Once the Makefile has been created, the **make** command can be used to build the project.

```
$ make
Scanning dependencies of target hello
[ 50%] Building CXX object CMakeFiles/hello.dir/test.cpp.o
[100%] Linking CXX executable hello
[100%] Built target hello
$ ./hello
Hello World
```

### CMake Global Variables

```
CMAKE_BINARY_DIR
```
If you are building in-source, this is the same as CMAKE_SOURCE_DIR, otherwise this is the top level directory of your build tree.
```
CMAKE_SOURCE_DIR
```

This is the directory, from which cmake was started, i.e. the top level source directory.
```
EXECUTABLE_OUTPUT_PATH
```

Set this variable to specify a common place where CMake should put all executable files (instead of CMAKE_CURRENT_BINARY_DIR).
```
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
LIBRARY_OUTPUT_PATH
```

Set this variable to specify a common place where CMake should put all libraries (instead of CMAKE_CURRENT_BINARY_DIR).
```
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
PROJECT_NAME
```

The name of the project set by the PROJECT() command.
```
PROJECT_SOURCE_DIR
```

Contains the full path to the root of your project source directory, i.e. to the nearest directory where CMakeLists.txt contains the PROJECT() command. Now, you have to compile the test.cpp. The way to do this task is too simple. Add the following line into your CMakeLists.txt:
```
add_executable(hello ${PROJECT_SOURCE_DIR}/test.cpp)
```

### For more information reference the man pages:

https://linux.die.net/man/1/cmake

---

|[Next Topic](/02_Variables/README.md)|
|---|
