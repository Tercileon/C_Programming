#include <stdio.h>

int main(void)
{
	int classAges[12] = {24,26,28,22,29,24,30,35,33,39,34,29};

	char quoteArray[256] = {"The\ncake\nis\na\nlie"};
	quoteArray[256] = '\0';

	int counter = 0;

	while(counter < 12)
	{
		printf("%d \n", classAges[counter]);
		counter++;
	}

	printf("%s \n", quoteArray);

	return 0;
}
