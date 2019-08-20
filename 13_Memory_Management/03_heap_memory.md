|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# HEAP Based Memory


### Features of HEAP Based Memory:

Made up of a linked list of used and free blocks.

Variables on the HEAP must be destroyed manually and never fall out of scope.

Grows upwards.

Located at the opposite end of the processes's virtual address space from the stack.

Implementation is up to the Operating System at RUN TIME.

Associated with a thread.

RECLAIMED when the programmer frees it.

### Advantages of HEAP Based Memory:

Memory can be allocated at RUN TIME.

Variables can be accessed globally.

Available memory is only limited by the Operating System.

Blocks of memory can be resized.

### Disadvantages of HEAP Based Memory:

Involves complex MANUAL bookkeeping.

Slower allocation that the stack.

Allocation requests fail if *too large* a buffer is requested.

Programmer is responsible for *plugging* memory leaks.

Efficiency is not guaranteed.

Memory may become **fragmented** as blocks are allocated and freed.

---
### When to use THE HEAP:

A large block of memory is required.

Long lived data is needed.

A need for **variables** that can change *SIZE* dynamically.

Memory must be allocated at RUN TIME.

Necessary memory space is *unknown* at compile time.

#### How to use THE HEAP:

C standard library functions to request blocks of memory.

Blocks no longer required must be returned to the OS. (memory leaks)
 
--- 
<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/13_Memory_Management/04_c_standard_lib.md" rel="Continue to Next Topic"> Continue to Next Topic </a>
