|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Functions

---

## Topics:

* ### Coding Style Guide
* ### Stub Code
* ### Function Definition
* ### Why, How, When, and What of Functions
* ### Function Basics
* ### Scope Rules
* ### Storage Class Specifiers
* ### Header Files
* ### Recursion

## By the end of this lesson you should know:

* Why, How, When and What to use of functions
* Have a strong understanding of C scope rules
* Understand how to utilize specifiers
* Understand at a mid-level, how to utilize header files
* How recursion works and be able to implement recursive functions of your own

## Coding Style Guide

1. Comments:
    * Functions must be explained
2. Don't Repeat Yourself (DRY)
    * Extract replicated algorithms/code into a new function
    * Divide a big problem into several smaller problems
    * Small solutions can become repeatable functions
3. Names (my_function_name)
    * Ensure to use underscores rather than capcase... keep everything lower case
4. Indent/Brace Style
    * Pick a common method and stick with it. Don't mix and match
5. Files
    * First character of a name should be a letter. 
    * All characters should be lower case letters
    * Numbers are allowed, just not as the first character
    * The base name should be eight or fewer characters
    * The name should make sense in the scope of the program
        * Names should not be the same as private names (esp with headers, such as math.h or stdio.h)
    * Different suffixes:
        * C Source: .c
        * Relocatable Object File: .o
        * Header File: .h
        * Markdown: .md
            * Markdown readme files should be all caps
6. General Formatting
    * Stay consistent
    * Stay clean
    * Stay short
    * Stay readable
7. Naming Conventions
    * You can use your own nameing conventions, but there are some general rules
    * Names with leading and trailing underscores are reserved for system purposes and should not be used for user-names
    * #define constants should be in all CAPS
    * Function, typedef, variable names as well as struct, union and enum tag names should be **lower case**
    * Avoid names that look like each other. Avoid small names with characters that look similar, etc
    * Make the name related to the variable, task, etc...

---

|[Next Topic](/08_Functions/01_functions.md)|
|---|
