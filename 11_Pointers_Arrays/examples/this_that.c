#include <stdio.h>


int main()
{
    int this = 9;
    int that = 0;
    int * int_ptr;
    int_ptr = &this;
    that = *int_ptr;
    *int_ptr = 1;

    return 0;
}
