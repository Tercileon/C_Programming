#include <stdio.h>

// void printArray(_____, int arrayDimension);

int main(void)
{
	int computerScienceCourses[] = {1003, 1023, 1033, 1063, 1073};
	float studentGPAs[] = { 2.7, 3.1, 2.9, 4, 3.9, 2.89, 3.55 };
	char cardinalDirections[4] = {0};
//	char catchPhrase[10] = {76, 101, 103, 101, 110};
	char catchPhrase[10] = { 76, 101, 103, 101, 110, 46, 46, 46, 46 };
	int testArray[5] = {100};
	int i = 0;

	int myCourse = computerScienceCourses[1]; // Sets myCourse to 1023
	studentGPAs[1 + 2] = 3.91; // Sets index 3 to value 3.9
	i = 1;
	cardinalDirections[0] = 78;
	cardinalDirections[i] = 83;
	cardinalDirections[i + i] = 'E';
	cardinalDirections[i + 2] = 'W';

	printf("\nThese are the Computer Science Course numbers:\n");
	for (i = 0; i < 5; i++)
	{
		printf("Course #%d is %d.\n", i + 1, computerScienceCourses[i]);
	}

	printf("\nThese are the student GPAs:\n");
	for (i = 0; i < 7; i++)
	{
		printf("GPA #%d is %f.\n", i + 1, studentGPAs[i]);
	}

	printf("\nThese are the cardinal directions:\n");
	for (i = 0; i < 4; i++)
	{
		printf("Cardinal direction #%d is %c.\n", i + 1, cardinalDirections[i]);
	}
	
	catchPhrase[5] = 100;
	printf("\nThis is the catch phrase:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%c", catchPhrase[i]);
	}
	printf("...\n");

	printf("%s...\n", catchPhrase);

	printf("\nDone.\n");
	getchar();
}

