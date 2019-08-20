|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Numbering Systems

* ### Decimal
* ### Hexadecimal
* ### Octal
* ### Binary

| **System** | **Base** | **Available Digits** | **Printf\(\) Format** | **Example Value** |
| :--- | :--- | :--- | :--- | :--- |
| Decimal | 10 | \[0-9\] | %d | 42 |
| Hexadecimal | 16 | 0x\[0-F\] | %X | 0x2A |
| Octal | 8 | 0\[0-7\] | %o | 052 |
| Binary | 2 | \[0-1\] | ~~%b~~ | 101010 |

* Positional values are calculated by B^n where B = Base and n = digit position
* Calculation begins at the right and moves left
* 42 == 0x2A == 052 == 101010
* The amount is the same, just counted differently
* Values are stored as binary despite original format

### EVIL: %b is not defined as a format specifier for binary in the ANSIC Library

It is used in the lcc-win32 compiler system for binary representation. The safest method to convert a number in any counting system is to write your own base-2 conversion algorithm. %b specifier allows printf to interpret escape sequences with an argument. In other words, it causes printf to expand backslash escape sequences \(for example \n for newline\)

![](/assets/bin1.PNG)

* Each digit is multiplied against its position value
* Each product is added together to obtain the total

### ![](/assets/bin2.PNG)

---

## Decimal-to-Decimal

#### ![](/assets/bin3.PNG)Breakdown

1. Total = \(0 \* 10^3\) + \(0 \* 10^2\) + \(4 \* 10^1\) + \(2 \* 10^0\)
2. Total = \(0\) + \(0\) + \(4 \* 10^1\) + \(2 \* 10^0\)
3. Total = \(0\) + \(0\) + \(4 \* 10\) + \(2\)
4. Total = \(0\) + \(0\) + \(40\) + \(2\)
5. Total = 42

![](/assets/bin4.PNG)

---

## Hexadecimal-to-Decimal

### ![](/assets/bin5.PNG)Breakdown

1. Total = \(0 \* 16^3\) + \(B \* 16^2\) + \(0 \* 16^1\) + \(E \* 16^0\)
2. Total = \(0\) + \(B \* 256\) + \(0\) + \(E \* 1\)
3. Total = \(0\) + \(11 \* 256\) + \(0\) + \(14 \* 1\)
4. Total = \(0\) + \(2816\) + \(0\) + \(14\)
5. Total = 2830

![](/assets/bin6.PNG)

---

## Octal-to-Decimal

### ![](/assets/bin7.PNG)Breakdown

1. Total = \(2 \* 8^3\) + \(4 \* 8^2\) + \(7 \* 8^1\) + \(1 \* 8^0\)
2. Total = \(2 \* 512\) + \(4 \* 64\) + \(7 \* 8\) + \(1 \* 1\)
3. Total = \(1024\) + \(256\) + \(56\) + \(1\)
4. Total = 1337

![](/assets/bin8.PNG)

---

## Binary-to-Decimal

### ![](/assets/bin9.PNG)Breakdown

1. Total = \(1 \* 2^3\) + \(0 \* 2^2\) + \(1 \* 2^1\) + \(1 \* 2^0\)
2. Total = \(1 \* 8\) + \(0\) + \(1 \* 2\) + \(1 \* 1\)
3. Total = 8 + 0 + 2 + 1
4. Total = 11

![](/assets/bin10.PNG)

## Review 1

| **System** | **Original Value** | **Decimal Value** |
| :--- | :--- | :--- |
| Hexadecimal | 0xBAD | ? |
| Hexadecimal | 0xBEEF | ? |
| Octal | 455 | ? |
| Octal | 347 | ? |
| Binary | 0010 1111 | ? |
| Binary | 0100 0110 | ? |

## Hexadecimal

Hexadecimal is useful for representing binary data. Each hexadecimal digit represents 4 binary bits.

![](/assets/bin11.PNG)

## Review 2

| **Hexadecimal** | **Binary Conversion** |
| :--- | :--- |
| 0xDEADC0DE | ???? ???? ???? ???? ???? ???? ???? ???? |
| 0xE011CFD0 | ???? ???? ???? ???? ???? ???? ???? ???? |
| 0xFACEB00C | ???? ???? ???? ???? ???? ???? ???? ???? |
| 0xFEE1DEAD | ???? ???? ???? ???? ???? ???? ???? ???? |

## Review 3

| **Binary** | **Hexadecimal** |
| :--- | :--- |
| 1101 1110 1010 1101 1101 0000 0000 1101 | 0x???????? |
| 1100 0000 0000 0000 0001 0000 1111 1111 | 0x???????? |
| 1011 0001 0000 0101 1111 0000 0000 1101 | 0x???????? |
| 1101 1110 1010 1101 0001 0000 1100 1100 | 0x???????? |

---

#### Check out: [https://en.wikipedia.org/wiki/Hexspeak](https://en.wikipedia.org/wiki/Hexspeak)

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/06_Bitwise_operators/03_bitwise-operators.md" rel="Continue to Next Topic"> Continue to Next Topic </a>

