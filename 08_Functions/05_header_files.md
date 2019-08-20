|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---
# Header Files

* Header files are a way of sharing code between several source files
* These filenames traditionally end in a (.h) *with out parentheses*
* Header files hold the declaration (aka prototype) of functions
* These functions are defined in supporting source files (.c)

---

* The C standard library header files have been logically organized (ie. stdio.h, stdlib.h, math.h, etc.)
* Programmers can write their own header files and even create their own libraries
* Libraries can be shared among programmmers

* <> loads system headers

```c
#include <stdio.h>
```

* "" loads headers from the local directory first

```c
#include "My_Local_Header.h"
```

### Examples

```c
///MyHeader.h///
#ifndef MY_HEADER_
#define MY_HEADER_

/*
* If a is larger than b, return 1
* If a is less than or equal to b, return 0
*/

extern int is_larger(int a, int b);
#endif //MY_HEADER_


// ===========================

///MyHeader.c///
#define MY_HEADER_YES 1
#define MY_HEADER_NO 0

extern int is_larger(int a, int b)
{
    if(a > b)
    {
        return MY_HEADER_YES;
    }
    else
    {
        return MY_HEADER_NO;
    }
}


// =======================================


///myCode.c///
#define _CRT_SECURE_NO_WARNINGS 1       //required to utilize scanf()
#include <stdio.h>                      //defines printf() and scanf()
#include "MyHeader.h"                   //your header

int main(void)
{
    int firstNum, secondNum;        // input variables
    _flushall();                    // flush the streams (This doesn't always work, but the function I provided last lab will)
    scanf("is %d larger than %d?", &firstNum, &secondNum);

    if (is_larger(firstNum, secondNum))         //if is_larger() returns 1...
    {
        printf("%d was larger\n", firstNum);    //...then firstNum was larger...
    }
    else    //...otherwise it returned 0 so...
    {
        printf("%d was larger\n", secondNum);   //...secondNum was larger
    }

    return 0;
}
```

---
### Some Header File Guidelines:

    1. Restrict yourself to logically related ideas
    2. Only #inlcude other header files you **NEED**
    3. Avoid established header file names
    4. Do not nest header files
    5. Inlcude per-function comment blocks
    6. Use header file guards
    7. Make names unique
    8. Do not include executable code
    9. #include headers may need to go in the header's source file (.c)

**NOTE:** Header file creation example in visual studio **ONLY**

    1. Start a new project (Ctrl+Shift+N)
    2. In “Solution Explorer”, right click “Header Files”, click“Add”, and select “New Item” (Ctrl+Shift+A)
    3. Select “Header File (.h)”, name it “StudentHeader.h”, andclick “Add”
    4. In “Solution Explorer”, right click “Source Files”, click“Add”, and select “New Item” (Ctrl+Shift+A)
    5. Select “C++ File (.cpp)”, name it “StudentHeader.c”,manually changing the file extension to (.c), and click “Add”
    6. Create another source file #include “StudentHeader.h”

---

## Demo Lab - String Theory

* Write a header named *MyStringHeader.h*
* Write a function for the header of prototype: 

```c
int print_the_count(char * inputString, int strLen);
```

* Define the function in *MyStringHeader.c*
* Return Value
    * \# of alphabet leters in the string
    * -1 if inputString is NULL
    * -2 if strLen is zero of less
* Parameters - A non-NULL terminated string and the length of that string
* Purpose - Print a table of letters from the string with their count
    * Write a program that reads a string from user input and then calls print_the_count()
    * When satisfied, run "string_theory.c"
    
## Demo Lab1 MyStringHeader

```c

#ifndef MY_STRING_HEADER_
#define MY_STRING_HEADER_

/*
 * FUNCTION:   int print_the_count(char * inputString, int strLen)
  * ARGUMENTS:  inputString is a pointer to a character array (see: string) and is *NOT* guaranteed to be NULL terminated.  This is why the length of the string is also passed as an argument.  
 * strLen is the length of the inputString.  
 * strLen is required as a safety measure since inputString is not guaranteed to be null-terminated.  
 * strLen does not need to be long enough to include any null character, even if there was one.
  * RETURNS:    # of alphabet letters found in inputString ERR_NULL_POINTER is inputString is NULL ERR_INVALID_LENGTH is strLen is unreasonable (zero or less)
  * NOTES:      Not only does this function return the total number of alphabet letters that were counted, it should also print a table of letters from the string with their count.  
 * Do not print any letters that were not found in inputString.  
 * The "case" of the letter (upper or lower) should not matter for the count.  There are different ways to ignore the case of a char.  
 * It is up to the student to determine the method.
 */
* int print_the_count(char * inputString, int strLen);
* int reverse_it(char * forwardString, int strLen);
#endif

```

### Demo Lab2 - MyStringHeader

```c

// MyStringHeader.c
#include <stdio.h>
#include <ctype.h>
#define ERR_NULL_POINTER -1;        // string is null
#define ERR_INVALID_LENGTH -2;      // string length is zero or less

extern int print_the_count(char * inputString, int strLen)
{
    char tempChar = 0;      // Current char being acted on
    int table[26] = {0};    // Alpha
    int count = 0;
    if (!inputString)
    {
        return ERR_NULL_POINTER;
    }
    else if (!strLen)
    {
        return ERR_INVALID_LENGTH;
    }
    for (int i = 0; i < strLen; i++)
    {
        if (inputString[i] >= 65 && inputString[i] <= 122)
        {
            tempChar = inputString[i];
            tempChar = toupper(tempChar);
            table[tempChar - 65] += 1;
            count++;
        }
    }
    // Print the table
    for (int i = 0; i < sizeof(table)/sizeof(table[0]); i++)
    {
        printf("%c: %d\n", i + 65, table[i]);
    }
    return count;
}
// extern reverse_it(char * forwardString, int strLen);

```

---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/08_Functions/06_recursion.md" rel="Continue to Next Topic"> Continue to Next Topic </a>
 
