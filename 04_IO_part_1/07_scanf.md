<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

# Formatted I/O

---

# scanf\(\)

```c
int scanf(const char *format, argument-1, argument-2...);
```

* **Purpose:** Reach characters from stdin and saves converted values into argument-1 ... argument-n
* **Arguments:** Format string, storage locations
* **Return Value:** Number of successful input items, EOF on error or failure
* **Special:**
  * Conversion specifications translate input
  * Each conversion specifier is preceded by a %
  * Specify field width \(maximum number of character to be read and converted\) or skip input with \*

### EVIL: scanf\(\) is unsafe! Use caution!

scanf\(\) has an unsafe interface for strings. It has no way of knowing that your variable parameter is an array large enough to hold the input plus a terminating nul character. Scanf will continue to read character from stdin and store them in memory well past the end of your char array, causing a buffer overrun vulnerability.

## Conversion Characters

Conversion Characters correspond to output \(printf\) format strings except for the following differences:

| **Specifier** | **scanf\(\) use** |
| :--- | :--- |
| i | Reads decimal, octal and hexadecimal integers |
| f | Converts input for assignment to a variable of type "float" |
| lf | Converts input for assignment to a variable of type "double" |
| c | Reads the next character which may be a space |
| s | Reads a string and appends the string terminator '\0'. Alternatively, input may be matched against a "scanlist" |

## Basic Syntax Examples

```c
//////////////////////////////////
///// BASIC SCANF STATEMENTS /////
//////////////////////////////////

scanf("%d", &theAnswer);            // Reads an integer from stdin
scanf("%f", &pi);                   // Reads a float from stdin
scanf("%lf", &posSqrtTwo);          // Reads a double from stdin
scanf("%c", &answerNum1);           // Reads a char from stdin

 ///// BASIC SCANF STRING INPUT /////
 char nickname[20] = {0};
 scanf("%s", nickName);             // Dangerously reads string from stdin
 scanf("%19s", nickname);           // Safer string read from stdin
```

**NOTE:** When using field width on scanf string input, leave room for the nul terminator

## Conversion Character Explanation

```c
int scanf(const char *format, argument-1, argument-2...);
```

```c
///// INITIALIZATION /////
int num = 0;
char letter = 0;

///// SCANF STATEMENT /////
scanf("%d%c", &num, &letter);

// %d%c  |  is the format
// &num, &letter  |  are the arguments
// &num == %d
// &letter == %c
```

#### NOTE: Be aware that characters may be left behind in stdin

### Explanation 2

```c
////////// INITIALIZATION //////////
int hours = 0;
int minutes = 0;
int seconds = 0;

////////// SCANF STATEMENTS //////////
scanf("%d%*c%d%*c%d", &hours, &minutes, &seconds);

// First %d == &hours
// Second %d == &minutes
// Third %d == &seconds
```

**NOTE:** The %\*c conversion specification tells scanf to read char\(s\) in between integers but doesn't assign it to a variable.

## Syntax Examples:

```c
/////////////////////////////////////////
/////////// SCANF STATEMENTS ////////////
/////////////////////////////////////////

scanf(“%d,%d”, &num1, &num2);    // Uses comma as delimiter
scanf(“%3f”, &GPA);              // Only takes three inputs e.g., 3.4
scanf(“*%lf”, &posSqrtTwo);      // Waits for asterisk before reading
scanf(“%[abcd]c”, &ansNum1);     // Will only read an a, b, c, or d
scanf(“%[A-Z]c”, &capsChar);     // Will only read a capital letter
scanf(“%[A-z]c”, &rngOfChar);    // Only chars of decimal value 65–122
scanf(“%32[01]s”, binaryStr);    // Stops reading at first non 0 or 1 
scanf(“%64[^e\n]s”, Gadsby);     // Stops reading at first e or newline
```

**NOTE**: Any field width specification also stops scanf\(\) from reading any more input regardless of any matched characters.

# Demonstration Lab 4

## Formatted I/O

**Formatted Input \(Strings\)**

* Read a string into a char array
* Specify a field-width to protect against buffer overflow
* Ensure the field-width leaves room for the nul-terminator 
* Stop reading at the first capital letter or new line

# Demonstration Lab 5

## Formatted I/O \(scanf\)

**Formatted Input \(Numbers\)**

* Read three ints, representing the date, from one line
* Format the input so the integers are separated by a dash \(-\) as &lt;mm&gt;-&lt;dd&gt;-&lt;yyyy&gt;
* Output the results as a date with leading zeros &lt;mm&gt;/&lt;dd&gt;/&lt;yyyy&gt;
* Specify the field width of the output appropriately

---

## Complete Performance Lab 8

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/04_IO_part_1/performance_labs/lab8/lab8.md" rel="PERFORMANCE LAB 8"> PERFORMANCE LAB 8 </a>

