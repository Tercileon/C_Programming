<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

# I/O Functions

Believe it or not, this class has already been using standard functions, libraries and headers. Keep in mind, we will continue to travel mostly blind until we reach **Chapter 8: Functions.**

Functions are segments of code that perform a specific task. These tasks can be called and repeated whenever. Functions break large computing tasks into smaller ones. Standard functions are grouped, according to purpose, into libraries \(e.g., C Standard Input and Output Library\). Libraries are referenced through header files \(e.g., <stdio.h>\). 

## Example Functions

### Some functions take input, aka arguments

#### -printf\(\)

### Some functions do not require arguments

#### -getchar\(\)

### Some functions give output, aka return value

#### -putchar\(\)

### Some functions have no return value

#### -exit\(\)

## Function Syntax

```c
<return type> <function name> (<arg type> <argument>, ...)
```

### Example 1 - printf\(\)

```c
int printf(const char *format, ...)
```

### Example 2 - getchar\(\)

```c
int getchar(void)
```

### Example 3 - putchar\(\)

```c
int putchar(int c)
```

### Example 4 - exit\(\)

```c
void exit(int status)
```

**NOTE:** Some functions have multiple implementations

---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/04_IO_part_1/03_getchar-putchar.md" rel="Continue to Next Topic"> Continue to Next Topic </a>

