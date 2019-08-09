# Performance Lab 

* Utilize MyStringHeader.h from the demo lab
* Add the following to MyStringHeader.h

```c
int reverse_it(char * forwardString, int strLen);
```

* Return Value
    * 0 on success
    * -1 forwardString is NULL
    * -2 if strLen is zero or less
* Parameters - A non-NULL terminated string and the length of that string
* Purpose - Print a non-null terminated string backwards and then print a newline
    * Write a program that reads a string from user input, call reverse_it(), and then call print_the_count()
    * When satisfied, run "Unit Test Code 2.c"