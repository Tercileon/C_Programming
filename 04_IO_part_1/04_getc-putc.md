|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Basic I/O: getc\(\) & putc\(\)

## getc\(\)

```c
int getc(FILE, *stream);
```

* **Purpose:** Gets an unsigned char from a stream
* **Arguments:** Stream Pointer
* **Return Value:** This function returns the character read as an unsigned char cast to an int or EOF on end of file or error.
* **Syntax Example:**

```c
int userInput = 0;                    // Will store input
printf("Enter a character: ");        // Prompts user
userInput = getc(stdin);              // Stores stream input
/* getchar() == getc(stdin) */
```

## putc\(\)

```c
int putc(int char, FILE *stream);
```

* **Purpose:** Writes an unsigned char to a stream
* **Arguments:**
  * Integer value of character to write
  * Stream pointer to write it to
* **Return Value:** This function returns the character read as an unsigned char cast to an int or EOF on end of file or error. 
* **Syntax Example:**

```c
printf("Your character was: ");        // Prefaces output
putc(userInput, stdout);               // Writes to stdout
```

# Demonstration Lab

## Basic I/O b

* Input a single character then write that character to stdout

```c
int userInput = 0;                // Will store input
printf("Enter a character: ");    // Prompts user
userInput = getc(stdin);          // Stores stream input
printf("Your character was : ");  // Prefaces output
putc(userInput, stdout);          // Writes to stdout
```

### Discuss the output of...

* Enter a character: **7**
* Enter a character: **m**
* Enter a character: **54**
* Enter a character: **JasV**

## Complete Performance Lab 6

---

|[Performance Lab 6](/04_IO_part_1/performance_labs/lab6/lab6.md)|
|---|
