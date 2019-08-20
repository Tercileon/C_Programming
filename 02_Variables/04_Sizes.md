|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Sizes - Why Does Size Matter?

Size sets limits on the information that can be stored. Computers have a finite amount of free memory. Thus, data type sizes vary depending on hardware and software environments. So it's important to keep the above in mind when allocating blocks of memory. It's **NEVER** safe to presume the size of any data type.

---
## C - Size Champion:

C is often used because of size restrictions. C gives the programmer a ton of control of the memory. Which can be both good and bad depending on the programmers skills. It's easy to create memory leaks and such if not careful. But on the other side of the coin, this gives the programmer the power to program on devices where minimal memory usage may be necessary. For example, embedded programming and gaming \(Especially with C++\).

YOU take control. YOU allocate, or de-allocate memory. YOU manage buffers. YOU know the performance impact of YOUR actions. etc.

## Operator - sizeof():
**sizeof()** is used to determine the amount of memory taken up. Never guess; let the system tell us.

---
### Demonstration Lab 2

```c
#include <stdio.h>

int main(void)
{
    int integer = 1;
    float singlePrecision = 2.2;
    double doublePrecision = 3.3;
    char singleChar = '$';
    char singleChar2 = 33;

    printf("size of int is %d \n", sizeof(integer));
    printf("size of float is %d \n", sizeof(singlePrecision));
    printf("size of double is %d \n", sizeof(doublePrecision));
    printf("size of char 1 is %d \n", sizeof(singleChar));
    printf("size of char 2 is %d \n", sizeof(singleChar2));

    return 0;
}
```

* Is there a size difference between **singleChar** and **singleChar2**
* Why did we change all format specifiers to %d

---

|[Next Topic](/02_Variables/05_Declarations.md)|
|---|
