#include <stdio.h>

int main(void)
{
	char buff[4];

	printf("Enter string: ");
	fgets(buff, sizeof(buff), stdin);
	printf("Your string was: ");
	fputs(buff, stdout);


	getchar();

	return 0;
}
