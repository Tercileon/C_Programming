|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Memory Operators

---

 |Operator | Meaning | Example | Result for each bit pos
-------- | ------- | ------- | -----------------------
 | & | Address of | &x | A constant pointer to x
 | * | Dereference | * p | The object (or function) point to by p
 | [] | Array element | x[i] | * (x+i), the element with index i in the array x

---

```
int this = 9;		// Integer variable “this” defined as 9
int that = 0;		// Integer variable “that” defined as 0
int * int_ptr;		// Pointer variable for an integer declared 
int_ptr = &this;	// Defined with address of “this”
that = *int_ptr;	// “that” assigned value at int_ptr address
/* “that”, now 9, should now equal “this” */
*int_ptr = 1;		// Value at int_ptr address assigned 1
/* “this” is now equal to 1 */ 
```

### Introduction
The intent of this “memory operator” segment is to walk through relatively simple C code with focus on memory operators.  The visual format attempts to replicate the appearance and behavior (see below) of Visual Studio as closely as possible to aid in the learning process.  We will “step into” the source code on the right hand side and replicate what happens in the Visual Studio Debug mode memory window on the left.  At this point, nothing has happened yet. 

---

![](/assets/code_1.png)

### Prior to beginning this section, there are some items to address:

* **cc’s and Ì’s?”** - Represent uninitialized memory in Visual Studio debug mode.  
  * Long Answer:  Hexadecimal value 0xCC is used as a “magic number” by Microsoft's C++ debugging runtime library and many DOS environments to mark uninitialized stack memory. CC resembles the opcode of the INT 3 debug breakpoint interrupt on x86 processors. (https://en.wikipedia.org/wiki/Magic_number_%28programming%29)  When viewed in the Visual Studio Debug mode memory window, the 0xCCs are part of the extended ASCII codes and interpreted as an Ì which is described as “Latin capital letter I with grave”.  (http://www.ascii-code.com/)
