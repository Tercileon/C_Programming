|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Nested Control Flow

Conditional statements are frequently nested within loops.

Loops are frequently nested within conditional statements.
```c
if (thisIsTrue)
{
    for (i = 0; i < thisIsTrue; i++)
    {
        while (someValue > 0)
        {
            for (j = 0; j < i; j++)
            {
                someValue--;
            }
        }
    }
}

///nested control flow example///
int i = 0;              //1st level var
char j = 'A';           //2nd level var

/*first for loop iterates through the 1st level, [1-4] */

for (i = 1; i <= 4; i++)
{
    //print the 1st level
    printf("%d. \n", i);
/* second for loop iterates through the 2nd level, [A-C] */
    for(j = 'A', j < 'D'; j++)
    {
        //print the 2nd level
        printf("\t%c. \n". j);
    }
}

///nested control flow output///

1.
    A.
    B.
    C.
2.
    A.
    B.
    C.
3.
    A.
    B.
    C.
4.
    A.
    B.
    C.
```

---

## COMPLETE PERFORMANCE LAB 19

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/07_Control_flow/performance_labs/Lab19.md" rel="PERFORMANCE LAB 19"> PERFORMANCE LAB 19 </a>

