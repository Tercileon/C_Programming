#include <stdio.h>

int add_numbers(int x, int y);

int main(void)
{
	int i = 0;
	int num = 0;
	int returnValue = 0;

	for(i = 0; i < 10; i++)
	{
		returnValue = add_numbers(num, i);
		printf("%d\n", returnValue);
	}

	return 0;
}

int add_numbers(int x, int y)
{
	return (x + y);
}

