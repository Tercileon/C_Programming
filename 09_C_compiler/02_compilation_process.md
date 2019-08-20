|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Compilation Process

The Compilation Process roughly follows this order:

1. preprocessing
2. compiling
3. assembling
4. linking

*Note: Different sources enumerate the compilation process in different ways. Descriptions of the process here are considered non-exhaustive as some compilers may not follow this model.*

![](/assets/compilationProcess.png)

## Preprocessing

 Translates the source code prior to compilation.

* Cleans up backslashes

```c
printf("Hello \ World!\n");    
//is converted to    
printf("Hello World!\n");
```

Preprocessing further modifies a source code file by converting directives, constants, and macros

* A **DIRECTIVE** sends commands to the preprocessor that always begin with a POUND sign (#).

```c
///////////Directive examples/////////////
//example 1//
#include <stdio.h>                 //copies in the entire header file

//example 2//
#ifdef __cplusplus                //if this constant is defined...
    extern "C" {                  //...include this code.
#endif                            //That is all.
//example 3//
//execute the following code if DLEVEL is greater than 5.
#if DLEVEL > 5 
    <code>
#endif
```

* A **CONSTANT** defines an identifier and its associated *VALUE* for an entire source code file.

```c
//////////////Constant examples////////////////
//example 1//
#define BUFF_SIZE 512           //512 replaces BUFF_SIZE
char string1[BUFF_SIZE] = {0};  //this statement is changed...
char string1[512] = {0};        //...to this by the preprocessor

//example 2//
#define FALSE 0                   //0 replaces FALSE
(FALSE == num) ? num-- : num++;   //this statement is changed...
(0 == num) ? num-- : num++;       //...to this by the preprocessor

//example 3//
#define_CRT_SECURE_NO_WARNINGS 1    //used as a safety flag in VS
```

* A **MACRO** defines an identifier and its associated *CODE* for an entire source code file.

```c
////////////Macro Examples/////////////////////
//example 1//
#define AREA(r) (3.1415*(r)*(r))        //defines AREA(r) as inline
AREA(7+2);                              //this statement is changed...
(3.1415*(7+2)*(7+2));                   //...to this by the preprocessor
//example  2//
#define ADD_FIVE(x) ((x)+5)             //defines ADD_FIVE(x) inline
ADD_FIVE(9);                            //this statement is changed...
((9)+5);                                //...to this by the preprocessor
//example 3//
#define SWAP(a, b) a^=b; b^=a; a^=b;    //defines SWAP(a,b) as inline
SWAP(num1,num2);                        //this statement is changed...
num1^=num2; num2^=num1; num1^=num2;     //...to this by the preprocessor
```


## Compiling
Compiling is initiated when the file is put into the appropriate assembly code for the given architecture (.asm or .s)

* Lexical analysis breaks the source code into non divisible tokens such as:
    * (TOKENS)**keyword, identifier, constant, string literal, or symbol**.

* Syntax analysis concatenates (links things together) extracted tokens into chains of tokens and verifies that the order makes sense

* Semantic analysis checks whether the syntactically correct statements actually make sense

Code generation is normally handled through assembly but can be machine code as well.

## Assembling 
Assembling converts the assembly into object files

Assembly language mnemonics replaced by machine opcodes (instructions) that can be read by the CPU

An object file is comprised of machine code (.obj or .o)

## Linking 
Linking resolves references to external objects and functions, and generates the OS-appropriate executable file from one or more object files.

External objects or functions not defined in any of the translation units, are taken from either the standard or external libraries

External objects and functions must not be defined more than once in a program.

![](/assets/import.png)

**NOTE: THE FOLLOWING IS FOR MS VISUAL STUDIO**

#### VS command prompt
1. click the start menu icon in the bottom left corner of the desktop
2. start typing developer command prompt
3. open the **developer command prompt for Visual Studio**

#### How to manually compile
1. Navigate to source file via **developer command prompt for Visual Studio** using the following commands:
    1. cd \ (note the back slash...reason: windows)
    2. cd "C:\Users\user_name\source\repos" (without quotes)
    3. dir (to list all files/directories in current directory)

*NOTE: make sure you see your source file listed before continuing*

2. cl /P sourceFileName.c (preprocessed file)
3. cl /FA sourceFileName.c (assembly code)
4. cl /c sourceFileName.c (object file)
5. link souceFileName.obj

**NOTE: The following is for use with GCC**
1. Navigate to sourcefile.c
2. Using gcc apply the following for their intended result:
    1. -E (capitalized) PREPROCESSES but does not compile 
    2. -S (capitalized) COMPILES but does not assemble
    3. -c ASSEMBLES but does not link
    4. gcc without any of the above options will LINK files

---

## COMPLETE PERFORMANCE LAB 22

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/09_C_compiler/performance_labs/Lab22.md" rel="PERFORMANCE LAB 22"> PERFORMANCE LAB 22 </a>
