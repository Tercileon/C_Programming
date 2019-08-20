|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Manual Linking

Definitions of a header file can be assembled into an object file

This object file can be linked with other object files to create an executable

\#include preprocessor directives are still necessary

```c
//my_source.c (source file)
#include <stdio.h>
#include ".\my_header.h"

int main(void)
{
    printf("%d\n", add_num(1, 2));

    return 0;
}

```

```c
//my_header.h (header file)
#ifndef MY_HEADER_INCLUDED_
#define MY_HEADER_INCLUDED_

int add_num(int x, int y);
#endif

```

```c
//my_header.c (header file definition)
int add_num(int x, int y)
{
    return x+y;
}

```
*BELOW IS AN EXAMPLE OF MANUAL LINKING IN VS CMD PROMPT*

![](/assets/manualLinking.JPG)


### (GUI)

NOTE: THE FOLLOWING CAN BE FOUND HERE IN VISIUAL STUDIO

![](/assets/mlGUI.JPG)

**[create a preprocessed file]**

Property pages --&gt; C/C++ --&gt; preprocessor --&gt; preprocess to a file: yes

**[create an assembly code]**

Property pages --&gt; C/C++ --&gt; output files --&gt; asm list location: $\(IntDir\)

Property pages --&gt; C/C++ --&gt; output files --&gt;assembler output: assembly-only listing /FA

**[create an object file]**

Property pages --&gt; C/C++ --&gt; output files --&gt; object file name

**[link an object file]**

Add the .obj to your project as an "existing item"

## DEMO LAB Manual Linking

1. Declare and define a simple function as a header
2. Write a source file that calls the header's function
3. Manually link the header's definition and your source file

---

## COMPLETE PERFORMANCE LAB 23

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/09_C_compiler/performance_labs/Lab23.md" rel="PERFORMANCE LAB 23"> PERFORMANCE LAB 23 </a>
