|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Assignment Operators

Assignment operators include both simple and compound assignment.

* **Simple Assignment Operands:**
  * Two operands with arithmetic types
  * Two operands with the same structure or union type\*
  * Two pointers that both point to the same type\*
* **Compound Assignment**
  * Takes the form x op= y
  * op is an arithmetic or bitwise\* operator
  * The value of x op \(y\) is assigned to x

**\*These topics will be discussed in a later chapter**

## Examples

| **Operator** | **Meaning** | **Example** | **Result** |
| :--- | :--- | :--- | :--- |
| = | Simple assignment | x = y | Assign the value of y to x |
| op= | Compound assignment | x += y | x op= y is equivalent to x = x op \(y\) |

| **Example** | **Result** |
| :--- | :--- |
| 10 \*= 2 | 20 |
| 10 /= 2 | 5 |
| 10 %= 2 | 0 |
| 10 += 2 | 12 |
| 10 -= 2 | 8 |
| 10 += ++2 | 13 |
| 10 += 2++ | 12 |
| 10 -= --2 | 9 |
| 10 -= 2-- | 8 |

# Assignment Operators Quiz

```c
int x = 9;
int y = 3;
//////// WRITE EACH VALUE OF X ////////

x *- y
x /= y
x %= y
x += y
x -= y
x *= ++y
x /= y--
x %= --x
x += --y
x -= y++
(y %= y) || (x /= x--)        // Bonus
```

---

|[Next Topic](/05_Operators_expressions/06_precedence.md)|
|---|
