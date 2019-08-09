#include <stdio.h>

int main(void)
{
	char myFavoriteWord[] = {"formula1"};


	printf("My favorite word is %s \n", myFavoriteWord);

	// Null?
	//printf("At 9 is %s \n", myFavoriteWord[25]);

	// size_t is an unsigned integer type of at least 16 bits
	size_t size = sizeof myFavoriteWord / sizeof myFavoriteWord[0];
	printf("Size of array is: %d \n", size);

	int i = 0;
	// length
	for (i = 0; myFavoriteWord[i] != '\0'; ++i);
	printf("Length of string %d\n", i);

	return 0;

}
