|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# String I/O

## ~~gets\(\)~~

```c
char *gets(char *str);
```

* **Purpose:** Reads a line from stdin into buffer str
* **Arguments:** Buffer str
* **Return Value:** s on success, NULL on error or EOF
* **Syntax Example:**

```c
#define _CRT_SECURE_NO_WARNINGS 1            // Disables warning
#include <stdio.h>                           // Standard IO header

int main(void)
{
    char inputBuffer[256] = {0};             // Will store string
    printf("Enter a string: ");              // Prompts user
    gets(inputBuffer);                       // Stores user string
    return 0;
}
```

### EVIL: gets\(\) is deprecated! DO NOT USE!

gets\(\) function is a common source of buffer overflow vulnerabilities and should never be used. Line 1 was put in place so that we could even compile this code. Visual Studio will not compile the program without disabling the warnings for deprecated functions.

## ~~gets\_s\(\)~~

```c
char *gets_s(char *str, rsize_t n);
```

* **Purpose:** Reads n-1 characters from stdin into buffer str
* **Arguments:** Buffer str, buffer size n
* **Return Value:** str on success, NULL on failure
* **Syntax Example:**

```c
char buffer[256];                // Will store string
printf("Enter a string: ");      // Prompts user
gets_s(buffer, sizeof(buffer));  // Stores user string
```

**NOTE:** gets\_s\(\) should ensure your array is nul-terminated

Though it is recommended you verify your string is nul-terminated. Don't get complacent.

### EVIL: gets\_s\(\) crashes if buffer is too small and requires careful use

---

## fgets\(\)

```c
char *fgets(char *str, int n, FILE *stream);
```

* **Purpose:** Reads n-1 characters from stream into buffer str
* **Arguments:** Buffer str, buffer size n, stream pointer
* **Return Value:** str on sucess, NULL on failure
* **Syntax Example:**

```c
char buff[256];                    // Will store string
printf("Enter a string: ");        // Prompts user
fgets(buff, sizeof(buff), stdin);  // Stores user string
```

**NOTE: gets\_s\(\) should ensure your array is nul-terminated**

Though it is recommended you verify your string is nul-terminated. Don't get complacent.

## puts\(\)

```c
int puts(const char *str);
```

* **Purpose:** Writes string str and a trailing \n to stdout
* **Arguments:** Buffer str
* **Return Value -** Positive \# on sucess or EOF on error
* **Syntax Example:**

```c
printf("Your string was: ");            // Prefaces output
puts(buff);                             // Writes to stdout
```

**NOTE:** Ensure C strings are nul-terminated**

## fputs\(\)

```c
int fputs(const char *str, FILE *stream);
```

* **Purpose:** Writes string str to stream
* **Arguments:** Buffer str, output stream
* **Return Value:** Positive \# on success or EOF on error
* **Syntax Example:**

```c
printf("Your string was: ");            // Prefaces output
fputs(buff, stdout);                    // Writes to stdout
```

**NOTE:** Ensure C strings are nul-terminated

## Demonstration Lab 3

## String I/O

* Read a string from stdin and then write that string to stdout:

```c
char buff[4];                        // Will store string
printf("Enter string: ");            // Prompts user
fgets(buff, sizeof(buff), stdin);    // Stores user string
printf("Your string was: ");         // Prefaces output
puts(buff);                          // Writes to stdout
```

### Discuss the output of...

* Enter a string: **123**
* Enter a string: **abcd**
* Enter a string: **31398**
* Enter a string: **Superman**

## Proceed to Performance Lab 7

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/04_IO_part_1/performance_labs/lab7/lab7.md" rel="PERFORMANCE LAB 7"> PERFORMANCE LAB 7 </a>

---

* Read a string from stdout and then write that string to stdout:

```c
char buff[4];                        // Will store string
printf("Enter a string: ");          // Prompts user string
fgets(buff, sizeof(buff), stdin);    // Stores user string
printf("Your string was: ");         // Prefaces output
fputs(buff, stdout);                 // Writes to stdout
```

* puts\(buff\) == fputs\(buff, stdout\)

### Discuss the output of...

* Enter a string: **123**
* Enter a string: **abcd**
* Enter a string: **31398**
* Enter a string: **Superman**

---

|[Next Topic](/04_IO_part_1/06_printf.md)|
|---|

