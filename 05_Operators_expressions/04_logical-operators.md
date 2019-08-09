<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

# Logical Operators

Logical operators test for a condition. Or more specifically, compares the binary state of one or more operands. Binary state is represented as True \(1\) or False \(0\). Main operations include:

* Conjunction \(AND\)
* Disjunction \(OR\)
* Negation \(NOT\)

| **Logical Operation** | **C Operator** |
| :--- | :--- |
| AND | && |
| OR | \|\| |
| NOT | ! |

| **Operator** | **Meaning** | **Example** | **Result: 1 \(true\) or 0 \(false\)** |
| :--- | :--- | :--- | :--- |
| && | Logical AND | x && y | 1 if both x and y are != 0 |
| \|\| | Logical OR | x \|\| y | 1 if either or both of x and y is != 0 |
| ! | Logical NOT | !x | 1 if x == 0. In all other cases, the expression yields 0 |

#### ![](/assets/Capture.PNG)NOTE: Any value except 0 is interpreted as "true"

## Examples

| **Operators** | **Example** | **Result** |
| :--- | :--- | :--- |
| && | 1 && 0 | 0 |
| \|\| | 1 \|\| 0 | 1 |
| ! | !1 | 0 |
| && | 0 && 9 | 0 |
| \|\| | 0 \|\| 9 | 1 |
| ! | !0 | 1 |
| && | 9 && 1 | 1 |
| \|\| | 9 \|\| 1 | 1 |
| ! | !9 | 0 |

# Logical Operators Quiz

```c
int x = 99;
iny y = 0;

//////// WRITE EACH RESULT ////////
x && y
y || x
!y
y && 0
x || 42
!x
x && x
y || y
!1
1 && 1
(0 && 1) || (2 && 3)        // Bonus
```

---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/05_Operators_expressions/05_assignment-operators.md" rel="Continue to Next Topic"> Continue to Next Topic </a>

