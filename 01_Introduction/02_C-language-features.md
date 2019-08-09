<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

# C Language Features

### Program Control Flow

C is a procedural programming language; meaning it follows a series of well-structured steps and procedures; written by the programmer. Therefore the program enters at the top and exits at the bottom. Along it's path of travel, the execution may enter one control structure \(via function for example\), exit and enter another control structure; all line by line. This makes it easy to build programs. C is also free format, meaning that several statements can share a single line.

```c
printf("Integer?\n"); scanf("%d", &i); i = i / 10;

// vs

printf("Integer?\n");
scanf("%d", &i);
i = i / 10;
```

### Functions

A function is a procedure of sorts which performs some type of operation and generally returns a value. **main\(\)** is customarily the first function. Any function referenced by main\(\) must be declared or listed before main\(\). main\(\) is only required in a hosted environment \(such as an operating system\).

```c
int main()
{
    int x = 0;
    return x;
}
```

### Types

Within C, Objects, functions, and expressions have a property called type, which determines the interpretation of the binary value stored in an object or evaluated by the expression.

The following are **some** of the C language types.  More will be identified as we continue our journey into programming.

#### Built-In

* **Integer \(int\) -** positive or negative integer
  * basic signed integer type. At least in the \[-32767, +32767\] range, thus at least 16 bits in size.
* **Floating-point \(float\) -** single precision decimal number
  * On most systems this is the IEE 754 single-precision binary floating-point format
* **Double precision \(double\) -** double float precision
  * On most systems this is the IEE 754 double-precision binary floating-point format.
* **Character \(char\) -** stores a single character. This is the smallest addressable unit of the machine that can contain basic character set. It is an integer type. Actual type can be either signed or unsigned depending on the implementation. 

#### Derived

* **Arrays -** a collection of values, all of the same type, stored contiguously in memory
* **Character strings -** an array of characters \(char\)
* **Structures -** a grouped list of variables referenced by one name and one memory pointer

```c
struct birthday {
    char name[20];
    int day;
    int month;
    int year;
}
```

---
<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/01_Introduction/03_C-specifics.md" > Continue to Next Topic </a>




