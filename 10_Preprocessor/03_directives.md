|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# DIRECTIVES

## **\#include**

```c
#include <header file>        //standard header file

#include "header file"        //local header file
```

This preprocessing directive allows the program to use source code from another file (ie. libraries)

\#include tells the preprocessor to insert the entire filename into the program

Common convention places \#includes at the beginning of the source file

Header filenames can include relative or absolute paths

Include files may be nested but this feature can cause problems

### _**--caution--**_

avoid duplication of header inclusion with header guards \(ie. \#ifndef\)

avoid duplication of macros \(ie. \#ifndef\)

* defining a constant twice is not fatal

* defining a data structure or union twice is fatal and must be avoided

```c
//my_source.c (source file)
#include <stdio.h>

#include "my_math.h"

#include "my_geometry.h"


int main(void)
{
    printf("%.5f\n", PI);                    //3.14159
    return 0;
}



```

```c
//my_math.h (header file)
#define PI 3.14159

```

```c
//my_geometry.h (header file)
#define PI 3.14159265359

```

#### ^^notice here, how we have a duplication of macros in headers^^

_note: The code may still compile even though the header files are poorly written. Later preprocessing directives \(\#ifndef\) will detail how to avoid this problem. In this case the preprocessor has two references to macro constants \(PI\). The compiler used in preparation for this bloc of instruction prints the macro constant from my\_geometry.h instead of my\_math.h. Other compilers may perform differently. Instead of attempting to reverse engineer why, this objective will address methods to avoid this lack of preprocessor insight \(\#ifndef\)._

assembling a header into an object file then linking to source code:

![](/assets/import2.png)

## \#define

```c
#define name [(parameter_list)] [replacement_text]
```

Defines constants and macros

Preprocessor replaces all occurrences of:

```c
name [(parameter_list)]        //is replaced

replacement_text               //replaces the above
```

**-- CAUTION --**

* substitutions are not made within quoted strings
    ```c
    //BAD constant EXAMPLE

    #define UNIT 90COS

    int main(void)
    {
        char squadron[] = {"UNIT"};
        puts(squadron);
    
        return 0;
    }

    //BAD constant OUTPUT

    UNIT

    //GOOD constant EXAMPLE

      #define UNIT "90COS"

    int main(void)
    {
        char squadron[] = {UNIT};
        puts(squadron);
    
        return 0;
    }

    //GOOD constant OUTPUT
    
    90COS
     
      ```
* Partial substitutions are not made
    ```c
    /// BAD SUBSTITUTION EXAMPLE ///

    #define COUNT 1

    int main(void)
    {
        printf(“LAUNCH# %d\n”\
    , COUNTCOUNT);
        printf(“%d\n”, COUNT * 3);
        printf(“%d\n”, COUNT + COUNT);
        printf(“%d\n”, COUNT);

        return 0;
    }
    /// BAD SUBSTITUTION OUTPUT ////

    error C2065: ‘COUNTCOUNT’ : 
    undeclared identifier

    //COMPILE ERROR!!!!!!!!!

    // GOOD SUBSTITUTION EXAMPLE ///

    #define COUNT 1

    int main(void)
    {
        printf(“LAUNCH# %d\n”\
    , (COUNT * 10) + (COUNT));
        printf(“%d\n”, COUNT * 3);
        printf(“%d\n”, COUNT + COUNT);
        printf(“%d\n”, COUNT);

        return 0;
    }

    /// GOOD SUBSTITUTION OUTPUT ///

    LAUNCH# 11
    3
    2
    1

    ```
* Lack of explicit parentheses may result in unexpected behavior.
    ```c
    /////// BAD MACRO EXAMPLE //////

    #define TIMES(a,b) a * b

    int main(void)
    {
        result = (45 + 45) * 2;
        printf(“%d\n”, result);        

        result = TIMES(45 + 45, 2);
        printf(“%d\n”, result);

        return 0;
    }

    /////// BAD MACRO OUTPUT ///////

    180
    135

    ////// GOOD MACRO EXAMPLE //////

    #define TIMES(a,b) ((a) * (b))

    int main(void)
    {
        result = (45 + 45) * 2;
        printf(“%d\n”, result);        

        result = TIMES(45 + 45, 2);
        printf(“%d\n”, result);

        return 0;
    }

    ////// GOOD MACRO OUTPUT ///////

    180
    180
    ```
* Surround macros that contain complete statements with curly braces \({ }\)
    ```c
    //// BAD STATEMENTS EXAMPLE ////
    #define <stdlib.h>
    #define DIE puts(“Error”);\
    exit(EXIT_FAILURE);
    int main(void)
    {
        int x = 3;
        if (0 == x)
            DIE;


        printf(“%.5f”, 10.0 / x);
        return 0;
    }

    /////// BAD MACRO OUTPUT ///////

    The program ‘bad_macro.exe’ has exited with code 1 (0x1).


    /// GOOD STATEMENTS EXAMPLE ////
    #define <stdlib.h>
    #define DIE {puts(“Error”);\
    exit(EXIT_FAILURE);}
    int main(void)
    {
        int x = 3;
        if (0 == x)
            DIE;


        printf(“%.5f”, 10.0 / x);
        return 0;
    }


    //// GOOD STATEMENTS OUTPUT ////

    3.33333
    ```
* Consider using CONST declaration instead of \#define
    * **const** variables have the following qualities
        * Have a data type
        * Give fine control over scope
        * Are available to the DEBUGGER
  
    ```c
    ///// BAD CONSTANT EXAMPLE /////

    #define NUM 68.8

    int main(void)
    {
        float x = NUM;
        int numSize = sizeof(NUM);
        int xSize = sizeof(x);

        if (numSize != xSize)
            return -1;
        return 0;
    }

    ///// BAD CONSTANT OUTPUT //////

    The program ‘bad_type.exe’ has exited with code -1 (0xffffffff).


    // NOT GOOD CONSTANT EXAMPLE ///

    #define NUM (float)68.8
    int main(void)
    {
        float x = NUM;
        int numSize = \
    sizeof(NUM);
        int xSize = sizeof(x);

        if (numSize != xSize)
            return -1;
        return 0;
    }

    /// NOT GOOD CONSTANT OUTPUT ///

    The program ‘not_good_type.exe’ has exited with code 0 (0x0).



    //// GOOD CONSTANT EXAMPLE /////

    const float num = 68.8;

    int main(void)
    {
        float x = num;
        int numSize = sizeof(num);
        int xSize = sizeof(x);

        if (numSize != xSize)
            return -1;
        return 0;
    }

    ///// GOOD CONSTANT OUTPUT /////

    The program ‘good_type.exe’ has exited with code 0 (0x0).

    ```

### NOTE: "const..." CANNOT BE USED AS A DIMENSION FOR ARRAYS    
```c
    ///// BAD CONSTANT EXAMPLE /////
    int main(void)
    {
        const int bufSize = 10;
        char inBuff[bufSize];
        _flushall();
        fgets(inBuff,bufSize,stdin);
        puts(inBuff);

        return 0;
    }

    ///// BAD CONSTANT OUTPUT //////

    error C2057: expected constant expression
    //COMPILE ERROR!!!


    //// GOOD CONSTANT EXAMPLE /////

    #define BUFSIZE 10

    int main(void)
    {
        char inBuff[BUFSIZE];
        _flushall();
        fgets(inBuff,BUFSIZE,stdin);
        puts(inBuff);

        return 0;
    }

    ///// GOOD CONSTANT OUTPUT /////

    This guy?  He’s the best!
    This guy?

```
## SOME THINGS TO REMEMBER

### 1. Substitutions are not made within quoted strings.
### 2. Partial substitutions are not made.
### 3. Lack of explicit parentheses may result in unexpected behavior.
### 4. Surround macros that contain complete statements with curly braces ( { } ).
### 5. Consider using CONST declarations instead of #define.

---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/10_Preprocessor/04_hash_operator.md" rel="Continue to Next Topic"> Continue to Next Topic </a>
