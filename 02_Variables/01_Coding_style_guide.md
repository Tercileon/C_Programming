|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Coding Style Guide

This is a generic coding style guide. Different guides will be released for different languages. The entire guide won't apply to every section. Newly applicable sections will be covered in each objective. The **requirements** section will be evaluated during all Progress Checks. The **recommended** section will NOT be evaluated but do represent best practices.

### Requirements

    1. comments
        - minimum documentation box on top
        - comment for each function
        - variable declaration
    2. indent/brace style
    3. files

### Recommended

    comments
    1. \#endif
    2. return values

---

### Documentation Box:
Every program should start with a comment saying briefly what it is for. this is also where you will put your name, date and project/lab name.

```c
/* this program does something!
*
*  name: dwight eisenhower
*  date: 19 DEC 2017
*  project: super hard project
*
*  additional things
*/
```

### Variable Declaration:
There should be a comment on each static variable like this

```c
// hit_counter counts the amount of hits an NPC has taken
int hit_counter;
```

### Functions:
Explain what each function does, what arguments it gets, what they are used for, etc.

### Names:
Names of global variables and functions sort of act like comments. They need to be clear and state what their intended purpose is. Local variables \(like those in functions\) on the other hand can be shorter since they are only to be used within it's one context. Limit the use of abbreviations and use underscores to separate words in a name. Use lowercase and reserve upper case for macros and enum constants.

### Indent/Brace Style:
Indentation must be constant and uniform. braces {} must be used for functions, required statements \(if, else, etc\), etc.

### Files:
Ensure you use the correct extensions. The first character of the file name should be a letter and lower-case letters. The remaining characters can be letters or numbers, but should remain lowercase. Use underscores for word splitting. i.e.: **npc\_ai.c**

---

## More Information

[https://www.gnu.org/prep/standards/html\_node/Writing-C.html](https://www.gnu.org/prep/standards/html_node/Writing-C.html)

---

|[Next Topic](/02_Variables/02_Variable_names.md)|
|---|
