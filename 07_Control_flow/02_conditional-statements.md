|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Conditional Statements

### IF statement

* Create conditional jumps

* Tests an expression as TRUE or FALSE

* When the expression is TRUE, the code block will be executed

```c
///minimum if statement syntax///

if (expression)
{
statement1;
}

///basic if statement examples///

if (1 > 0)               //example 1
{
printf("All is alright with the world. \n");
}

if (1)                  //example 2
{
printf("1 evaluates to TRUE. \n");
}

if (i  > u)  		 //example 3
{
printf("i is greater than u. (pun_intended = FALSE) \n");
}

if (i && i == u)         //example 4
{
printf("apparently, this works and i evaluates to TRUE. \n");
}

```

NOTE: Do not leave if statements unwrapped, watch those { } !!

## DEMO LAB 1

IF statement:
* Initialize a char array to zero.
* Safely store a user-input string in the char array.
* Safely print the string  **IF** the first element is not equal to zero (array897[0] != 0).

---

## PERFORMANCE LAB 11

|[Performance Lab 11](/07_Control_flow/performance_labs/Lab11.md)|
|---|

---

### IF-ELSE statements

An if statement may also include an else, these conditional statements test an expression as TRUE or FALSE.

When the expression is TRUE the if code block will be executed...otherwise, the else code block is executed instead.

```c
///if-else statement syntax///

if (expression) //expression is evaluated for true or false
{
    statement1;     //executed when expression is true
}
else
{
    statement2;     //executed when expression is false
}
/* The block containing statement1 is executed when expression is true (expression != 0). Same goes for to the block containing statement2 where the expression is false (expression == 0)*/

///if-else statement examples///

if (i >= u)			//example 1 start
{
    printf("u is no greater than i. \n");
}
else
{
    printf("u is greater than i. \n");
}					//example 1 end

if (i && i == u)	//example 2 start
{
    printf("apparently, this works and i evaluates to true. \n");
}

else
{
    i = u			//example 2 end
}

/* set i equal to u since it's either 0 or not already equivalent */
```

NOTE: Do not leave if-else statements unwrapped {}.

## DEMO LAB 2: EVEN IT OUT

IF-ELSE statement:
* Input a number from the user.
* Determine if the number is odd or even utilizing the "mod" operator  (N00b-tier efficiency).
* Utilizing an IF-ELSE statement:
    * If the number is odd, multiply the number by 2, store the result in the original variable, and print the new number.
    * If the number is even SAY SO!!
* BONUS: Determine if the number is odd or even utilizing a **bitwise** operator instead (god-tier efficiency).

---

## PERFORMANCE LAB 12

|[Performance Lab 12](/07_Control_flow/performance_labs/Lab12.md)|
|---|

### ELSE-IF statements

An if statement may also include multiple else conditions.

else-if  statements tests an if expression as TRUE or FALSE.

When the expression is TRUE, the if code block will be executed.

When the expression is FALSE, the first else-if expression will be tested in turn.

Else-if expressions are tested for TRUE in turn.

The else code block will be executed when the if and all else-if conditions are evaluated to false.

An if statement may also check multiple conditions.

```c
///else-if statement syntax///

if (expression1)
{
    statement1;
}
else if (expression2)
{
    statement2;
}
else
{
    statement3;
}

```

ELSE-IF example:

```c
///else-if statement examples///

if (i > u)
{
    printf("I is greater than u. \n");
}
else if (i < u)
{
    printf("u is greater than i. \n");
}
else
{
    printf("u and i are equal. \n");
}

```

NOTE: Do not leave else-if statements unwrapped {}!

## DEMO LAB 3: WHATS THE DIFFERENCE?

* Initialize ONLY three **int** variables to 0.
* Safely scan user input into variables #1 and #2 utilizing a single line.
* Using a single ELSE-IF statement:
    * If variable #1 is equal to variable #2, assign 0 to variable #3.
    * Otherwise, subtract the smallest from the largest (i.e. 3-2, 42-(-45), (-11)-(-1337), etc...) and assign the result to variable #3.
* Print the value of variable #3 if it is positive otherwise print and ERROR.

---

## PERFORMANCE LAB 13

|[Performance Lab 13](/07_Control_flow/performance_labs/Lab13.md)|
|---|

---

### Switch Statements

Switch statements also create conditional jumps.

Tests an expression or variable against cases.

When the variable is equivalent to a case, the following statements will execute until a break.

Break statements, while optional, can be used to end cases.

A switch case that does not end in a break statement will "fall through" and execute the following cases.

NOTE: Case labels must meet the following criteria:

    -must be unique

    -ends with a COLON

    -have constants/constant expression

    -integral type (integer, character)

    -not a floating point number

    -a switch case should have at most one default label

    -default can be placed anywhere in the switch

    -break statement takes control out of the switch

    -two or more cases may share one break statement

    -nesting (switch within switch) is allowed

    -relational operators are NOT allowed in switch statement

    -Macro identifier are allowed as switch case label

    -const variable is allowed in switch case statements

    -empty switch case is allowed

Switch statements also create **conditional** jumps.

```c
///switch statement syntax///

switch (variable)       //variable is tested against values
{
    case constant1:     //if (variable == constant1)...
            statement1; //..{statement1;}
            break;      //optional; exits if case is met

    case constant2:     // if (variable == constant2)...
            statement2; //..{statement2;}
            break;      //optional; exits if case if met

    default:            //optional; if no case is met...
            statement3; //..{statement3;}
            break;      //optional; exits if case is met
}

///switch statement examples///

switch (binaryInput)
{
    case 1:
            printf("%d = TRUE \n", binaryInput);
            break;
    case 0:
            printf("%d = FALSE \n", binaryInput);
            break;
    default:
            printf("something has gone wrong! \n");
            break;
}
```
## DEMO LAB 4: MAY I SEE A MENU?

