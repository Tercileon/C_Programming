<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

## UNDER DEVELOPMENT!!

---
# Address Arithmatic

## Topic objectives

* **Incrementing/ Decrementing/ Adding/ Subtracting Pointers**
* **Array Name Math**
* **Pointer vs Integers**
* **Pointers vs Relational Operators**




---

### Introductory Question: 

* How is it that 0x0002F320 + 2 == 0x0002F328? (Clue: previous topic)





---

``` 
int someNums[5] = { 0, 1, 2, 3, 4};  // int array of dimensions 5
int * someNums_ptr = someNums;   // Points at &someNums[0]
```

**Incrementing/ Decrementing/ Adding/ Subtracting Pointers** - Pointer variables may be increased and decreased to modify a memory address.

```
// ptr++ increments ptr to point to the next element 
someNums_ptr++;	// Points to the next index, &someNums[1]
// ptr += n increments ptr to the address of the nth object past ptr
someNums_ptr += 2;	// Pointer now increased to &someNums[3]
// ptr-– decrements ptr to point at the previous element
someNums_ptr--;	// Point now decreased to &someNums[2]
// ptr -= n decrements ptr to the address of the nth previous object
someNums_ptr -= 2;	// Pointer now decreased to &someNums[0]
```

---

```
int someNums[5] = { 0, 1, 2, 3, 4 };  // int array of dimension 5
int * someNums_ptr = someNums;  //Points at &someNums[0]
```

**Array Name Math** - Array names are converted to pointers
 * An arrays name is not a variable<sup>1</sup>
 * You may not change an array's pointer
 * You may, reference an array's pointer

```
//array is equivalant to &
array[0]
*someNums = 1;   // someNums[0] == 1
//array[i] is equivalent to *(array + i)

*(someNums + 4) = 2;    // someNums[4] == 2
// &array[i] is equivalent to (array + i)
someNums_ptr = someNums + 3;   // Pointer now set to &someNums[3]

```

| <sup>1</sup>The terms and conditions of this statemen are subject to change at any time |
|-----------------------------------------------------------------------------------------|
 
---

**Pointers vs Integers** - Pointers and integers are not interchangeable
  * Memory addresses are essentially large integers...
  * ...*but* pointers do not have the same data type
  * A pointer's type depends on what it points to
  * Type casting is allowed but *dangerous*
  
  |int * someNums_ptr = (int * )0x1234;   //BAD!!1!11!!!eleven!! |
  |--------------------------------------------------------------|
  
  * Zero (0) is the sole exception to this rule.
  
  ```
  /* The constant zero (0) may be assigned to a pointer */
int * someNums_ptr = 0;	// More or less equivalent to NULL
/* A pointer may be compared with the constant zero */
if (someNums_ptr != 0)		// If someNums_ptr is not NULL…
{
    // …then safely utilize it knowing it points to a valid object
}

```

**Note:** 1 - Type casting integers to pointers is a dangerous practice in C programming.  Arbitrary pointer casting allows you to point anywhere in memory.

**Note:** 2 - As discussed earlier, NULL is a MACRO constant that is type cast as some variant of 0. ((char * )0) and (( void * )0) are both common.

---

```
int someNums[5] = { 0, 1, 2, 3, 4 };  // int array of dimension 5
int  * someNums_ptr = someNums;       // Points at &someNums[0]
int * moreNums_ptr = (someNums + 2);  // Points at &someNums[2]
```

**Pointers vs Relational Operators**
  * Memory addresses may be compared against each other if ...
  * ...they are of the same data type
  * These comparisons are essentially meaningless unless both addresses point to the same array
  
  ```
  if (moreNums_ptr > someNums_ptr)
  {
      Printf("%d comes after %d \n", *moreNums_ptr, *someNums_ptr);
  }
  ```
  
  ---
  
  **Upcoming Discussions**
  * Incrementing/Decrementing/Adding/Subjecting Pointers
  * Array Name Math
  * Pointers vs Integers
  * Pointers vs Relational Operators
    
  ---
  
  **Demonstration Lab**
  "The Little Integer That Could"
  ```
  int * find_smallest_natural_number(int * intArray_ptr, int arraySize);
  ```
 * Return value - int pointer to the smallest natural number found in the array at intArray_ptr
 * Parameters - 
   * intArray_ptr - Pointer to an array of integers...
   * arraySize - ...of this dimension
 * Purpose - find the smallest natural number
 * Requirements
   * Return NULL **if** intArray_ptr is NULL
   * Return NULL **if** arraySize is unrealistic
   
 **Note** - For the purposes of this lab, “natural number” is defined as a whole, positive integer greater than zero [1,2,3,4…]
 
 ---
 **Continue to Performance Lab - String Splitter**

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/11_Pointers_Arrays/performance_labs/PerLab_string_Spltter.md"> Continue to String Splitter Lab </a>
