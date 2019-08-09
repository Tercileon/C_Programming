<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

---

# Memory Visualization
As we discussed previously, memory is simply a location where data is stored.  To access this data, your program must know how to find it.  This is accomplished by addressing the data in memory.  
  
 ### Memory Addresses
  **1.** Memory addresses are normally displayed in hexadecimal.  Each memory address refers to one byte of memory.  Each line in this display (see: dword) represents four bytes of memory values/data.  Thus, each line in this display (see: dword) actually contains four memory addresses.  The memory address listed on a line doesn’t represent an entire line.  It merely represents the address of the first byte of information (See "Memory Values" below for more information). 
<p float="left">
  <img src="/assets/Memory_Address.png" width="300" />
  <img src="/assets/Data_Mem.png" width="520" /> 

**Example**, 0x0090C050 (line: dword 01) is the memory address for the memory value “54” (memory value: top row, left most column).  0x0090C050 doesn’t represent any other memory values on the “dword 01” line.  Mathematics must be applied to determine the memory addresses for the remaining memory values on the rest of the “dword 01” line (see: 68, 65, and 20).  In fact, here are the memory address for each of the four bytes of memory values on the “dword 1” line:

'''
0x0090C050  54
0x0090C051  68
0x0090C052  65
0x0090C053  20
'''

The next line (dword 02) begins with memory address 0x0090C054 which represents memory value 39 (memory value: row 2, left most column).  
	
---	
  **2.** Keep in mind that these memory addresses are represented in hexadecimal.  That means **“Memory math”** can be counter-intuitive.  For example, the next memory address after 0x0090C079 is 0x0090C07A.  As another example, the next memory address after 0x0090C09F is 0x0090C0A0.  If you hve difficulty with “Memory math”, you may utilize windows calculator.  Change the “View” to “Programmer”.  Set the numbering system to “Hex” and change the length to “DWORD”.  This should easily allow you to remove the mystery from “Memory math”.
	
  **3.** The memory addresses in this particular visualization are not necessarily representative of real memory addresses.  Actual memory addresses are more likely to resemble something like **0x00c8f864**.  The memory addresses in this example are actually an easter egg.  Example memory addresses are modified for more of a visualization for understanding concepts; but many of them will also be **easter eggs**.

### Line References:
  
  **1.**  The title **“dword”** was chosen for a couple different reasons.  One, it is a reference to the total number of bits (values) that are represented on a single line.  “DWORD” is a Microsoft data type.  “DWORD” is declared in IntSafe.h as typdef unsigned long DWORD.  It represents a 32-bit unsigned integer.  Each line of this static memory visualization presents a line of four hexadecimal values in memory.  Each hexadecimal value is represented by two digits.  Each hexadecimal digit represents 4 binary bits.  Thus, each line represents x bits if:
x = 4 values * 2 digits * 4 bits
x = 4 * 2 * 4
x = 32 bits per line

This measurement changes, of course, if you open your own “Memory 1” windows and resize them to something other than four columns of values.	

**3.** In computer software and media, an Easter egg is a hidden message or image, or secret feature of a work.

---
	
### POP Quiz:
* What is the value at memory address 0x0090C079? 	
* What is the value at memory address 0x0090C08B?	
* What is the value at memory address 0x0090C08F?	
* What is the memory address of 0x2e (line: dword 16)?
* What is the memory address of 0x2c (line: dword 15)?
* Name a memory address for value 0x30.

---

### MEMORY VALUES:
The values in memory are typically displayed in hexadecimal as well.  It’s not so obvious because they are prefixed with **0x** like the memory addresses.  Hexadecimal is commonly chosen because it is useful for representing binary data.  Each hexadecimal digit represents 4 binary bits (see: Bitwise Operations – Numbering Systems).

**Memory addresses** point to a storage location.  That storage location may or may not contain a value.  The value at the memory address does not have a “data type”.  

**Data types** are an abstraction fabricated by higher level languages.  This means the value stored in a given isn’t data (Data is raw, unorganized facts that need to be processed. Data can be something simple and seemingly random and useless until it is organized.) or even information (When data is processed, organized, structured or presented in a given context so as to make it useful, it is called information.).  The value stored at a given memory address is merely a raw fact that needs to be processed.  Determining that value’s “data type” is one easy way to transform that raw fact into something more meaningful.  For instance, the value at address 0x0090C071 (value 0x20) is a char.  Now it is data because we realize 0x20 represents a “space”.  That still doesn’t put this data into context though.  
When data is made useful, it becomes information.  The fact that value at address 0x0090C071 (value 0x20) represents a char as part of an array of chars helps transform this “data” into “information”.  The point of this exercise is to inform the students that the values contained at specific memory addresses still requirement interpretation.

### DATA IN MEMORY:
Allows you to translate the information contained in the given memory values.  The IDE’s Memory window may know a character array (because we told it) but it cannot figure out that we’re using uinti_32s as bit masks.  This visualization gives a standardized location to translate that information for your benefit.

The data in memmory is where the memory visualization differs from Visual Studio’s debug mode memory window.  The Memory window in Visual Studio interprets the memory values off to the right.  This visualization has a different approach.  This visualization provides a bit more organization and/or interpretation of the values found in memory.  For instance, take 0x0090C08F.  This memory address actually holds the null character for the C string “string1”.  In a memory window, the null character would appear as another “.” (period), which is how Visual Studio presents 00s.  In this memory visualization, we are able to present it as what it truly is… the string’s null-terminating character.  

**Note:**  The null terminating character was explicitly included in string’s initialization in order to further draw the parallel between the array, the memory addresses, the memory values and the data in memory.

---

### Answers to Quiz:

* Answer:  53	
* Answer:  30	
* Answer:  00	
* Answer:  0x0090C088	
* Answer:  0x0090C055, 0x0090C073, and 0x0090C08B
---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/11_Pointers_Arrays/05_Memory_Operators.md"> Continue to Next Topic </a>
