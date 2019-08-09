<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

# Breaks and Continues
BREAKS provide an early exit from FOR, WHILE, and DO WHILE

* Causes the innermost enclosing loop or switch to be exited immediately.

* Useful to stop looping when a condition is met.

* CONTINUES will cause a loop to go the top of the loop.

* Useful to skip input.
```c
int i = 0;               //iterating variable
int firstNumber = 0;    //numerator
int secondNumber = 0;   //denominator

for(i = 0; i < 10; i++) //loops 10 times
{
    printf("x %% y \n");    //prints necessary format
    _flushall();            //clears all open streams
    scanf("%d %% %d", &frstNumber, &secondNumber);
    if (secondNumber == 0)  //checks for "divide by 0"
    {
        continue;           //skips "divide by 0"
    }
    printf("result: %2f \n", (float)firstNumber / secondNumber);
}
```
## DEMO LAB 6
```c
/*Create a tailored times table
REQUIREMENTS:
    - Input an integer "x".
    - Print the product of x and y when y ranges from 1 through 10.
    - Exit if the user inputs an integer larger than 10.
    - Use continue to ignore any zeroes or negative numbers 
    in x, while repeating the loop.
*/

#include <stdio.h>

int main()
{
    int x = 0;      // User inputted number
    int y = 1;      // Increment var
    printf("Enter a number between 1-10: ");
    scanf("%4d", &x);
    // Prevents user from enter a number over 10... exits
    if (x > 10)
    {
        printf("Senpai!! You can't enter numbers larger than 10");
        return 0;
    }
    // print x * y, increment y until equal to 10.
    while (y <= 10)
    {
        // Add 1 to x until positive
        if (x <= 0)
        {
            printf("Skipping Number %d! Adding 1.\n", x);
            x++;
            continue;
        }
        printf("%d x %d = %d\n", x, y, x*y);
        y++;
    }
}
```

## COMPLETE PERFORMANCE LAB 18

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/07_Control_flow/performance_labs/Lab18.md" rel="PERFORMANCE LAB 18"> PERFORMANCE LAB 18 </a>
