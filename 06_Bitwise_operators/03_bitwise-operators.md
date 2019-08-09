<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

# Bitwise Operators

* Bitwise Operations are performed on the entire binary representation of the value
* Bitwise Operations are performed on all bits separately 

```c
// Bitwise AND
x & y         // 1 if 1 in both x and y

// Bitwise OR
x | y         // 1 if 1 in either x or y, or both

// Bitwise XOR
x ^ y         // 1, if 1 in either x or y, but not both

// Bitwise NOT
~x            // 1, if 0 in x

// Shift Left
x << y        // Each bit in x is shifted y positions left

// Shift Right
x >> y        // Each bit in x is shifted y positions right
```

#### Note: Bitwise AND, OR, & NOT are similar to logical operators

---

## Bitwise AND

The Bitwise AND operator will return 1 if a 1 is in **both** the x and y bit position; 0 otherwise.

##### ![](/assets/bin12.PNG)Note: This example asserts "int x = 3" and "int y = 6".

### Bitwise AND Pop Quiz 1

* Answer the question marks

## ![](/assets/bin13.PNG)

---

## Bitwise OR

The bitwise OR operator will return 1 if 1 is in either x or y's given bit position; 0 otherwise.

#### ![](/assets/bin14.PNG)Note: This example asserts "int x = 3" and "int y = 6".

### Bitwise OR Pop Quiz 2

* Answer the following question marks

#### ![](/assets/bin15.PNG)Note: BITWISE OPERATIONS EXECUTE ON THE ENTIRE BINARY

## Bitwise OR cont.

Bitwise OR operations are often used to turn on some bits.

```c
//////// BITWISE OR USES ////////
uint16_t = bwResult = 0;                // 0000 0000 0000 0000
uint16_t num1 = 12;                     // 0000 0000 0000 1100
uint16_t num2 = 3;                      // 0000 0000 0000 0011
bwResult = num1 | num2;                 // 0000 0000 0000 1111

uint16_t num3 = 240;                    // 0000 0000 1111 0000
bwResult = bwResult | num3;             // 0000 0000 1111 1111

uint16_t num4 = 768;                    // 0000 0011 0000 0000
bwResult = bwResult | num4;             // 0000 0011 1111 1111

uint16_t turnOn = 65280;                // 1111 1111 0000 0000
bwResult = bwResult | turnOn;           // 1111 1111 1111 1111
```
#### Note: typedefs (Exact-width integer type, ie uint16_t) are defined in <stdint.h>
---

## Bitwise XOR

The bitwise XOR operator will return 1 if 1 is in either x or y's bit position... but not both. Returns 0 otherwise.

#### ![](/assets/bin16.PNG)Note: This example asserts "int x = 3" and "int y = 6".**

### Bitwise XOR Pop Quiz 3

* Answer the question marks

### ![](/assets/bin17.PNG)Bitwise XOR Cont.

Bitwise XOR is often used as a means of doing a parity check. Assembly programmers also use XOR as a shortcut to zeroing a register's value \(num 1 ^ num 1 == 0\). Other use cases for XOR are obfuscation\* and to swap variables without using a 'temp' variable. For example:

```c
x = x ^ y;
y = x ^ y;
x = x ^ y;
```

\***Do not confuse obfuscation with encryption. Obfuscation simply means to obscure something... to make it a bit harder to read or understand. **

#### Breakdown of Swapping Variables W/O 'Temp' Var

```c
/* SWAP TWO VARIABLES WITH XOR (^) WITHOUT USING A TEMP VARIABLE */
//////// SAMPLE EXECUTION OF BITWISE XOR SWAP ////////
uint8_t x = 1;                  // 0000 0001
uint8_t y = 254;                // 1111 1110
x = x ^ y;                      // x = 1111 1111 == (x)0000 0001 ^ (y)1111 1110
y = x ^ y;                      // y = 0000 0001 == (x)1111 1111 ^ (y)1111 1110
x = x ^ y;                      // x = 1111 1110 == 1111 1111 ^ 0000 0001

//////// SAMPLE EXECUTION OF BITWISE XOR SWAP ////////
uint8_t p = 42;                 // 0010 1010
uint8_t q = 11;                 // 0000 1011
p = p ^ q;                      // p = 0010 0001 = (p)0010 1010 ^ (q)0000 1011
q = p ^ q;                      // q = 0010 1010 = (p)0010 0001 ^ (q)0000 1011
p = p ^ q;                      // p = 0000 1011 = (p)0010 0001 ^ (q)0010 1010
```

---

## Bitwise NOT

The bitwise NOT operator changes bits that are 0 to 1 and 1 to 0.![](/assets/bin18.PNG)**Note: This example asserts "unsigned short x = 3" which is typically 2 bytes and, according to limits.h, USHRT\_MAX = 65535... meaning that's the max for a unsigned short int**

An unsigned short was chosen for this and the following example to:

* Avoid negative numbers
* Limit the amount of bits that must be displayed since short ints normally only take 2 bytes
* Cleanly display the "wrapping" effect of variable overflow without also having to fathom the "control bit" characteristics of a signed bit

### Bitwise NOT Pop Quiz 4

* Answer the question marks

### ![](/assets/bin19.PNG)Bitwise NOT Examples

#### Clear a Flag

```c
//////// CLEAR A FLAG ////////
/* flagStorage stores 8 flags in a 32 bit int using hex digits */

unsigned int flagStorage = 0x11111111;      // All flags are set
unsigned int missingID = 0x00000010;        // Flat #2
flagStorage &= ~missingID;                  // 0x11111101
```

#### XOR Without Using XOR

```c
//////// XOR WITH NOT ////////
x ^ y == (~x & y) | (x & ~y)
```

---

---

## Bitwise Shift Left

The bitwise shift left operator shifts bits a certain amount of positions left. Bit positions vacated by the left shift are always filled with 0 bits. Bit values shifted out to the left are lost.

#### ![](/assets/bin20.PNG)Note: This example asserts "unsigned short x = 3" which is typically 2 bytes and, according to limits.h, USHRT\_MAX = 65535... meaning that's the max for a unsigned short int**

### Bitwise Shift Lift Pop Quiz 5

* Answer the question marks

![](/assets/bin21.PNG)

---

## Bitwise Shift Right

The bitwise shift right operator shifts bits a certain amount of positions right. Bit positions vacated by the right shift are filled with 0 bits if the left operand is unsigned or non-negative. If it's signed and negative, shift depends on the compiler. For instance, Visual Studio compiler is performing an arithmetic shift. In other words, the compiler is filling the left-most bits with the same bits as the sign which happens to be 1.

#### ![](/assets/bin22.PNG)Note: This example asserts "unsigned short x = 3" which is typically 2 bytes and, according to limits.h, USHRT\_MAX = 65535... meaning that's the max for a unsigned short int**

## Practice 

## Bitwise Shift Right

* Input a uint32\_t
* Drop the four right-most bits off the uint32\_t by shifting right four
* Replace the four left-most bits of the uint32\_t with the dropped bits
* Print the I/O in uppercase Hex, width 8, leading zeros

```c
//////// SAMPLE EXECUTION #1 ////////
Input a number: 31337
Your number was: 0x00007a69
Your number now: 0x900007a6
//////// SAMPLE EXECUTION #2 ////////
Input a number: 987654321
Your number was: 0x3ADE68B1
Your number now: 0x13ADE68B
```

#### Note: In hex, the last digit becomes the first digit**

---

## Performance Lab 10 

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/06_Bitwise_operators/performance_labs/lab10.md" rel="PERFOMANCE LAB 10"> PERFORMANCE LAB 10 </a>

