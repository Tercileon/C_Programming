|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# STACK Based Memory


### Features of STACK Based Memory:

Stores local variables.

Used to pass arguments to functions.

Grows downwards.

Located at the opposite end of the processes's virtual address space from the HEAP.

Resizes automatically when accessed.

Implementation is up to the operating system at RUN TIME.

Attached to a THREAD (Blue bois vs AMD bros)

Reclaimed when the THREAD exits.

### Advantages of STACK Based Memory:

Relatively simple allocation (LIFO).

Typically faster.

Memory is automatically reclaimed.

Memory reclamation is more efficient.

Data can be used without pointers.

Stores local data and return addresses to pass parameters.

### Disadvantages of STACK Based Memory:

Not suitable for data that is required after THREAD/FUNCTION/PROGRAM exit.

*Finite* in size (depends on OS).

Variables cannot be resized.

STACK OVERFLOW (ooh hey....) occurs when too much of the stack is used. (large allocations, recursion)

Stack variables are stored in contiguous memory so writing out of bounds will likely change another variable resulting in **buffer overflow**.

---
### When to use THE STACK:

Prioritize speed.

If fragmentation is a concern.

If you don't want to manually manager your memory.

Short-lived data.

Relatively small amounts of data.

When the exact amount of data is known to be needed before compile time.

#### How to use THE STACK:

LOCAL scope variables

TEMPORARY class variables
 
 ---
 
<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/13_Memory_Management/03_heap_memory.md" rel="Continue to Next Topic"> Continue to Next Topic </a>
