#include <stdio.h>
/**
 * main - sizeof operator
 *
 * Return: success (0)
 */
int main(void)
{
	int myInt;
	float myFloat;
	double myDouble;
	char myChar;

	printf("SizeOf int= %lu\n", sizeof(myInt));
	printf("Sizeof float= %lu\n", sizeof(myFloat));
	printf("SizeOf double= %lu\n", sizeof(myDouble));
	printf("SizeOf char= %lu\n", sizeof(myChar));
	return (0);
}
