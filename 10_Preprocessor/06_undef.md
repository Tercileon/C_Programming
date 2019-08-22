|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# #undef

This operator is used to cancel a MACRO's definition. This is the anti-matter to #define.

#### USED TO:
* Allow a function of the same name to run.
* Verify a routine is really a function, and not a MACRO.
    * By using #undef we insure that any previous USE of the name in a MACRO is cancelled, thus allowing our function of the same name to run
        * this is many times avoidable if the programmer used better coding standards!!
* Redefine a MACRO (see below examples)
```c
////// BAD MACRO EXAMPLE ///////

#include <stdio.h>
// stdio.h defines EOF as -1
int main(void)
{
    printf(“%d \n”, EOF);

#define EOF (-3)

    printf(“%d \n”, EOF);

    return 0;
}

/////// BAD MACRO OUTPUT ///////

-1
-3
```
### COMMAND PROMPT OUTPUT:
```bash
/////////////////Here we have our preprocessing///////////////

C:\Temp>cl /P bad_macro.c
Microsoft (R) C/C++ Optimizing Compiler Version 18.00.40629 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

/////////////////////////Our WARNING//////////////////////////

bad_macro.c
c:\temp\bad_macro.c(7) : warning C4005: ‘EOF’ : macro redefinition
        <Include Path>\stdio.h(59) : see previous definition of ‘EOF’;

C:\Temp>
```

```C
////// GOOD MACRO EXAMPLE //////

#include <stdio.h>
// stdio.h defines EOF as -1
int main(void)
{
    printf(“%d \n”, EOF);
#undef EOF
#define EOF (-3)

    printf(“%d \n”, EOF);

    return 0;
}

////// GOOD MACRO OUTPUT ///////

-1
-3
```
### COMMAND PROMPT OUTPUT:
```bash

///////////////preprocessing//////////////////////

C:\Temp>cl /P good_macro.c
Microsoft (R) C/C++ Optimizing Compiler Version 18.00.40629 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

good_macro.c

C:\Temp>
```

### DEMO LAB 1 10.6

* Write a simple C program that utilizes a header file
* Write a definition file for the header file
* Utilize the following preprocessor directives:
    * #include
    * #define
    * (#) Operator
    * (##)
    * #undef

---
## COMPLETE PERFORMANCE LAB 24

---

|[Performance Lab 24](/10_Preprocessor/performance_labs/lab24.md)|
|---|
