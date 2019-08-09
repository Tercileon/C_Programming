#include <stdio.h>

int main(void)
{
	int userInput = 0;
	int errNum = 0;
	printf("Enter a character:  ");
	userInput = getchar();
	userInput++;
	printf("The next sequential character is:  ");
	putchar(userInput);

	getchar();
	return (0);
}
