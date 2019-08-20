|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# Recursion

* A function that calls itself, directly or indirectly is called **"recursive"**
* Each new function call will create an entirely new set of automatic variables with a temporary storage class
* **Pros:**
    1. Less code
    2. Requires fewer variables
    3. Can replace complex nesting code
    4. Recursive solutions are typically more "elegant"
    5. Some programming functions lend themselves naturally to recursive algorithms
* **Cons:**
    1. Usually slower
    2. More difficult to debug
    3. More memory is required
    4. Possibility for infinite errors
    5. Logic is more difficult to grasp

### Requirments and Guidelines

* Requirements for recusion
    * Must always have at least one "base case"
        * *base case*: (the condition in which a recursive function stops calling itself)
    * Must always have at least one recursive function call

* Guidelines for recursion
    * Ff statements are commonly used to end recursion
    * Recursion should make the problem simpler

### Examples

* Let's talk about fact() here

```c
int fact(int n)
{
    //base case
    if(0 == n )
    {
        return 1;
    }
    //recursive call
    else
    {
        return n * fact(n - 1);
    }
}
// 1! == 1
// 3! == 3 * 2! == 3 * 2 * 1! == 3 * 2 * 1 * 0! == 3 * 2 * 1 * 1
// n! == n(n – 1)! == n * (n – 1) * (n – 2)! * … 0!
```
---
* **EX 1: FINAL COUNTDOWN**

```c
///Iterative Function Example 1///
// Final Countdown

int main(void)
{
    int countNum = 0;
    int i = 0;
    printf(“Countdown from “);
    scanf(“%d”, &countNum);

    for (i = countNum; i > 0; i--)
    {
        printf(“%d\n”, i);
    } 
    printf(“BLAST OFF!”);

    return 0;
}

///recursive function example 1 v1///
//Final Countdown

void count_down(int startNum);      //take note of this

int main(void)
{
    int countNum = 0;
    printf(“countdown from “);
    scanf(“%d”, &countNum);

    count_down(countNum);       //...and this

    return 0;
}

///recursive function example 1 v2///
//final countdown
void count_down(int startNum)
{
    if (startNum > 0)
    {
        printf(“%d\n”, startNum);
        count_down(startNum – 1);
    }
    else
    {
        printf(“BLAST OFF!\n”);
    }

    return;
}
```

---
* **EX 2: POW**

```c
///iterative function example 2///
//pow

int main(void)
{
    int base, exp, i; // forgive me
    long powResult = 1;
    printf(“Ex. 2^3, 9^0:\t“);
    scanf(“%d^%d”, &base, &exp);
    if (exp > 1)
    {
        powResult = base;
    }
    for (i = 2; i <= exp; i++)
    {
        powResult *= base;
    } 
    printf(“Ans: %ld”, powResult);

    return 0;
}

///recursive function example 2 v1///
//pow
long pow(int base, int exp)
{
    if (0 == exp)
    {
        return 1;
    }
    else if (exp > 0)
    {
        return base * \
            pow(base, exp – 1);
    }
    else
    {
        return 1;
    }
}

///recursive function example 2 v2///
//pow
int main(void)
{
    int base, exp, i; // forgive me
    long powResult = 1;
    printf(“Ex. 2^3, 9^0:\t“);
    scanf(“%d^%d”, &base, &exp);
    powResult = pow(base, exp);

    printf(“Ans: %ld”, powResult);

    return 0;
}
```

---
* **EX 3: FACTORIAL**

```c
///iterative function example 3///
//factorial!
int main(void)
{
    int factNum, i; // forgive me
    int factResult = 1;
    printf(“factorial this… “);
    scanf(“%d”, &factNum);
    for (i = 2; i <= factNum; i++)
    {
        factResult *= i;
    } 
    printf(“Ans: %d”, factResult);
    return 0;
}

///recursive function example 3 v1///
//factorial!
int factor(int factThis)
{
    int answer = 1;
    if (factThis > 1)
    {
        answer = factThis * \ factor(factThis – 1);
    }
    return answer;
}

///recursive function example 3 v2///
//factorial!
int factor(int factThis);

int main(void)
{
    int factNum = 0;
    int factResult = 1;

    printf(“factorial this… “);
    scanf(“%d”, &factNum);

    factResult = factor(factNum);
    printf(“Ans: %d”, factResult);
    return 0;
}
```

---
* **EX 4: IT'S NATURAL**

```c
///iterative function example 4///
//it's natural
int main(void)
{
    int numNum = 0;
    int i = 0;
    int sumNatNum = 0;
    scanf(“%d”, &numNum);
    for (i = 1; i <= numNum; i++)
    {
        sumNatNum += i;
    }
    printf(“ans: %d”, sumNatNum);
    return 0;
}

///recursive function example 4 v1///
//it's natural
int sum_nats(int howMany)
{
    int answer = 1;
    if (howMany > 1)
    {
        answer = howMany + \ sum_nats(howMany – 1);
    }
    return answer;
}

///recursive function example 4 v2///
//it's natural
int sum_nats(int howMany);
int main(void)
{
    int numNum = 0;
    int sumNatNum = 0;
    scanf(“%d”, &numNum);
    sumNatNum = sum_nats(numNum);
    printf(“Ans: %d”, sumNatNum);
    return 0;
}
```

---
# Demo Lab 3: Recursion

```c
int fibonacci_number(int sequenceNumber);
```

* Purpose
    * Define *fibonacci_number()* as a recursive function that returns a Fibonacci number of position "sequenceNumber"
    * Allow the user to choose how many numbers are calculated
* Parameters
    * Fibonacci Sequence number position to calculate
* Return Value
    * sequenceNumber
    * -1 if sequenceNumber is unrealistic
* The Fibonacci Sequence:
    * Starts with 0 and 1 then each subsequent number is calculated by adding the two previous sequence numbers
    * F(n) = F(n-1) + F(n-2)

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/08_Functions/demonstration_labs/Lab_3_fibonacci_recursive.md" rel="Solution to Demo lab3"> Solution to Demo lab3 </a>

---

# Complete Performance Lab: Recursion

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/08_Functions/performance_labs/lab8c/Lab21.md" rel="Recursion Lab"> Recursion Lab </a>

* Proceed to performance_labs/lab8c/ and follow the instructions 
