|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

## getchar\(\)

```c
int getchar(void)
```

* **Purpose:** Gets an unsigned char from stdin
* **Arguments:** None
* **Return Value:** This function returns the character read as an unsigned char cast to an int or EOF on end of file or error. 
* **Syntax Example:**

```c
int userInput = 0;                    // Will store input
printf("Enter a character: ");        // Prompts user
userInput = getchar();                // Stores user input into userInput
```

## putchar\(\)

```c
int putchar(int char)
```

* **Purpose:** Writes an unsigned char to stdout
* **Arguments:** Integer value of character to write
* **Return Value:** This function returns the character read as an unsigned char cast to an int or EOF on end of file or error.
* **Syntax Example:**

```c
printf("Your character was" );        // Prefaces output
putchar(userInput);                   // Prints output
```

# Demonstration Lab

## Basic I/O

* Input a single character then print the character
* **Syntax Example:**

```c
int userInput = 0;                // Will store user input
printf("Enter a character: ");    // Prompts user
userInput = getchar();            // Stores user input
printf("Your character was: ");   // Prefaces output
putchar(userInput);               // Prints output
```

### Discuss the output of...

* Enter a character: **7**
* Enter a character: **m**
* Enter a character: **54**
* Enter a character: **JasV**

---
# Complete Performance Lab 5

|[Performance Lab 5](/04_IO_part_1/performance_labs/lab5/lab5.md)|
|---|
