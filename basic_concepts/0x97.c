#include <stdio.h>
#include <string.h>

struct myStructure
{
	int myNum;
	int myLetter;
	char myString[30];
};

int main()
{
	// Create a structure variable and assign values to it
	struct myStructure s1 = {13, 'B', "Some Text"};

	// Print Values
	printf("Number is: %d\n", s1.myNum);
	printf("Letter is: %c\n", s1.myLetter);
	printf("String is: %s\n", s1.myString);

	return 0;
}

