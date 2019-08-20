|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Lab 8: scanf

## Part 1

### Formatted Input \(strings\)

1. Read a first, middle and last name as input into separate char arrays
2. Specify a field-width to protect against buffer overflow
3. Ensure the field-width leaves room for a nul-terminator 
4. Specify a \("\t"\) as a delimitating character
5. Print the full name, separating each string with a tab and newline \("\t\n"\)

## Part 2

### Formatted Input \(numbers\)

1. Read two integers from one line
2. Format the input so that the integers are separated by an asterisk \(\*\) x\*y \(e.g., 2\*3, 11\*14\)
3. Reprint the two integers and result as if the answer were being read by a human

```
////////////// EXAMPLE #1 ///////////////
OUTPUT:  Enter two integers, separated by a *, to be multiplied…
INPUT:   2*3
OUTPUT:  The result of 2 multiplied by 3 is 6.  
////////////// EXAMPLE #2 ///////////////
OUTPUT:  Enter two integers, separated by a *, to be multiplied…
INPUT:   11*14
OUTPUT:  The result of 11 multiplied by 14 is 154.
```

---

|[Next Topic](/04_IO_part_1/08_fprintf-fscanf.md)|
|---|
