|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Functions

**NOTE:** Shell code will no longer be used as the focus now will be on external functions written in STUB code. Shell code will be written by the student.
```c
///SHELL code///
void my_function(void);                 //function prototype

int main(void)
{
/* main() presumably calls my_function() */
    [...]                              //students write main()
}

///STUB code///
void my_function(void)                  //function definition
{
    printf("yipee-kai-yay! \n");        //does something
    return;                             //ends
}
```

## Function Definition
    
* Blocks of code that perform something productive
* Sometimes functions take input
* Sometimes functions return output
* Many functions are defined in built-in libraries
* Functions may be written by programmers
* Examples:
    1. int main(void)
    2. int getchar(void)
    3. int putchar(void)
    4. int putc(int char, FILE *stream)
    5. float calc_my_average(int total, int num)
    6. int printf(const char *format, ...)

## Why, How, When, What

### Why write a function?

* **Reusability-** once a function is defined, it can be used over and over again
* **Brevity-** redundant algoritms broken out into functions will shorten code
* **Efficiency-** changes to functions alleviate the need to make multiple modifications
* **Abstraction-** you dont have to know how a function works inside to use it
* **Testing-** easier to test small parts of our program in isolation from the rest
* **Clean Memory-** function variables only live as long as the function (not always the case, depending on the decalaration)

### How to write a function?

1.  **Purpose-** define the single specific task the function will accomplish
2.  **Input-** define the necessary information the function needs (parameters)
3.  **Local Variables-** define the internal data variables needed to solve the problem
4.  **Algorithm-** decide on the steps the function will use to accomplish its purpose (code block)
5.  **Output-** determine the information provided for both success and failure (return value)

### When to write a function?

1.  Code that gets used more than once
2.  Hiding complexity
3.  Breaking large problems into small solutions
4.  An algorithm is more complicated to implement than to describe
5.  Code that makes someone else's life easier

### What makes a GOOD function?

1.  Performs a single, specific task
2.  Can be specified unambiguously
3.  Are preceded by precise comment blocks
4.  Are "no more that about 60 lines of code"
5.  Check the validity of parameters in the functions

*4 and 5 are taken from the practices of NASA's JPL*

---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/08_Functions/02_function_basics.md" rel="Continue to Next Topic"> Continue to Next Topic </a>