* **“Why aren’t variable assignments contiguous?”** - There’s no guarantee for contiguous memory address assignment outside of data structures like arrays and structs.  
  * Long Answer:  Many times, VS debug mode may happen to neatly assign contiguous, yet padded (see #3), memory addresses for consecutive variable definitions.  Some programmers, noticing this, assume it’s customary/standard and are baffled the first time they notice a non-contiguous memory assignment.  For the purposes of providing examples, contiguous memory addresses will be used and the values will be padded just like they are in VS13 debug mode (see #3).
* **“Why are variables padded in memory?”**  
  * Long Answer:  SMEs, Google, Microsoft VS forums, and approximately 11 safari books were searched in an attempt to determine why VS13 debug mode appears to pad values in memory with uninitialized memory segments that are represented with 0xCC (see: #1 * “What are all those cc’s and Ì’s?”) 
  * Multiple man hours were, literally, spent on answering this question to no avail.  Sometimes, the effort isn’t worth the payoff.  The search was abandoned and the question is unanswered.  The closest answer was a reference made to leaving space on top of the stack for “bookkeeping data” (found on stackoverflow).  The examples provided here are merely reproduced based on behavior exhibited in VS13 debug mode.
* “What does that yellow arrow represent?”  
  * Short Answer:  Same as the yellow arrow when you “Step Into” code using Visual Studio 2013.  
  * Long Answer:  “This is the next statement that will be executed.”

**Note** A macro was utilized to print the pointer location without adding another variable on to the stack.
#define PRINT_POINTER(thing) printf(#thing “ is at %p\n”, &##thing)


---
![](/assets/code_2.png)

At this point the integer variable “this” has been initialized with 9.  As we can see, its value is stored at memory address 0x0090C088.  Assignment operators (see: =) are old hat so we’ll skip discussing it.

Code Note:  A macro was utilized to print the pointer location without adding another variable on to the stack.
#define PRINT_POINTER(thing) printf(#thing “ is at %p\n”, &##thing)

The intent of this “memory operator” segment is to walk through relatively simple C code with a focus on memory operators.  The visual format attempts to replicate the appearance and behavior (see below) of Visual Studio as closely as possible to aid in the learning process.  

Note: the Memory Operator in "red" is at the bottom because it was placed on top of the stack.  Since “this” has a storage class of “temporary” (reference: Functions – Scope Rules), it is “pushed” on top of the stack memory.  

---
![](/assets/code_3.png)

In a similar fashion, the integer variable “that” has been initialized with 0.  As we can see, its value is stored at memory address 0x0090C07C.  Assignment operators (see: [=]) are old hat so we’ll skip discussing it.

---
![](/assets/code_4.png)

Here, a pointer variable, int_ptr, has been declared but not defined.  int_ptr will hold a memory address that contains an integer.  To be more specific, the memory address stored in int_ptr point to a memory address whose value should be interpreted as an integer.  The values found at its memory address, which we can see is 0x0090C070, are still unitialized (as indicated by the 0xCC) because it hasn’t been defined yet.  An important note here is that the “dereferencing” operator (see: [*]) has different meanings depending on it’s use.  Here, it is used to declare a pointer variable.

---
![](/assets/code_5.png)

This line of code assigns the memory address of “this“ to the integer pointer variable “int_ptr”.  “this” is an integer variable.  “this” is currently assigned the value of 9.  “this” is currently at the memory address 0x0090C088.  In fact, operation “&this” provides the memory address of the “this” variable.  That memory address is then assigned to “int_ptr”.  Also, keep in mind that this implementation example utilizes “little endian” (see: backwards) byte ordering.

---
![](/assets/code_6.png)

Here, we see an alternate use of the “dereference” operator.  Here, it is used to dereference the pointer variable “int_ptr”.  To “dereference” a memory address means to look at the value stored there.  The type (see: data type) of pointer determines how far to look into memory.  In this case, “int_ptr” currently holds the memory address 0x0090C088.  “int_ptr” is an integer variable.  From this implementation, we can extrapolate that integers are 4 bytes.  When you “dereference” a pointer, you view the value stored in the number of bytes as determined by the pointer type, starting at the given memory address.  

Let’s walk through this statement:
When you “dereference” a pointer… (in this case, “int_ptr”) 
  * you view the value stored… (that’s what dereferencing means)
  * in the number of bytes… (each pair of hex values represent a single byte)
  * as determined by the pointer type… (“int_ptr” is an integer pointer)
  * starting at the given memory address.  (“int_ptr” starts us off at 0x0090C088)

This means that “int_ptr” stores a value.  The value spans four bytes of memory since “int_ptr” is an integer pointer and integers have a width of four bytes in this implementation.  Those four bytes of “values” begin at memory address 0x0090C088 and continue through memory addresses 0x0090C089, 0x0090C08A, and 0x0090C08B.

---
![](/assets/code_7.png)

This line assigns 1 to a “dereferenced” “int_ptr”.  To be more specific, the value of 1 is assigned to memory location indicated by “int_ptr”.  It is very important to remember that the “dereference” operator has two uses.  1.  When used to declare a variable, it indicates that variable is a pointer variable and will hold a memory address.  2. When used in conjunction with a pointer variable, it is used to view/modify the value found at the address of that pointer variable.

---
### Demonstration Lab - Memory Operators
**"Title Not Found"**
**Note to Instructor:** *‘Live code’ this for the class on the big screen.  Let the class decide on appropriate uses/implementations of each of the requirements.*

* Declasre two variables, named var1 and var2, of the same data type
* Declare a pointer variable, named var_ptr, of the same data type
* Define the first variable with an arbitrary value
* Assign var1’s memory address to var_ptr 
* Define var2 by dereferencing var_ptr 
* Compare var1 to var2 and print human-readable results

---
### Performance LAB - "Reference Not Found"

---

|[Performance Lab](/11_Pointers_Arrays/performance_labs/PerfLab_Mem_Op.md)|
|---|
