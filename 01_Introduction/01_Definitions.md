|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Definitions

Below are some general programming terms, knowledge base and definitions every developer needs to know. We will be touching on all of these topics, in greater detail, as we advance through the course. 

### Language Level

* **Low Level**
  * Provides little to no abstraction from hardware
  * Concentrates on what's going on in the machine hardware
  * Direct memory management
* **High Level**
  * Strong abstraction form hardware
  * Easier to understand, comparatively
  * Concentrates on the program

Looking at this chart C is considered to be a low level/mid level programming language. C is special in the sense that it's generally the backbone for many other languages. C is built mostly with C using a handful of low level assembly interfaces. It's still human readable and the abstraction is far enough from assembly. But due to C's direct interface with memory and other hardware, it remains a low-level programming language as well. 

![](/assets/image2.png)

### Statement

Statements are snippets of code that do things. They are human readable text that a compiler will turn into executable statements.

```c
printf("Hello World"); //Expression Statement

//or

if (something)
{
    do something;
}
```

### Block

A block is a group of executable statements.

```c
if (something)
{
    if (somethingElse)
    {
        do something;
    }
}
else if (something1)
{
    do something;
}
else
{
    do nothing;
}
```

### Function

A function is a block of code written to perform a specific task.

```c
int someFunction()
{
    printf("yay");

    return 0;
}
```

### Whitespace

Whitespace are tabs, spaces and newline/End of Line \(EOL\) characters that separate text characters in source code. In other words, any character or series of whitespace characters that represent horizontal or vertical space.

**Whitespace Examples:**

* ' ' \(0x20\) space \(SPC\)
* '\t' \(0x09\) horizontal tab \(TAB\)
* '\n' \(0x0a\) newline \(LF\)
* '\v' \(0x0b\) vertical tab \(VT\)
* '\f' \(0x0c\) feed \(FF\)
* '\r' \(0x0d\) carriage return \(CR\)

### Scope

Scope is the level at which a piece of data or function is visible.

```c
// Using Pseudocode

//GLOBAL SCOPE

mainFunction()
{
    // BLOCK SCOPE
    anotherFunction()
    {
        // BLOCK SCOPE
    }
}
```

### Integrated Development Environment \(IDE\)

IDEs are software applications that provide facilities to computer programmers for software development. They normally consist of a source code editor, build automation tools and a debugger. There are also text editors, which we will be using a ton in this course. These are bare bone editors with the added ability to install addons for additional functionality. The only IDE we will be using is **Visual Studio** (or CLion). Some text editors we will be using are **Atom, Sublime Text, Visual Studio Code, Nano, Vi/Vim.**

### Pseudocode

Pseudocode is simply an informal and high-level description of an operating principle or a computer program or algorithm. You would generally use structural conventions of the intended language. Overall, it's intended to be very human readable.

---

|[Next Topic](/01_Introduction/02_C-language-features.md)|
|---|
