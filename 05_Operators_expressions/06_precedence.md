|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Precedence

Precedence determines the grouping of operands with operators in expressions with more than one operator. In other words, precedence is how and when a group of expressions is ran.

* Part of the precedence includes usual arithmetic rules regarding order of operations

```c
1 + 2 * 3            // Equivalent to 1 + (2 * 3)
```

* Use parentheses to manually control the grouping

```c
(1 + 2) * 3          // Result: 9
```

| **Priority** | **Operator** | **Grouping** |
| :--- | :--- | :--- |
| 1 | {} \[\] -&gt; . | left to right |
| 2 | ! ~ ++ -- = - \(type\)\* & sizeof | right to left |
| 3 | \* / % | left to right |
| 4 | + - | left to right |
| 5 | &lt;&lt; &gt;&gt; | left to right |
| 6 | &lt; &lt;= &gt; &gt;= | left to right |
| 7 | == != | left to right |
| 8 | & | left to right |
| 9 | ^ | left to right |
| 10 | \| | left to right |
| 11 | && | left to right |
| 12 | \|\| | left to right |
| 13 | ?: | right to left |
| 14 | = += -= \*= /= %= &= ^= != &lt;&lt;= &gt;&gt;= | right to left |
| 15 | , | left to right |

```c
//////// ARITHMETIC OPERATOR QUIZ BONUS QUESTION ////////
int y = 4;
1 + 2 * (3 + y) + 5;        // Result 20

//////// RELATIONAL OPERATOR QUIZ BONUS QUESTION ////////
int x = 2; y = 6;
x != y != 3 >= x;          // Result 0

//////// ASSIGNMENT OPERATOR QUIZ BONUS QUESTION ////////
x = 9; y = 3;
(y %= y) || (x /= x--);    // Result 0

// What would be a better way of writing these?
```

---

## Performance Lab 9

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/05_Operators_expressions/performance_labs/Lab9.md" rel="PERFORMANCE LAB 9"> PERFORMANCE LAB 9 </a>

#### NOTE: Best practice is to be explicit with parentheses
