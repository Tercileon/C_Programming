|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Type Conversions

Type conversion is possible in C. Type conversion simply yields a value in a new data type. The original value is preserved if the new type is capable of representing it. For example, floating point numbers may be rounded on conversion from double to float. There are two methods to convert type:

* **Implicit** - i.e., performed by the compiler automatically
* **Explicit** - through the use of the cast operator

Best practice is to use the cast operator when type conversion is necessary. Always try to prevent the compiler from guessing. A confused compiler is a bad compiler.

#### Syntax:

```c
// pseudo example
(data_type) expression // not everything can be type cast

// stub example
(double) 15 / 3 //result is int yet 'coerced as double

// full example
# include <stdio.h>

int main(void)
{
    int grade1 = 90, grade 2 = 100;    // student grades
    double gradeAvg = 0;               // student average
    gradeAvg = (double) ((grade1 + grade2) / 2);
    return 0;
}
```

### What does cast do?

Cast will ignore any unneeded or additional information, but will never add information to a variable. For instance, a float may obtain extra ending zeros if converted to a double and a double may get some of it's information cutoff \(ignored\) if converted to a float. Converting based on the chart below will ensure additional information is never cut off.

![](/assets/usual_arithmetic_conversion.png)

---

## Demonstration Lab 2
Review labs demo 2a & 2b, and Practice the following tasks:

Declare and initialize variables of data types: 
* int
* float
* double
* char

Type cast and print the following:

* int -&gt; float
* int -&gt; char
* float -&gt; double
* double -&gt; float
* char -&gt; int
* 63 -&gt; char

**NOTE:** Initialize int to a value between 32 and 126

---

**Complete Performance Lab 2**

---
|[Performance Lab 2](/02_Variables/performance_labs/lab2.md)|
|---|
