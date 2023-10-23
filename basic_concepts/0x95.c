#include <stdio.h>
#include <string.h>

// Create a structure called myStructure
struct myStructure
{
	int myNum;
	char myLetter;
};

int main()
{

	// Create a structure variable of myStructure called s1
	struct myStructure s1;
	
	// Create a structure variable of myStructure called s2
	struct myStructure s2;

	// Assign values to members of s1
	s1.myNum = 13;
	s1.myLetter = 'B';

	// Assign values to members of s2
	s2.myNum = 14;
	s2.myLetter = 'C';
	
	// Print values of s1
	printf("s1 number = %d\n", s1.myNum);
	printf("s1 letter = %c\n", s1.myLetter);
	
	printf("\n");

	// Print values of s2
	printf("s2 number = %d\n", s2.myNum);
	printf("s3 letter = %c\n", s2.myLetter);

	return 0;

}
