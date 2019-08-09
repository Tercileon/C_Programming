<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

# Function Basics

## Function Prototype
* Every c program contains the function **main()** at a minimum
* All other functions in a program are **subroutines**
* A function's "prototype" is a declaration that establishes the function's:
    1. Return Type
    2. Required Parameters
    3. Optional Parameters
* Function prototypes are required if you are going to build main above defined functions (this will make more sense later). 

```c
<return type> <function name> (<arg type> <argument>, ...);

//from left to right respectively

int scanf (const char *fmt, ...);       //function prototype
```
 ---
## Function Definition

* A functions "definition" establishes the functions body of statements

```c
...
/*
* scanf(fmt, va_alist)
*/
int scanf (const char *fmt, ...)
{
    int count;
    va_list ap;

    va_start (ap, fmt);
    count = vfscanf (stdin, fmt, ap);
    va_end (ap);
    return (count);
}
...
```
---
## Function Returns

* Return values should represent something meaningful
* Return values should also incorporate error conditions
* Even a seemingly one-way function like printf() has a return value

```c
int printf(const char *format, ...);            //function prototype

/*
* upon successful return, printf returns the number of characters printed (excluding the null byte used to end output to strings).
* if an output error is encountered, a negative value is returned
*/
```

--- 
## Functions and Main()

* There are two ways to create user functions. 
* The largest factor we need to consider is the location of main within the file. 

### Main First

* If main is created first, we need to prototype our functions. 
* If we do not prototype our functions, the compiler will not know what to do with function calls
* Take the below for example:

```c
#include <stdio.h>

int main()
{
    test_func();
    printf("Main Works!\n");

    return 0;
}

int test_func() 
{
    printf("Function works!\n");

    return 0;
}
```

* Many may believe this works... but as you will learn in coming sections, the C build process does not work like that. In order to make this work... we need to add a function prototype for test_func() above main(). 

```c
#include <stdio.h>

int test_func();    // ADDED

int main()
{
    test_func();
    printf("Main Works!\n");

    return 0;
}

int test_func() 
{
    printf("Function works!\n");

    return 0;
}
```
---
### Main Last

* If main is last, you can choose not to prototype your functions. 
* But hold on, let's not jump into this method just yet because it sounds easier

```c
#include <stdio.h>

int test_func() 
{
    printf("Function works!\n");

    return 0;
}

int main()
{
    test_func();
    printf("Main Works!\n");

    return 0;
}
```

* The above code will compile with no issues. 

---
### So which method should you choose?

* It is a best practice to create function prototypes
    * This is because, as we are going to learn, function prototypes are often created inside header files
    * Those header files are then imported via #include
    * This method works very well for larger code bases and projects

# Demo: "Newline Records"

```c
int remove_newline(char * buffer);
```

* We are going to create a function that takes a pointer (don't get too caught up on the use of a poitner) to a buffer, containing a nul-terminated string. We are then going to replace all newline characters with spaces and return the number of newline characters changed. 

* **Return Value** : Number of newline characters changed
* **Parameters** : Pointer to a null-terminated string
* **Purpose** : Replace all newline characters with spaces
* **Requirments** : 
    * Ensure buffer is not NULL 
    * Return ERR_NULL_POINTER if buffer is NULL
    * Return ERR_NONE_FOUND if no newlines are found
    
    <a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/08_Functions/demonstration_labs/newline_records.md" rel="Solution to Demo"> Solution to Demo </a>

---

# Complete Performance Lab 20 "Healthy Substitutions"

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/08_Functions/performance_labs/lab8A/Lab20.md" rel="PERFORMANCE LAB 20"> PERFORMANCE LAB 20 </a>
