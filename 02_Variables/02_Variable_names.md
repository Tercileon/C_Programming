|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Variable Names

**Variables** are a name given to a place in the computer's memory for storing a value that our programs can manipulate. Each variable has a specific **type**, which determines the **size** and **layout** of the variable's memory; **range of values** that can be stored in that memory; and **operations** applied to that variable.  

**Variable names** should describe the variable as best as possible. The **max length** of a variable name is < 32 depending on the variable type, compiler, and version of C being used. For instance, the G++ compiler can compile any length.

## Style:
A variable name can be composed of letters and digits. They may not begin with a number though. C variable names are case sensitive and the underscore "_" counts as a letter (Do not begin variable names with a underscore since library routines and system names use this naming convention). You may also not include keywords or spaces in variable names.

### Examples:

| **variable name** | **legal?** | **notes** |
| :--- | :--- | :--- |
| studentGPA | yes | also conforms to style guide |
| i | yes | acceptable name for an iterator |
| MAX_AGE | yes | acceptable name for a constant |
| _addSomeNumbers | yes | ..but don't begin with underscore |
| const | no | const is a keyword in C |
| stuff1 | yes | ...but doesn't meet style guide |
| 52CardDeck | no | begins with a number |
| programming101 | yes | also conforms to style guide |
| av4ri4813 | yes | ...but doesn't meet style guide |
| get$ | no | $ is not a number or letter |
| end Pointer | no | spaces are not allowed |

---

|[Next Topic](/02_Variables/03_Data_types.md)|
|---|
