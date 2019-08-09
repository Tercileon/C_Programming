<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

# Relational Operators

Relational operators check the status of one operand in relation to another operand.

* Every comparison is an expression of data type int
* Comparisons yield the value of 1 or 0
* 1 means "true"
* 0 means "false"
* Comparisons use relational operators
* Frequently used to test for error conditions

| **Operator** | **Meaning** | **Example** | Result: 1\(true\) or 0 \(false\) |
| :--- | :--- | :--- | :--- |
| &lt; | Less than | x &lt; y | 1 if x is less than y |
| &lt;= | Less than or equal to | x &lt;= y | 1 if x is less than or equal to y |
| &gt; | Greater than | x &gt; y | 1 if x is greater than  y |
| &gt;= | Greater than or equal to | x &gt;= y | 1 if x is greater than or equal to y |
| == | Equal to | x == y | 1 if x is equal to y |
| != | Not equal to | x != y | 1 if x is not equal to y |

#### NOTE: Notice the difference between x == 1 and x = 1?

## Examples

| **Operator** | **Example** | **Result** |
| :--- | :--- | :--- |
| &lt; | 5 &lt; 3 | 0 |
| &lt;= | 5 &lt;= 3 | 0 |
| &gt; | 5 &gt; 3 | 1 |
| &gt;= | 5 &gt;= 3 | 1 |
| == | 5 == 3 | 0 |
| != | 5 != 3 | 1 |

#### NOTE: The equality operators \(== and !=\) can be used to compare complex numbers. Do not, however, use them to compare floats. Floating point numbers end up being slightly imprecise due to rounding errors.

# Relational Operator Quiz

```c
int x = 2;
int y = 6;
//////// WRITE EACH RESULT ////////
y < x
y <= x
y > x
y >= x
y == x
y != x
2 == y
6 != x
6 >= 2
2 < 6
x != y != 3 >= x            // Bonus
```

---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/05_Operators_expressions/04_logical-operators.md" rel="Continue to Next Topic"> Continue to Next Topic </a>

