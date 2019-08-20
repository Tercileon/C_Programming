|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Strings

Strings are merely an array of characters that are terminated by the nul character ('\0'). The array must be at least one byte longer than the string stored within. The length of the string is the number of characters excluding the string terminator ('\0').

**Why must the array be one byte longer than the string?**

> Two strings walk into a bar. The bartender says, "So what'll it be?"
> The first string says, "I think I'll have a beer quag fulk boorg jdk&CJfdLk jk3s d$\#$gasdf^u r89nvy~~owmc64^Dzx.xvcu"
> "Please excuse my friend," the second string says, "He isn't nul-terminated!"

## Declaring Strings

### Declare an Array

```c
char <variable name> [<dimension>];
```

#### Examples:

* Char array named "instructorName" with a dimension of 5

```c
char instructorName [5];
```

* Char array named "inputBuffer" with a dimension of 256

```c
char inputBuffer [256];
```

* Char array named "studentLastName" with a dimension of 32

```c
char studentLastName [32];
```

**NOTE: dimension MUST be established during declaration**

---

## Initializing Strings

### Initialize a String

```c
char <variable name> [<dimension>] = {<data>, <data>, '\0'};
```

#### Example 1:

```c
char instructorName [] = {'W', 'i', 'l', 'l', '\0'};
```

**NOTE: Terminating a string with the MACRO "NULL" may work, but is not recommended because it is meant for pointers.**

![](/assets/string1.png)

#### Example 2:

```c
char <variable name> [<dimension>] = {<data>, <data>, 0};
```

```c
char inputBuffer [256] = {0};
```

![](/assets/string2.png)

The example above declares and initializes an empty array. It also ensures the string is nul-terminated.

#### Example 3:

```c
char <variable name> [<dimension>] = {<data>, <data>, 0};
```

```c
char studentLastName [32] = {89, 111, 117, 0};
```

![](/assets/string3.png)

The above example declares and inits an array of dimension 32 that begins with the string "You".

## Demonstration Lab 2

---

* Declare and zeroize a char array with sufficient dimension to store your favorite word and the nul character

```c
char myFavWord [9] = {0};
```

* Assign your favorite word to the leading elements of that array

```c
myFavWord [0] = 84;
myFavWord [1] = 115;
myFavWord [2] = 117;
myFavWord [3] = 110;
myFavWord [4] = 100;
myFavWord [5] = 101;
myFavWord [6] = 114;
myFavWord [7] = 101;
```

* Ensure your string is null-terminated by manually setting the last element to 0

```c
myFavWord [8] = 0;
```

* Print your null-terminated string

```c
printf("my favorite word is %s\n", myFavWord);
```

**NOTE: explicitly ensuring you have nul-terminated your string is a safe programming practice**

~~**EVIL:**~~ **Try replacing/removing/commenting all nul('\0') characters and print the string**

```c
char myFavWord [9] = {0}; // init a char array

myFavWord [0] = 84;  // t
myFavWord [1] = 115; // s
myFavWord [2] = 117; // u
myFavWord [3] = 110; // n
myFavWord [4] = 100; // d
myFavWord [5] = 101; // e
myFavWord [6] = 114; // r
myFavWord [7] = 101; // e

myFavWord [8] = 0; // \0

printf("My favorite word is %s!\n", myFavWord);

// Will output..
// my favorite word is tsundere!
//tsundere refers to a person that starts off cold and non receptive but then gradually warms up to their company. Often an archetype in many japanese animations.
```

---
## Complete Performance Lab 4:

|[Performance Lab 4](/03_Arrays_strings/performance_labs/lab4/lab4.md)|
|---|

