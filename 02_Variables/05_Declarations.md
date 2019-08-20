|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Declarations & Initialization

Programming requires two things: data (variables) and instructions (code). Variables are the building blocks and code is the blueprint with "how-to" instructions.

## Declaring Variables: 

A declaration determines the interpretation and properties of one or more identifiers. A declaration that allocates storage space for an object or a function is a **definition**. Multiple variables of the same data type can be declared in a single statement. Declaration alone does not 'implicitly' zeroize a variable. That comes later with initialization.

*NOTE: all variables must be declared before use!* 

### Declaration Example

```c
int main(void)
{
    /********** VARIABLE DECLARATION **********/
    /* Syntax: <DATA TYPE> <VARIABLE NAME>; */

    int lowerLimit;    // lowest y value for graph
    int upperLimit;    // highest y value for graph
    float x, y;        // graphing function variables

    // used to hold a person's individual initials
    char firstInitial, middleInitial, lastInitial;
    double pi;        // stores the constant "pi"
    return 0;
}
```

---

## Initialization

It is very important that you initialize a variable after declaring it. This simply means assigning it a value of some sort. Failure to assign a value to the variable could result in one being assigned by your IDE, or worse, you'll end up with something you do not want. Think of it this way. By declaring a variable, you have allocated a chunk of memory for those variables. By not initializing your variable, your values could be valid or not, based on what could have been assigned to that memory location previously etc...

### Initialization Example

```c
int main(void)
{
    /******** VARIABLE INITIALIZATION ********/

    /* initialization syntax...
    <DATA TYPE> <VARIABLE NAME> = <INITAL VALUE>; */

    int lowerLimit = -10;    // lowest y value for grahp
    int upperLimit = 10;     // highest y value for graph
    float x = 1.0, y = 2.1;  // graphing variables 

    // used to hold a person's individual initials
    char firstInit = 'J', middleInit = 'G', lastInit = 'V';

    double pi = 3.14159265359;    // stores the constant "pi"
    finalResult = 0;    // placeholder 0. to be changed later.

    return 0;
}
```

---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/02_Variables/performance_labs/lab1.md" rel="PERFORMANCE LAB 1"> PERFORMANCE LAB 1 </a>
