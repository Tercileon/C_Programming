|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Formatted I/O

---

# printf\(\)

```c
int printf(const char *format, expression-1, expression-2...);
```

* **Purpose:** Writes output to stdout under control of the format string
* **Arguments:** Output, format string
* **Return Value:** Number of characters printed
* **Special:**
  * Conversion specifications translate printed variables
  * Each conversion specifier is introduced by the % character
  * You may include special formatting flags, set field width, and precision

## Conversion Characters:

| **Specifier** | **Argument Type** | **Output Format** |
| :--- | :--- | :--- |
| d, i | int | Decimal |
| f | float/double | Floating-point number, decimal |
| c | char/int | Single character |
| s | string | nul-terminated string |
| p | pointer | Address, hexadecimal |
| % | none | the character % |
| x | unsigned int | Hexadecimal with a,b,c,d,e,f |
| X | unsigned int | Hexadecimal with A, B, C, D, E, F |

#### NOTE: The table is not all-inclusive

The specifiers for printf\(\) are highly documented in official C Programming publications and on the internet

## Conversion Character Examples:

```c
//////// Variable Initialization ////////
int theAnswer = 54;                      // Life, universe, and everything
float pi = 3.141592;                     // Pi
double posSqrtTwo = 1.41421356237;       // Pos square root of 2
char questionMark = 63;                  // A question mark
char *nickName[] = {"Gilligan\0"};      // A nickname

//////// PRINTF STATEMENTS ////////
printf("The answer is %d. \n", theAnswer);
printf("Pi is approx equal to %f. \n", pi);
printf("The positive square root of 2 is %f. \n", posSqrtTwo);
printf("Who is %s%c \n", *nickName, questionMark);
printf("%s is. \n", *nickName);

//////// EXPECTED OUTPUT ////////
The answer is 54.
Pi is approx equal to 3.141592.
The positive square root of 2 is 1.414214.
Who is Gilligan?
Gilligan is.
```

Some compilers may round the length of a double, by default, to 6 decimal places \(same as float\). We can debug this in Visual Studio or another IDE and see that the value contained in posSqrtTwo is longer than what is compiled. We will cover this.

## Conversion Character Explanation:

```c
int printf(const char *format, expression-1, expression-2...)
```

```c
//////// INITIALIZATION ////////
int num = 3;

//////// PRINTF STATEMENT ////////
printf("The square of %d is %d. \n", num, num * num);

//////// EXPECTED OUTPUT ////////
The square of 3 is 9
```

#### How does that work?

```c
printf("The square of %d is %d. \n", num, num * num);
```

**num,** num \* num

* The **bolded** expression is the first %d
* The unbolded expression is the second %d. 

#### NOTE: Ensure the expressions do not exceed the conversion characters

If there are too many expressions, the extra ones will be ignored. If there are not enough expressions, C will generate strange numbers for the missing expressions.

## Precision \(numbers\):

%\[flags\]\[field width\]**\[.precision\]specifier**

```c
float someNum = 12.3456;                    // Var used as comparison

printf("%f", someNum);                      // 12.345600
printf("%.0f", someNum);                    // 12
printf("%.2f", someNum);                    // 12.35
printf("%.3f", someNum);                    // 12.346
printf("%.6f", someNum);                    // 12.345600
printf("%.20f", someNum);                   // 12.34560012817382800000*
```

#### NOTE: The default precision for floating-point numbers is 6

##### \* Your specific output my differ considering printf has exceeded the bounds of your float and is printing garbage

The special characters %d are called the **integer conversion specification**. When printf encounters a %d, it prints the value of the next expression in the list following the format string. This is calle dhte **parameter list.**

## Precision \(strings\):

%\[flags\]\[field width\]**\[.precision\]specifier**

```c
char myStr[] = {"Hello world!"};            // Nul terminated string

printf("%s", myStr);                        // Hello world!
printf("%.12s", myStr);                     // Hello world!
printf("%.11s", myStr);                     // Hello world
printf("%.5s", myStr);                      // Hello
printf("%.0s", myStr);                      //
printf("%.1000s", myStr);                   // Hello world!
```

#### NOTE: This "myStr" is dimension 13 and is nul-terminated

## Field Width \(numbers\):

%\[flags\]**\[field width\]**\[.precision\]**specifier**

```c
float someNum = 12.3456;                    // Var used as comparison

printf("%f", someNum);                     // 12.345600
printf("%0f", someNum);                    // 12.345600
printf("%2f", someNum);                    // 12.345600
printf("%4f", someNum);                    // 12.346000
printf("%8f", someNum);                    // 12.345600
printf("%16f", someNum);                   //         12.345600                (8 positions)
printf("%25f", someNum);                   //                  12.345600       (17 positions)
```

## Field Width \(strings\):

%\[flags\]**\[field width\]**\[.precision\]**specifier**

```c
char myStr[] = {"Hello world!"};            // Nul terminated string

printf("%s", myStr);                        // Hello world!
printf("%0s", myStr);                       // Hello world!
printf("%2s", myStr);                       // Hello world!
printf("%4s", myStr);                       // Hello world!
printf("%8s", myStr);                       // Hello world!
printf("%16s", myStr);                      //      Hello World!            (5 positions)
printf("%26s", myStr);                      //                Hello world!  (15 positions)
```

## Flags

**%\[flags\]**\[field width\]\[.precision\]**specifier**

#### Flags consist of one or more of the following characters:

* **+**
  * Prefixed to positive numbers
* **' ' \(space\)**
  * Prefixed to positive numbers
* **\_**
  * Output is left-justified within field width
* **0**
  * Field is filled with leading zeros
* **\#**
  * Alternate conversion rules

```c
float someNum = 12.3456;                    // Var used as comparison

printf("%f", someNum);                     // 12.345600
printf("%f", someNum * -1.0);              // -12.345600
printf("%+f", someNum);                    // +12.345600
printf("%+f", someNum * -1.0);             // -12.346000
printf("% f", someNum);                    //  12.345600
printf("% f", someNum * -1.0);             // -12.345600    
printf("%-f", someNum);                    // 12.345600  
printf("%-f", someNum * -1.0);             // -12.345600  
printf("%0f", someNum);                    // 12.345600  
printf("%016f", someNum);                  // 000000012.345600
```

## Flags, Field Width, and Precision Classroom Exercise

**%\[flags\]\[field width\]\[.precision\]specifier**

```c
//////////////////////////////////////
//// WRITE OUT THE EXPECTED OUTPUT////
//////////////////////////////////////

printf("%f", 1.2);
printf("%+8.4f", -1.798);
printf("% 7.2f", 0.987654321);
printf("%-6.1f is yours", 13.37);
printf("Yours is %05.2f", 1.2345);
printf("%s", "Hello World!\0");
printf("%9.5s", "Hello world!\0");
printf("%016.11s", "Hello world!\0");
```

---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/04_IO_part_1/07_scanf.md" rel="Continue to Next Topic"> Continue to Next Topic </a>

