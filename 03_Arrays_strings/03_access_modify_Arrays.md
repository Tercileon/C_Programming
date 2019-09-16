|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Access & Modify Arrays

Accessing a single element of an array is referenced by index number. an integer expression may be used as an index to reference the element of an array. Indexing starts at 0. So the index 0 refers to element 1. 

```c
<variable name> [<index>]
```

### Example:

#### Array:

```c
int ages [5] = {25, 30, 19, 55, 92};
```

#### Accessing:

```c
printf("%d\n", ages[0]);
// prints out 25

printf("%d\n", ages[4]);
// prints out 92
```

**NOTE declaration vs reference. trying to access a element of an array via declaration (int someArray[5]) is not the same thing as referencing an array element (someArray[5]).**

---

## Modifying Arrays

```c
int computerScienceCourses [] = {1003, 1023, 1033, 1063, 1073};  // declares and inits array
int myCourse = computerScienceCourses [1]; // sets myCourse to 1023
```

```c
float studentGPAs [] = {2.7, 3.1, 2.9, 4, 3.9, 2.89, 3.55};
studentGPAs [1+2] = 3.91; // sets index 3 to value 3.91
```

```c
int i = 1; // Iterating variable
char cardinalDirections [4] = {0}; // zeroize array
cardinalDirections [0] = 78;       // Sets index 0 to N
cardinalDirections [i] = 83;       // Sets index 1 to S because i = 1
cardinalDirections [i+i] = 'E';    // Sets index 2 to 69
cardinalDirections [i+2] = 'W';    // Sets index 3 to 87
```

```c
char catchPharse [10] = {76, 101, 103, 101, 111, 46, 46, 46, 46};
catchPharse [5] = 100;    // Sets index 5 to 'd'
```

There are much more efficient ways to iterate through an array such as loops (while and for loops). This is covered in the 'flow control' chapter.

---

## Demonstration Lab 1

#### Tasks

* **Declare and initialize the following arrays:**

| **data type** | **name** | **dimension** | **initialize to:** |
| :--- | :--- | :--- | :--- |
| int | myIntArray | 10 | 100 (every index) |
| float | myFloatArray | 5 | 1-5 |
| char | myCharArray | 256 | 0 (every index) |

* #### **print the 3rd element of each array above using:**

| **array data type** | **syntax** |
| :--- | :--- |
| int | printf("%d\n", myIntArray[2]); |
| float | printf("%f\n", myFloatArray[2]); |
| char | printf("%c\n", myCharArray[2]); |

* **Perform the following manipulations on your arrays:**

  * **myIntArray** - set all elements to x while:
    * y = index \#
    * x = \(y+1\) \* 10
  * **myFloatArray** - set all elements to x while:
    * y = current value of a given index
    * x = y \* 1.1
  * **myCharArray** - fill in the beginning elements with your last name starting with index 0
* **Print the third index of each array again**

---

**Complete Performace Lab 3**

---

|[Performance Lab 3](/03_Arrays_strings/performance_labs/lab3/lab3.md)|
|---|
