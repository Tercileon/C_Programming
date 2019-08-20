|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Storage Class Specifiers

* A variable's storage class determines its scope, and storage duration
* The user can explicitly set the storage class for a variable
* Scope can be either block or file
* Storage durations can be either *Static* or *Automatic*
    
    static: 
    -initialzed once before the program begins
    -exists continuously throughout the program execution
    
    automatic:
    -generated each time the program enters the block
    -memory is freed when the block is terminated

## Specifier
* **Static**:
    * Always have a storage duration of static
    * Used to declare a static variable with limited scope

* **Extern**:
    * Declares variables with static storage duration that can be used throughout the program

| **Position of the Declaration** | **Storage Class Specifier** | **Scope** | **Storage Duration** | **Initialize** |
| --- | --- | --- | --- | --- |
| Within a block | Extern, static | Block/local |Static | Once |
| Outside all blocks | None, extern, static | File/global | Static | Once |
| Within a block | None | Block/local | Automatic | Each run |

---

### Breakdown

* **Auto** specifiers give variables have automatic storage duration. Rarely used because "automatic" is the default storgae class for variables within a function

* **Static** specifiers mean variables always have static storage duration. This specifier is used to declare static variables with a limited scope

* **Extern** is much like a static specifier but is instead used to declare variables with static storage duration that can be used throughout the program

```c
///static variable example 1///
int i = 0;

int normVar = 1;
static int statVar = 1;

for (i = 0; i < 10; i++)
{
    printf("norm = %-2d\t", normVar);
    printf("stat = %-2d\n", statVar);

    normVar++;
    statVar++;
}

///static variable output 1///
norm = 1     stat = 1
norm = 2     stat = 2
norm = 3     stat = 3
norm = 4     stat = 4
norm = 5     stat = 5
norm = 6     stat = 6
norm = 7     stat = 7
norm = 8     stat = 8
norm = 9     stat = 9
norm = 10    stat = 10

///static variable example 2///
int i = 0;

for (i = 0; i < 10; i++)
{
    int normVar = 1;
    static int statVar = 1;

    printf(“norm = %-2d\t”, normVar);
    printf(“stat = %-2d\n”, statVar);

    normVar++
    statVar++
}

///static variable output 2///
norm = 1     stat = 1
norm = 1     stat = 2
norm = 1     stat = 3
norm = 1     stat = 4
norm = 1     stat = 5
norm = 1     stat = 6
norm = 1     stat = 7
norm = 1     stat = 8
norm = 1     stat = 9
norm = 1     stat = 10

///static variable example 3///
int i = 0;

for (i = 0; i < 10; i++)
{
    int normVar = 1;
    static int statVar = 1;

    printf(“Norm = %-2d\t”, normVar);
    printf(“Stat = %-2d\n”, statVar);

    normVar++;
    statVar++;
}

printf(“Norm = %-2d\t”, normVar);
printf(“Stat = %-2d\n”, statVar);    

///static variable output 3///
NONE...will result in a compiler error!!!!
```
### extern

* This storage class specifier is used to share access to a variable across different source files by extending their "visibility"
* By default, the declaration and definition of a C function includes an implicit "extern"
* When extern is used with a variable, it is only declared not defined (unless the initialization of that decalartion represents the sole definition of that extern)
* Extern references can be referenced multiple times over multiple files but should only be defined once
* Not utilized for single file programs

---
## Demo Lab - String

```c

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "MyStringHeader.h"

int main()
{
	char someString[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'}; // Non null term
	int someStringLen = 11;

	int counter = print_the_count(someString, someStringLen);

	printf("\n\n\n\nTotal count: %d", counter);

	return 0;
}

```

---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/08_Functions/05_header_files.md" rel="Continue to Next Topic"> Continue to Next Topic </a>
