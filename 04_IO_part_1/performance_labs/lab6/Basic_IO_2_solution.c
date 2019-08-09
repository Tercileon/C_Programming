#include <stdio.h>

int main(void)
{
	int userInput = 0;
	printf("Enter a character:  ");
	userInput = getc(stdin);
	userInput--;
	printf("The previous sequential character is:  ");
	putc(userInput, stdout);

	getchar();
	return (0);
}
