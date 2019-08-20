|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Arrays

An array is a set of consecutive memory locations used to store items of a specified data type. Each item in the array is an **element**. The number of elements in an array is called the **dimension** of the array. When refering to elements as indexs, numbering of the elements begins at **zero (0).** (More to come on accessing arrays)

![](/assets/array1.png)

## Declaring an Array

```c
<data type> <variable name> [<dimension>];
```

### Examples

* Integer array named "courseNumbers" with a dimension of 10

```c
int courseNumbers [10];
```

* Float array named "testScores" with a dimension of 7

```cpp
float testScores [7];
```

* Character array named "availableGrades" with a dimension of 4

```c
char availableGrades [4];
```

**NOTE: dimension MUST be established during declaration**

---

## Initializing Arrays

```c
<data type> <variable name> [<dimension>] = {<data>, <data>};
```

* **Example 1:** Explicit Dimension

```c
int courseNumbers [8] = {101, 102, 103, 110, 202, 203, 210, 211};
```

![](/assets/array2.png)

* **Example 2:** Implicit Dimension

```c
float testScores [] = {72.1, 83.5, 92, 100, 99.9, 82, 70.5};
```

![](/assets/array3.png)

* **Example 3:** Zeroize

```c
char availableGrades [4] = {0};
```

![](/assets/array4.png)

* **Example 3b:** Partial Zeroize

```c
char availableGrades [4] = {65, 66};
```

![](/assets/array4b.png)

---

## Array Practice 1

Fill in the blanks for the following arrays.

```c
// first
int computerScienceCourses [] = {1003, 1023, 1033, 1063, 1073};

// second
float studentGPAs [] = {2.7, 3.1, 2.9, 4, 3.9, 2.89, 3.55};

// third
char cardinalDirections [4] = {0};

// fourth
char catchPharse [10] = {76, 101, 103, 101, 111};
```

![](/assets/arrayBlank.png)

---

|[Next Topic](/03_Arrays_strings/03_access_modify_Arrays.md)|
|---|