* Input an integer from the user
* Create a menu allowing the user to:
    * Print their input as the following...
        * Binary
        * Octal
        * Decimal
        * Hexadecimal
    * Input a new character
    * Input a new number
    * exit

---

## PERFORMANCE LAB 14

|[Performance Lab 14](/07_Control_flow/performance_labs/Lab14.md)|
|---|

---

### When do I use an IF statement?

Whenever you have only ONE condition to act on (1).

```C
if (somethingIsTrue)
{
then_do_this_thing();			//one condition
}

/*i dont want to do anything if it's false */

```
### When do I use an IF-ELSE statement?


Whenever you only have TWO conditions to act on (2).

```c
if (somethingIsTrue)
{
    then_do_this_thing();			//condition one
}
else
{
    otherwise_do_something_else();	//condition two
}

/*used for binary input validation, and error checking */

```
    
### When do I use an ELSE-IF statement?

Whenever you have TWO OR MORE conditions to act on (2+).
    
```c
if (somethingIsTrue)
{
    then_do_this_thing();           //condition one
}
else if (somethingElseisTrue)
{
    then_do_this();                 //condition two
}
else
{
    otherwise_do_this_instead();	//condition three
}

```
    
### Why should I use a SWITCH instead of ELSE-IF?

1.Readability


```c
///switch////

switch (echoNumber)
{
    case 1:
            printf("one\n");
            break;
    case 2:
            printf("two\n");
            break;
    case 3:
            printf("three\n");
            break;
    default:
            printf("???\n");
            break:
}

///ELSE-IF///

if (echoNumber == 1)
{
    printf("one\n");
}
else if (echoNumber == 2)
{
    printf("two\n");
}
else if (echoNumber == 3)
{
    printf("three\n");
}
else
{
    printf("???\n");
}

```

2.Easier to group multiple cases

```c
///switch///

switch (primeNumber)
{
    case1:
    case2:
    case3:
    case5:
            printf("prime\n");
            break;
    case4:
    case6:
            printf("not\n");
            break;
    default:
            printf("???\n");
            beak;
}

///ELSE-IF///

if (primeNumber == 1
    || primeNumber == 2
    || primeNumber == 3
    || primeNumber == 5)
{
    printf("prime\n");
}
else-if (primeNumber == 4
        || primeNumber == 6)
{
    printf("not\n");
}
else
{
    printf("???\n");
}

```

3.Faster.../easier to optimize...

A switch generates a jump table in assembly which is generally faster (depends on use case, compiler and underlying architecture)

4.ELSE-IF does not allow "fall through".

```c
///switch///

switch (countToNum)
{
    case 3:
            printf("three\n");
    case 2:
            printf("two\n");
    case 1:
            printf("one\n");
    case 0:
            printf("launch!\n");
break;

    default:
            printf("???\n");
            break;
}

///ELSE-IF///

if (countToNum == 3)
{
    print("three\n");
    print("two\n");
    print("one\n");
    print("launch!!!\n");
}
else if (countToNum == 2)
{
    print("two\n");
    print("one\n");
    print("launch!!!\n");
}
else if (countToNum == 1)
{
    print("one\n");
    print("launch!!!\n");
}
else if (countToNum == 0)
{
    print("launch!!!\n");
}
else
{
    print("???\n");
}

```

### When should I use ELSE-IF instead of SWITCH?

1. large ranges of cases (switch does not translate well to large ranges).
```c
///IF-EELSE///

if (rngNum >= 1 && rngNum <= 20)
{
    printf(("%d\n"), rngNum); 
}
else
{
    printf("???\n");
}

///SWITCH///

switch (rngNum)
{
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    (etc...etc...)
    case 18:
    case 19:
    case 20:
            printf("%d\n", rngNum);
            break;
    default:
            printf("???\n");
            break;
}

```

2. Conditional expressions (switch only evaluates constants).
```c
///ELSE-IF///

int inputNumber = 0;
scanf("%d", &inputNumber);
printf("number is ");

if (inputNumber > 0)
{
    printf("positive\n");
}
else if (inputNumber < 0)
{
    printf("negative\n");
}
else
{
    printf("zero\n");
}

///SWITCH///
int inputNumber = 0;
scanf("%d", &inputNumber);
printf("Number is ");

switch (inputNumber)
{
    case > 0:
    etc...etc...
}
/*SWITCH will result in a compiling error!*/
```
3. Variable values (switch case values must be literals).
```c
///IF-ELSE///

char char1, char2;
scanf("%1c %1c", &char1, &char2);
printf("are they equal?\n");

if (char1 == char2)
{
    printf("yes\n");
}
else
{
    printf("no\n");
}

///SWITCH///

char char1, char2;
scanf("%1c %1c", &char1, &char2);
printf("are they equal?\n");

switch (char1)
{
    case char2:
    etc...etc...
}

/*SWITCH will result in a compiling error!*/
```
4. Floating point values (floats are technically literals but DONT utilize == or switch with floats).
```c
///IF-ELSE///
float inputDecimal;
scanf("%f", &inputDecimal);
printf("equal to 3.14?\n");

if (inputDecimal > 3.14)
{
    printf("nope\n");
}
else if (inputDecimal < 3.14)
{
    printf("nope\n");
}
else
{
    printf("yes\n");
}

///SWITCH///
float inputDecimal;
scanf("%f", &inputDecimal);
printf("equal to 3.14?\n");

switch (inputDecimal)
{
    case 3.14:
    etc...etc...
}
/*SWITCH will result in a compiling error!*/
```

---

|[Next Topic](/07_Control_flow/05_nested-control-flow.md)|
|---|
