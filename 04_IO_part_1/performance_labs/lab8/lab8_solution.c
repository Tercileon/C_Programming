#include <stdio.h>

int main(void)
{
    char first_name[256] = {0};
    char middle_name[256] = {0};
    char last_name[256] = {0};

    printf("Enter a full name, seperating each by a <tab> \n");
    // _flushall(); // Clears all open input streams, leaving them open * This no longer works. We will go into this more once we learn while loops
    scanf("%32s\t%32s\t%32s", &first_name, &middle_name, &last_name);

    printf("Your name is: \n %s\t\n%s\t\n%s\t\n", first_name, middle_name, last_name);

    return 0;
}
