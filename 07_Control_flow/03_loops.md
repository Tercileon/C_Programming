|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Loops
A loop consists of a statement or block called the "loop body".

The "loop body" is executed multiple times depending on a given condition.

Loops are used to represent a method  of executing a statement, block, or algorithm multiple times.

### FOR Loop
For loops utilize a control structure with three components written as expressions:

    initialization (starting point)
    tests the controlling expression
    make adjustments at the end of each loop (i.e. incrementation)

Three components in the head of the *for loop* define the loops actions and number of iterations executed by the loop.

Any of the three components may be omitted but the place-holders must remain there.

    in the words of the infamous Charles Petzold (a WINDOWS PIONEER)
    "three or more? use a for!"

### FOR loops execute blocks of code multiple times:
```c
///for loop syntax///

/*
expression1 is the initial-statement, commonly “i = 0”
expression2 is the condition, evaluated as a boolean expression
expression3 is the iteration-statement, typically increment
*/

for (expression1; expression2; expression3)
{
	statement1;	// Executed when expression2 != 0
}

/* 
Sequence of for loop execution:
	1.  Initialize expression1
	2.  Is expression2 true?
		2.a.  If so,
			2.a.i   execute the code block
			2.a.ii  execute expression3
			2.a.iii go back to 2.
		2.b.  If not, stop looping 
*/

///for loop example///
int i = 0;

for (i = 0; i < 15; i++)
{
    printf("i = %d\n", i + 1);
}
/*
executes the printf statment for all values of i
between 0 and 14, inclusive
*/

///for loop output///
i = 1
i = 2
i = 3
i = 4
i = 5
i = 6
i = 7
i = 8
i = 9
i = 10
i = 11
i = 12
i = 13
i = 14
i = 15
```
## SEE DEMO LAB 5

/*///THREE OR MORE? USE A FOR!///
This lab is more of a thought experiment...
Looking back, what previous labs could have benefited from a 
FOR loop? Were there...arrays to manipulate?...repetitious calculations...
and or places where code was copy-pasta?*/

## COMPLETE PERFORMANCE LAB 15

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/07_Control_flow/performance_labs/Lab15.md" rel="PERFORMANCE LAB 15"> PERFORMANCE LAB 15 </a>

### WHILE Loops
While loops utilize a control structure with one component written as an expression.

The component in the head of the while loop is evaluated:

    if TRUE, the loop of the body is executed and the expression is evaluated again
    if FALSE, the program continues with the statment following the loop body

***The EXPRESSION is a requirement.***

#### Note: Take care to avoid infinite loops.

### WHILE Loops execute "loop bodies" multiple times
```c
///while loop syntax///
// expression1 is the condition, evaluated as a boolean expression
while (expression1)		// See above comment
{				// Executed when expression1 != 0
	statement1;		// Regular code
	iteration-statement;	// Ensure you control expression1
}

/* Terminating conditions must be included in the loop body */

/* 
Sequence of for loop execution:
	1.  Is expression1 true?
		2.a.  If so,
			2.a.i   execute the code block
			2.a.iii go back to 1.
		2.b.  If not, stop looping 
*/

///while loop example///
int i = 512;
int counter = 0;

while (i)	// If i != 0…
{		// …execute this
	// Print i
	printf(“i = %d\n”, i);
	// (i /= 2) == (i = i / 2)
	i /= 2;
	counter++; // 1 run counted
	// Is i still != 0?
}		

// Print the number of iterations
printf(“%d runs.\n”, counter);

///while loop example output///
i = 512
i = 256
i = 128
i = 64
i = 32
i = 16
i = 8
i = 4
i = 2
i = 1
//this goes through a total of 10 loops.
```

## COMPLETE PERFORMANCE LAB 16

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/07_Control_flow/performance_labs/Lab16.md" rel="PERFORMANCE LAB 16"> PERFORMANCE LAB 16 </a>

### DO WHILE Loops
Do while loops utilize a control structure with one of the components written as an expression.

The "loop body" is executed prior to evaluating the control structure.

The component in the head of the do while loop is evaluated:

    if TRUE, the loop body is executed and the expression is evaluated again
    if FALSE, the program continues with the statement following the loop body

***The EXPRESSION is a requirement***

#### Note: take great care to avoid INFINITE LOOOOOOOOOOOOOPS!

```c
///do while loop syntax///
// The loop body will always execute at least once
do				// Execute the following “loop body”…
{				
	statement1;		 // Regular code
	iteration-statement;	// Ensure you control expression1
}
while (expression1);		// …then evaluate expression1
/* Terminating conditions must be included in the loop body */
/*
Sequence of for loop execution:
	1.  Execute the code block
	2.  Is expression1 true?
		2.a.  If so,
			2.a.i   execute the code block again
			2.a.iii go back to 2.
		2.b.  If not, stop looping 
*/

///do while loop example///
char alpha[] = {“Shadow Warrior”};
int i = 0;          // Counting variable

do		
// Execute this…
}
// Print one array element
	printf(“%c\n”, alpha[i]);
// Increment the counter
	i++;
// Is alpha[i] != 0?
}
//stops at null
while(alpha[i]);
                
// Print the number of iterations
printf(“%d characters.\n”, i);

///do while loop example output///
S
h
a
d
o
w

W
a
r
r
i
o
r
14 characters.
```

## COMPLETE PERFORMANCE LAB 17

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/07_Control_flow/performance_labs/Lab17.md" rel="PERFORMANCE LAB 17"> PERFORMANCE LAB 17 </a>

### When do I use FOR loops?

When there is a known number of iterations.
```c
/*how many maximum iterations do i need to traverse this string?*/
char myString[31] = {"try hardened slugs each movie"};
int i = 0;						//incrementing variable

for (i = 0; i < 31; i += 4)		//what are the values of i?
{
	printf("%c", myString[i]);	//prints one array element
}
putchar(10);					//prints a newline
/* BONUS: what is the output of this FOR loop?*/
```

### When do I use a WHILE loop?

When there are unknown number of iterations ranging from 0-1++.
```c
/*function to print a null-terminated string */
int print_string(char* string)
{
	int i = 0;				//incrementing variable
	if (string)				//checks for NULL pointer
	{
		while (string[i])	//stops on NULL character
		{
			putchar(string[i++]);	prints one element
		}
	}
}
```
### When do I use a DO WHILE loop?

When there is an unknown number of iterations ranging from 1 to 1++.
```c
int inputNumber = 0;					//temporarily holds user input
int runningTotal = 0;					//holds the total
/*continues adding the user input to running sum until 0 s entered*/
do
{									//loop body runs at least once
	printf("enter an interger to add to the total \n");
	printf("(0 to exit) \n");		//this is the exit condition
	scanf("%d", &inputNumber);		//takes user input
	runningTotal += inputNumber;	//adds user input to total
}
while (inputNumber);				//do again if inputNumber != 0
printf("the total is: %d \n", runningTotal);
```

### Why should I use FOR instead of WHILE or vice-versa?

There isn't a definitive guideline when to use a particular type of loop over another.

common convention:

	-use a FOR when the compiler knows how many iterations to run
	-use a WHILE or DO WHILE when the compiler doesn't know
