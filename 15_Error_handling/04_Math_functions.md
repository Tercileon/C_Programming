|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Mathmatical Functions

### Situations to “handle”

* Divide by 0
* NaN
* Overflow (a number becomes too large for the computer to handle)
* Underflow (a number becomes too small for the computer to handle)
* Floating point precision flaws
* Imaginary numbers
* Infinite calculations

### When using with **math.h**:


**HUGE_VAL** This **macro** is used when the result of a function may not be representable as a floating point number. 

If the **magnitude** of the correct *result is too large* to be represented, the function sets errno to ERANGE to indicate a range error, and returns a particular, very large value named by the macro HUGE_VAL or its negation (- HUGE_VAL).

If the **magnitude** of the *result is too small*, a value of zero is returned instead. In this case, errno might or might not be set to ERANGE.

---
<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/15_Error_handling/05_pointers.md" rel="Continue to Next Topic"> Continue to Next Topic </a>
