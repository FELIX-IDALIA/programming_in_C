#include <stdio.h>
#include <string.h>

struct myStructure
{
	int myNum;
	char myLetter;
	char myString[30];
};

int main()
{
	// Create a structure variable and assign values to it
	struct myStructure s1 = {13, 'B', "Some Text"};

	// Modify Values
	s1.myNum = 30;
	s1.myLetter = 'C';
	strcpy(s1.myString, "Some New Text");

	// Print Values
	printf("NUMBER: %d\nLETTER: %c\nSTRING: %s", s1.myNum, s1.myLetter, s1.myString);

	return 0;
}
