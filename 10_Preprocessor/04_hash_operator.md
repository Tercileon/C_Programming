|[Table of Contents](/00-Table-of-Contents.md)|
|---|

---

# (#) OPERATOR

This is where the magic happens. #token becomes "token". It will make sense a bit later on, but for now just remember that a hash (#) will string-ize something.

This is called a *hash* operator or a *stringizing* operator.

This unique preprocessor directive sets the corresponding token in quotation marks.

The # operator effectively converts its token into a string. The preprocessor then changes #token to "token".

* In our first example, we see a MACRO in the form of *DEBUG_INT*:
```c
/// HASH OPERATOR EXAMPLE #1 ///

#define DEBUG_INT(x) \
printf(#x “ is %d”, x)

int main(void)
{
    int getNum = 0;
    _flushall();
    scanf(“%d”, &getNum);
    DEBUG_INT(getNum);

    return 0;
}

///this is after the above is processed///

/* Post-Preprocessor */
#line 2 “hash_ex1.c”

int main(void)
{
    int getNum = 0;
    _flushall();
    scanf(“%d”, &getNum);
    printf(“getNum” “ is %d\n”,\
getNum);
    return 0;
}

/// HASH OPERATOR OUTPUT #1 ////

90
getNum is 90
```
* Our second example has an *ERROR* MACRO:
```c
/// HASH OPERATOR EXAMPLE #2 ///
#define <stdlib.h>
#define ERMAC(d) {puts(#d \
“ error”); exit(EXIT_FAILURE);}
int main(void)
{
    int x = 3;
    if (0 == x)
        ERMAC(x);

    
    printf(“%.5f”, 10.0 / x);
    return 0;
}

///the above is then seen and evaluated by the pre-processor///

/* Post-Preprocessor */
#line 2 “hash_ex2.c”

int main(void)
{
    int x = 3;
    if (0 == x)
    {puts(“x” \
“ error”); exit(EXIT_FAILURE);}

    printf(“%.5f”, 10.0 / x);
    return 0;
}

/// HASH OPERATOR OUTPUT #2 ////

0
x error
The program ‘[3032] hash_ex2.exe’ has exited with code 1 (0x1).
```
* The third example shows *stringizing* a token:
```c
/// HASH OPERATOR EXAMPLE #3 ///

#define STRING(s) #s

int main(void)
{
    char str[] = {STRING(It!)};

    puts(str);

    return 0;
}

///the following is after the preprocessor evaluates the code above///

/* Post-Preprocessor */
#line 2 “hash_ex3.c”

int main(void)
{
    char str[] = {“It!”};

    puts(str);

    return 0;
}

/// HASH OPERATOR OUTPUT #3 ////

It!
```

---

<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/10_Preprocessor/05_double_hash.md" rel="Continue to Next Topic"> Continue to Next Topic </a>
