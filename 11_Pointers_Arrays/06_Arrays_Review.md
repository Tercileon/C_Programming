<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>
|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Arrays Review

# UNDER CONSTRUCTION
---

**Pointers & Arrays** are closely related in C programming
Arrays are guaranteed to be stored in *consecutive memory locations*
Since the elements of an array are stored in *consecutive memory locations,* they can be referenced using consecutive memory addresses
```
int someList[] = { 0xFEEDFACE, 0xC001CODE, 0xCAFEF00D, 0xFACEB00C };
int indexNum = 0;     // Used to reference an index
int * someList_ptr = NULL;

someList[indexNum];   // 0xFEEDFACE
someList_ptr = &someList[0];  // Assign the address of array index 0
someList_ptr == someList;   // Array name == array memory address
*someList_ptr == someList[0]; // 0xFEEDFACE
*someList_ptr == *someList;   // 0xFEEDFACE
```
The above code are examples of different ways to access and/or modify elements of an array.  it is expected that you already have an inherent understanding of certain concepts such as the fact that an array name, unless modified, is actually a pointer to the first index.

---
There is more than one way to access an element in an array:
* Direct reference (e.g., someList[0])
* Dereference a pointer (e.g., *someList_ptr)
* Dereference pointer math (e.g., *(someList + 2))… AKA Address Arithmetic (e.g., someList_ptr += 2)

```
//Example code will be executed per line and displayed in memory//
int someList[] = { 0xFEEDFACE, 0xC001C0DE, 0xCAFEF00D, 0xFACEB00C };
someList[0] = 0x8BADF00D;		// Normal
int * someList_ptr = &someList[1];	// By pointer referenc...
* someList_ptr = 0xC0DEDEAD;		// ...and then dereferencing it
* (someList + 2) = 0x1BADD00D;		// Array name pointer math…
someList_ptr += 2;			// ...AKA Address arithmetic
* someList_ptr = 0xDEADBEEF;		// Dereference a pointer
```
|**At definition, an array name is a pointer to the first index**|
|------------------------------------------------------------|

* The above code is the combined from the next eight examples.  Prior to reviewing this code, complete with memory visualization, review this combined code to determine what happens and how it happens.  
* The banner at the bottom says “at definition” because an array name can be modified to point at another memory address.  
* When an array is first defined, the name of the array acts as a pointer variable. This pointer variable points to the first element (index 0) of the array.  It can be dereferenced, incremented or decremented.  This pointer is guaranteed to *always* point to the first index (as we will explore during the “Address Arithmetic” section).

---
### Stepping through the code  (shown above):
The first line was a comment so we’ll take this opportunity to setup our memory visualization.  As before, the 0xCC hex values represent uninitialized memory values in Visual Studio’s debug mode.  The notes in the grey box off to the represent are interpretations of the memory address(es) they’re lined up with, not the values found within.

---
| **Example code will be executed per line and displayed in memory** |
|----------------------------------------------------------------------|
![](/assets/Arrays_Rev_1.png)

The first line was a comment, so we’ll take this opportunity to setup our memory visualization.  
As before, the **0xCC** hex values represent *Uninitialized* memory values in Visual Studio’s debug mode.  The notes in the grey box off to the represent are interpretations of the memory address(es) they’re lined up with, not the values found within.

Note: Four different methods will be used to modify the elements of the someList integer array in order to showcase some new methods of utilizing pointers and pointer operators used to access/modify arrays.

**Easter Egg**: The first memory address (0x0002F2F4) is a very subtle reference to *Too Fast, Too Furious 4*.

---

| **int someList[] = { 0xFEEDFACE, 0xC001C0DE, 0xCAFEF00D, 0xFACEB00C };** |
|----------------------------------------------------------------------|
![](/assets/Arrays_Rev_2.png)

This line of code defines an integer array of dimension 4.  
Each element of the array has been initialized with a hexadecimal value that should fill the memory space, and be easily recognizable (because they are hexspeak).  (https://en.wikipedia.org/wiki/Hexspeak)  

The notes off to the side indicate that each of the memory addresses are equivalent to *&someList[]* (as appropriate).  
For instance, *&someList[0]* is equivalent to **0x0002F320c**.

---

| **someList[0] = 0x8BADF00D;** |
|----------------------------------------------------------------------|
![](/assets/Arrays_Rev_3.png)

The above statement assigns the hex value **0x8BADF00D** to the first element (index 0) of the someList int array.  

The note off to the sde indicates tha the memory address **0x0002F320** is equivalent to *&&someList[0]*

---

| **int * someList_ptr = &someList[1];** |
|----------------------------------------------------------------------|
![](/assets/Arrays_Rev_4.png)

**1.** someList_ptr is a pointer variable as indicated by the dereference operator (*) utilized in its definition. 

**2.** The someList_ptr pointer variable points to an integer as indicated by the data type (int) it was declared with.  That’s the left operand of this assignment operator.  The right operand of this assignment operator, *&someList[1]* is also a bit complicated.  The right operand is the memory address, as indicated by the “address of” operator (&), of someList’s second element (index 1).  

* To put it all together, the memory address of *someList[1]* is being assigned to the integer pointer variable *someList_ptr*.

* As we can see from the notes to the right of this memory visualization, *&someList[1]* is equivalent to **0x0002F324**.  
someList_ptr is defined and placed on “the stack”. 
We can see this at memory address **0x0002F314** (as noted off to the side as *&someList_ptr*).  

* The value found at memory address **0x0002F314** happens to be another memory address (which should be readily apparent becase *someList_ptr* is a pointer variable).

* The movie Inception was complicated to follow because of it’s multiple levels of nested plots and scenarios.  This topic is a similar when you think about it. 

* *someList_ptr* is a "pointer variable" stored at *&someList_ptr*,  which currently contains the memory address to *&someList[1]*.  

**Note:** Looking in memory, we see a memory address whose value **is** a memory address.

---

| **someList_ptr = 0xC0DEDEAD;** |
|----------------------------------------------------------------------|
![](/assets/Arrays_Rev_5.png)

The above statement dereferences the *someList_ptr* pointer variable, and assigns the value of **0xC0DEDEAD** to that memory address.  

To be more explicit, *someList_ptr* is an integer pointer variable.  
The memory address stored in *someList_ptr* currently happens to be *&someList[1]* (see previous slide).  

When dereferencing this memory address, we find the value **0xC001C0DE** stored there.  
The statement listed at the top of slide assigns a new value (**0xC0DEDEAD**) as the value at that dereferenced memory address (*someList_ptr).

---

|* someList_ptr = 0xC0DEDEAD; |
|----------------------------------------------------------------------|
![](/assets/Arrays_Rev_6.png)

The example above shows how an array’s name is an alias to the memory address of its first element (index 0) at the time of its definition.  

**DISCLAIMER:**  An array’s pointer may be modified post-definition (see: Address Arithmetic))  

