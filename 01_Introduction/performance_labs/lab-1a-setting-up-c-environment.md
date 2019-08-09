# Lab 1A: Setting up C Environment

# !!! ATTENTION: THIS LAB IS DEPRECATED !!!
This lab is to only be used if needed. All computers should be sharing the same exact snapshot with all the required tools. 

In this lab, we are going to ensure everything is setup properly and we are going to go over some tools you are free to use.

### IDE/Text Editor:

#### **IDEs**

* **Microsoft Visual Studio \(Windows\)**
  * This will be one of the only IDE used in this course
  * Is an industry standard
  * **MUST BE INSTALLED**
* **Eclipse \(Cross-platform\)**
  * Commonly used IDE
  * I personally don't recommend it
* **Borland \(Windows\)**
  * A bit older
* **Turbo C \(Windows\)**
  * Oldest IDE for C

#### **Compiler**

* **GNU Compiler Collection \(GCC\) - Cross-platform**
  * We will be using this a lot to compile our code
  * **Install instructions below**
* **Clang Compiler**
  * Popular on OSX, though it's contributors include Apple, Microsoft, Google, ARM, etc

#### **Text Editors \(Take your pick\)**

* **Visual Studio Code**
  * Free, lightweight text-editor version of Visual Studio. A great editor with a ton of plugins.
  * Cross-platform
* **Atom**
  * Community backed, open source text editor from GitHub
  * Insane amount of plugins
  * Cross-platform
* **Sublime Text Editor**
  * One of the best text editors around
  * Very fast
  * Cross-platform
* **Notepad++**
  * Windows
  * A bit basic
* **Nano**
  * Terminal based text editor.
  * Bit easier to use than alternatives
  * May need it if you need to make a change with no access to an editor or GUI
* **Vi/VIM**
  * Installed on every single Linux OS virtually
  * Bit more challenging to use
  * VERY powerful

#### **Tools**

* **CMake**
  * Used to manage the build process of software using compiler-independent methods. 
  * Cross-platform
  * Free and open source
  * Will be heavily used for C++ and Assembly
* **GDB \(GNU Debugger\)**
  * Portable debugger
  * Cross-platform
  * Allows the user to see what is going on 'inside' another program while it executes
  * Free and open source
* **WinDbg**
  * Multipurpose debugger for the Microsoft Windows OS. 
  * Distributed by Microsoft

## GCC/G++ Install Instructions

### Windows

**Check if it's already setup:**

1. Open command prompt
2. type in: **gcc**
3. Verify: **gcc: fatal error: no input files**
4. If you received the above error, GCC is installed. 
5. type in: **g++**
6. Verify: **g++: fatal error: no input files**
7. If you received the above error, G++ is installed
8. If you did not receive either or both errors, continue to **Check PATH**

**Check Path:**

1. Navigate to Local Disk root
2. If MinGW directory does not exist, jump to **Install MinGW**
3. If it does exist, click the start button and type **path**
4. A selection should appear called: **Edit Environment Variables for your Account**, click it. 
5. Under **User Variables for \[username\]**, 
   1. select **path**
   2. click **edit**
   3. click **new**
   4. input **C:\MinGW\bin**
   5. click **OK**
6. Click **OK** and close all instances of command prompt
7. Attempt **Check if it's already setup **steps again

**Install MinGW**

1. Open your browser and navigate to [https://sourceforge.net/projects/mingw/files/Installer/](https://sourceforge.net/projects/mingw/files/Installer/)
2. Download **mingw-get-setup.exe**
3. Click on the downloaded file and install
4. Once** MinGW Installation Manager** pops up,
   1. Click on **Basic Setup **on the left hand side
   2. Select **mingw32-base **and **mingw32-gcc-g++**
   3. Click **Installation **on the top tool bar and select **Apply Changes**
   4. Wait for install to finish and proceed to **Check Path**

## Compiling and Running C Code

**Linux**

```go
// navigate to source file
gcc -o <output file> <input file>
chmod a+x <output file>
./<output file>
```

**Windows**

```
// navigate to source file
gcc -o <output file> <input file>
<output file>
```

![](/assets/r_170390_1mBnJ.jpg)

