<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

# Endianness
Different architectures store multiple-byte data elements in one of two standards:
* big endian - normal
* little endian - backwards

NOTE: These definitions are simplified, and to be explained in greater detail later.

```c
unsigned int fullInterger = 0xABCD1234; 
//Decimal value 2882343476
```
|Address|Big Endian|Little Endian|
|---|---|---|
|0x90318688|ab|34|
|0x90318689|cd|12|
|0x9031868A|12|cd|
|0x9031868B|34|ab|

### Big Endian
Stores the *MOST* significant byte at lower memory addresses.

### Little Endian
Stores the *LEAST* significant byte at lower memory adresses.

```c
//decimal value 2882343476
unsigned int fullInteger = 0xABCD1234;  

//decimal value 354185
unsigned int anotherIntger = 0x56789;
```

|Address|Big Endian|Little Endian|
|---|---|---|
|0x90318688|ab|34|
|0x90318689|cd|12|
|0x9031868A|12|cd|
|0x9031868B|34|ab|
|0x9031868C|00|89|
|0x9031868D|05|67|
|0x9031868E|67|05|
|0x9031868F|89|00|

```c
char exampleString[8] = { "90 COS!" };
```
|Address|Big Endian|Little Endian|
|---|---|---|
|0x68831890|39|39|
|0x68831891|30|30|
|0x68831892|20|20|
|0x68831893|43|43|
|0x68831894|4f|4f|
|0x68831895|53|53|
|0x68831896|21|21|
|0x68831897|00|00|


 NOTE: “Endianness” only affects “multiple-byte data elements”.  Char, in typical implementations, is not “multiple-byte”.  Instead, it is one byte.  Thus viewing the elements of the exampleString array in memory should not differ between Big Endian and Little Endian because a char typically has a size of one byte.

NOTE 2: Memory addresses are normally displayed in hexadecimal.  This concept is discussed in depth during the “Memory Visualization” section.

NOTE 3: These memory addresses are entirely arbitrary.  In fact, these arbitrary memory addresses are an Easter Egg, if you will. 688[CW]318[COG]90[COS] is the first memory address.

NOTE 4: The representations of the memory address values are written in hexadecimal (e.g., 4F).  Any ASCII table will allow the students to manually convert the hex values here to the char elements in the exampleString if any of the students wish.

DISCLAIMER: Elements in an array should be stored in contiguous memory addresses.

---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/11_Pointers_Arrays/04_memory_visualization.md" rel="Continue to Next Topic"> Continue to Next Topic </a>