Pointer arithmetic is used to reference an element after the first element.  

Here, *someList* points to **0x0002F320** (the beginning of the array).  As you can see from the notes on the side, *someList + 1* points to the memory address of the next element (index 1).  

*someList + 2* points to the memory address of index 2 and *someList + 3* is equivalent to the memory address of the last element.  

After the address arithmetic (see: *someList + 2*), that memory address is then dereferenced.  Lastly, the value **0x1BADD00D** is assigned to the memory location pointed at by (*someList + 2*) because it is dereferenced.

### Notice:

You may have noticed that **0x0002F320** + 2 is **0x0002F322** as opposed to **0x0002F328**.  

In fact, **0x0002F320** + 2 ≠ **0x0002F328** in *math* math.  
This is *pointer* math (AKA Address Arithmetic).  *someList* is a pointer variable of data type int.  This implementation provides four bytes of memory space to a single int.  

This means each integer an int pointer references takes up four bytes.  The compiler knows this and the language has abstracted “pointer math” (AKA Address Arithmetic) to (supposedly) make life easier on the programmer.  someList + 2 (in Address Arithmetic) is equivalent to (someList + (2 * sizeof(int)) in *real* math.  

**Note**: This disparity is covered in more depth in the **“Address Arithmetic”** section.  

---

|**(someList + 2) = 0x1BADD00D;** |
|----------------------------------|
![](/assets/Arrays_Rev_7.png)

Above is another example of “Address Arithmetic”.  

This statement is equivalent to *someList_ptr = someList_ptr + 2*.  
Meaning… *someList_ptr* is a pointer variable and it holds the memory address of an integer.  Adding 2 to a pointer value essentially moves that memory address two “integer” “spots” in memory.  

If *someList_ptr* holds the memory address of index 0, (*someList_ptr + 1*) resolves to the memory address of index 1 (regardless of the data type).  

Resolution is different than assignment, however, and this example uses an assignment operator.  The memory address of index 2 is reassigned to the someList_ptr pointer variable.

### Reflection

It may have been easier to execute a *someList_ptr = &someList[2]* (which has the same result as *someList_ptr += 2*) but there is merit in Pointer Math.  
Sometimes a programmer needs to utilize memory addresses that are **“near”** the current address (relative position) rather that starting at the beginning each time (absolute position).  

A similar argument can be made regarding absolute and relative paths.  The honest answer is, there are situations in which absolute paths are more advantageous over relative paths.  The reverse is also true.  

This example is just showcasing various methods of accessing and modifying array elements utilizing pointers.

---


| * someList_ptr = 0xDEADBEEF; |
|----------------------------|
![](/assets/Arrays_Rev_8.png)

This statement dereferences the memory address stored in the integer pointer variable “someList_ptr”.  At this point in the code, the memory someList_ptr still contains the memory address of someList[3] (see previous slide).  This means, 0xDEADBEEF will be assigned to the memory location of someList[3].

| Comments |
|----------|

```
/* Example code will be executed per line and displayed in memory */

/* Define an integer array */
int someList[] = { 0xFEEDFACE, 0XC001C0DE, 0xCAFEF00D, )xFACEB00C };
/* Assign a value to index 0 */
someList[0] = 0x8BADF00D;   // Normal
/* Assign index 1's memory address to an interger pointer variable */
int * someList_ptr - &someList[1];  //By pointer reference...
/* Assign a value to this dereferenced pointer variable address */
*someList_ptr = 0xC0DEDEAD;		// …and then dereferencing it
/* Dereference and change the third memory address of this array */
*(someList + 2) = 0x1BADD00D;		// Array name pointer math…
/* Increment & assign the current memory address by two ints */
someList_ptr += 2;			// …AKA Address arithmetic
/* Dereference this memory address and assign the value */
*someList_ptr = 0xDEADBEEF;		// Dereference a pointer
```



---
<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/11_Pointers_Arrays/07_Address_Arithmatic.md" > Continue to Next Topic </a>
