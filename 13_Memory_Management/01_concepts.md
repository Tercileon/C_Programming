|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# MEMORY MANAGEMENT

### Definitions:
* Compile time
    * The moment in which SOURCE CODE is compiled into a binary without being executed.
* Run time
    * The moment in which a BINARY is executed.
* Stack
    * Region of memory in a process's virtual address space where data is added or removed in a **last-in-first-out** manner.
* Heap
    * Region of memory in a process's virtual address space available to allocate blocks of memory in an arbitrary order and accessed multiple times.
* Memory leak
    * A failure in a program to release allocated memory that is no longer needed, causing diminished computer performance or failure.

## CONCEPTS

#### OVERVIEW

Typical C program sections in memory:
1. TEXT segment (low addresses)
2. DATA segment
3. BSS (BLOCK STARTED by SYMBOL) segment
4. HEAP segment
5. STACK segment (high addresses)

NOTE: Different sources enumerate segments differently!!!

![](/assets/memorymngmt.jpg)

1. TEXT SEGMENT
    1. aka the CODE segment.
    2. Contains executable instructions.
    3. Read from program file.
    4. Read only.

![](/assets/memorymngmt.jpg)

2. DATA SEGMENT
    1. aka initialized data
    2. contains global variables and static variables initialized by the programmer.
    3. NOT read only.

![](/assets/memorymngmt.jpg)

3. BSS (BLOCK STARTED by SYMBOL) SEGMENT
    1. Contains global variables and static variables that are initialized to 0 or not initialized at all.
    2. Initialized by the kernel to 0.
    3. NOT read only.

![](/assets/memorymngmt.jpg)

4. HEAP SEGMENT
    1. This is where DYNAMIC MEMORY allocation takes place.
    2. Grows to larger addresses (moves upwards).
    3. Shared by all shared libraries and dynamically loaded modules in a process.
    4. Managed by C standard library functions.
    5. Memory allocated to HERE remains in existence for the duration of the program.

![](/assets/memorymngmt.jpg)

5. STACK SEGMENT
    1. Implemented as a Last-In-First-Out (LIFO) structure.
    2. A *stack pointer* tracks the top of the stack as it changes.
    3. Grows to smaller addresses (moves downwards).
    4. Automatic variables are stored here.
    5. Function calls results in a *stack frame* being **pushed** onto the stack.
    
---

|[Next Topic](/13_Memory_Management/02_stack_memory.md)|
|---|
