|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Function Pointers and OOC

Now before you do a double take, remember that functions are the backbone of the C language. As such FUNCTION POINTERS can be included as a member of a STRUCT.

These function pointers can be used to operate on STRUCT MEMBERS in a technique known as Object Oriented C (object oriented programming). Remember that code is executed in blocks and blocks are used by programmers to break down problems/goals into smaller, more achievable steps.

```c
struct ModifyNumbers{
    int num1;					// Parameter 1
    int num2;					// Parameter 2
    int results;				// Return value
    int(*mathFunc_ptr)(int x, int y);		// Math operation
};

int add(int num1, int num2) {return (num1 + num2);} // Please…
int sub(int num1, int num2) {return (num1 - num2);} // …forgive…
int mul(int num1, int num2) {return (num1 * num2);} // …this

struct ModifyNumbers case1 = {1, 2, 0, &add};	// 3
struct ModifyNumbers case2 = {2, 3, 0, &sub};	// -1
struct ModifyNumbers case3 = {3, 4, 0, &mul};	// 12

case1.results = case1.mathFunc_ptr(case1.num1, case1.num2);
case2.results = case2.mathFunc_ptr(case2.num1, case2.num2);
case3.results = case3.mathFunc_ptr(case3.num1, case3.num2);
```

---

|[Next Topic](/15_Error_handling/README.md)|
|---|
