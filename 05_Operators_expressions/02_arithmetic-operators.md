|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Arithmetic Operators

Arithmos \(Greek\) means "number". Arithmetic is therefore a branch of mathematics that consists of the study of numbers.

| **Operator** | **Meaning** | **Example** | **Result** |
| :--- | :--- | :--- | :--- |
| **\*** | Multiplication | x \* y | The product of x and y |
| **/** | Division | x / y | The quotient of x by y |
| **%** | Modulo Division | x % y | The remainder of x / y |
| **+** | Addition | x + y | The sum of x and y |
| **-** | Subtraction | x - y | The difference of x and y |
| **+** | Positive sign | +x | The value of x |
| **-** | Negative sign | -x | The arithmetic negation of x |
| **++** | Increment | ++x | x = x + 1 \(before evaluation\) |
| **++** | Increment | x++ | x = x + 1 \(after evaluation\) |
| **--** | Decrement | --x | x = x - 1 \(before evaluation\) |
| **--** | Decrement | x-- | x = x - 1 \(after evaluation\) |

## Examples

| **Operator** | **Example** | **Result** |
| :--- | :--- | :--- |
| \* | 5 \* 3 | 15 |
| / | 5 / 3 | 1\* |
| % | 5 % 3 | 2\* |
| + | 5 + 3 | 8 |
| - | 5 - 3 | 2 |
| + | +5 | 5 |
| - | -5 | -5 |
| ++ | ++5 | 6\* |
| ++ | 3++ | 3 \(4\)\* |
| -- | --3 | 2\* |
| -- | 5-- | 5 \(4\)\* |

**\*Discussed further down**

#### NOTE: Each result example asserts "int x = 5" and "int y = 3"

## Division

* **Problem**
  * Division with integer operands returns an integer \(e.g., 5 / 3 returns 1\)
* **Solution**
  * Express the integer as a decimal or type cast the operand

```c
int x = 5; int y = 3;                
////////// EXPRESS AS INTEGER //////////
5 / 3                // Result: 1
5.0 / 3              // Result: 1.666667
5 / 3.0              // Result: 1.666667

////////// TYPE CAST AS FLOAT //////////
(float)x / y         // Result: 1.666667
x / (float)y         // Result: 1.666667
(float)x / (float)y  // Result: 1.666667
```

## Modulo

* **Definition**
  * Finds the remainder after division of one **integer** by another **integer**
* **Expressed**
  * A modulo n\(abbreviated as a mod n\)
* **Mathematically**
  * a - \(n \* \(a / n\)\)

```c
//////// MODULO EXAMPLES ////////
5 % 3                // Result: 2
27 % 16              // Result: 11
30 % 3               // Result: 0
4 % 7                // Result: 4

//////// Modulo Quiz ////////
35 % 3               // Result: ?
16 % 6               // Result: ?
1 % 199              // Result: ?
```
Modulo takes some getting use to as it does not mean percentage in this context. Modulo is often used in cases where a cap/limit on a particular value as Modulo will return a 0 as there is no remainder. Another use could be in the creation of a timer where time is split up in h:m:s
```c
h = s / 3600;
m = (s / 60) % 60;
s = s % 60;
```

#### NOTE: The % operator can only be applied to integers

## Increment/Decrement

Increment and decrement accomplishes two operations, add/subtract one\(1\), return the operand's value. The placement of the operator determines the operation's order of execution. 

```c
int x = 5; int y = 3;

//////// INCREMENT ////////
x++                          // Result: 5; x = 5 + 1
++y                          // y = 3 + 1; Result: 4
++x                          // x = 6 + 1; Result: 7
x = 5; y = 3;                // Reset variables

//////// DECREMENT ////////
--y                          // y = 3 - 1; Result: 2
--x                          // y = 5 - 1; Result: 4
y--                          // Result: 4; y = 4 - 1
```

# Arithmetic Operators Quiz

```c
int x = 7;
int y = 4;
float z = 0;
//////// WRITE EACH RESULT ////////
x * y
z = x / y
x % y
y + x
y - x
-y
++x
y++
x--
--y
1 + 2 * (3 + y) + 5
```

---

|[Next Topic](/05_Operators_expressions/03_relational-operators.md)|
|---|
