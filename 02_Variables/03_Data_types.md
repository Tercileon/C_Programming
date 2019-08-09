<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

# Data Types

Objects, functions, and expressions have a property called type, which are used to intrepret the binary value stored in an object or expression.

A variable's type regulates:
* The amount of memory occupied
* How the bit pattern stored is interpreted
* How a function's return value is to be interpreted

C "types" can be either **predefined** or **derived**.

### Predefined Types:
* Void
* Basic Types
    * Integer Types
    * Floating Types

*We will be going over derived types later*

---
## Data types:

| **keyword** | **description** | **example values** |
| :--- | :--- | :--- |
| **char** | one character in the local character set, represents characters as a decimal value stored as a small integer. | 'A', '$', 42, ( * ) |
| **int** | an integer | -31337, 0, 8338 |
| **float** | single-precision floating point (6 decimal places) | 3.14, 2.71828, 42.0 |
| **double** | double-precision floating point (15 decimal places) | 3.14159265359, 2.7182818284, 42.0 |
| **void** | no value is available |  |

---
## Demonstration Lab 1

```c
#include <stdio.h>

int main(void)
{
    int integer = 1;
    float singlePrecision = 2.2;
    double doublePrecision = 3.3;
    char singleChar = '$';
    char singleChar2 = 33;

    printf("your integer is %d \n", integer);
    printf("your float is %f \n", singlePrecision);
    printf("your double is %lf \n", doublePrecision);
    printf("your first char is %c \n", singleChar);
    printf("your second char is %c \n", singleChar2);  

    return 0;
}
```

---
### Review of the Above Code
  * Types used
  * What is the number 33 translated to ASCII

---
### Concepts to Come Later
    
  * Preprocessor Directives
  * Variable Declaration
  * Variable Initialization
  * Output
  * Printf Format Specifiers
  
  ---
  
<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/02_Variables/04_Sizes.md" rel="Continue to Next Topic"> Continue to Next Topic </a>

