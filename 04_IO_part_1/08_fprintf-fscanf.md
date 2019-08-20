|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Formatted I/O

---

# fprintf\(\)

```c
int fprintf(FILE *stream, const char *format, ...)
```

* **Purpose:** Writes output to a stream under control of the format string
* **Arguments:** stream, output, format string
* **Return Value:** Number of characters printed
* **Special:**
  * Conversion specifications translate printed variables
  * Each conversion specifier is introduced by the % character
  * You may include special formatting flags, set field width, and precision

### Conversion Character Examples:

```c
//////// VARIABLE INITIALIZATION ////////
int theAnswer = 42;            // Life, universe, & everything
float pi = 3.141592;            // Pi
double posSqrtTwo = 1.41421356237;    // Positive square root of 2
char questionMark = 63;        // A question mark
char *nickName[] = {“Gilligan\0”};    // A nick name

//////// FPRINTF STATEMENTS /////////////
fprintf(stdout, “The answer is %d. \n”, theAnswer);
fprintf(stdout, “Pi is approximately equal to %f. \n”, pi);
fprintf(stdout, “The square root of 2 is %f. \n”, posSqrtTwo);
fprintf(stdout, “Who is %s%c \n”, nickName, questionMark);
fprintf(stdout, “%s is. \n”, nickname);
```

## fscanf\(\)

```c
int fscanf(FILE *stream, const char *format, ...)
```

* **Purpose:** Reach characters from a stream and saves converted values into argument-1 ....argument-n
* **Arguments:** Stream, format string, storage locations
* **Return Values:** Number of successful input items, EOF on error or failure
* **Special:**
  * Conversion specifications translate input
  * Each conversion specifier is preceded by a % character
  * Specify field-width \(maximum number of characters to be read and converted\) or skip input with \*

#### EVIL: fscanf\(\) is unsafe! Use caution!

scanf\(\) has an unsafe interface for strings. It has no way of knowing that your variable parameter is an array large enough to hold the input plus a terminating NUL character. Scanf will continue to read characters from stdin and store them in memory well past the end of your char array, causing a buffer overrun vulnerability. Safety precautions can be taken with field width specifiers but you still need to ensure the specified width fits within the char array while also leaving room for the terminating NUL. The return value for scanf should also be tested for the number of fields it matched \(to include testing for 0 matches\) in addition to testing for an EOF if an I/O error occurred. We’ll discuss a better solution for inputting strings later.

scanf\(\) is \(relatively\) more safe when reading numbers but not very good at handling errors in input. As a result, it is usually a good idea to use something like fgets\(\) to read input.

### Basic Syntax Examples:

```c
/////////////////////////////////////////
//////// BASIC FSCANF STATEMENTS ////////
/////////////////////////////////////////
fscanf(stdin, “%d”, &theAnswer);    // Reads an integer from stdin
fscanf(stdin, “%f”, &pi);        // Reads a float from stdin
fscanf(stdin, “%lf”, &posSqrtTwo);    // Reads a double from stdin
fscanf(stdin, “%c”, &answerNum1);     // Reads a character from stdin

/////// BASIC SCANF STRING INPUT ////////
char nickName[20] = {0};
fscanf(stdin, “%s”, nickName);    // Still dangerous
fscanf(stdin, “%19s”, nickName);    // Safer string read from stdin
```

#### NOTE: When using field-width on fscanf string input, leave room for the *nul terminator*

---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/05_Operators_expressions/README.md" rel="Continue to Next Topic"> Continue to Next Topic </a>

