#include <stdio.h>
/**
 * main - Memory size of an int.
 *
 * Return: success (0).
 */
int main(void)
{
	/* Create an int variable */
	int myInt;

	/* Get the memory size of an int */
	printf("%lu", sizeof(myInt));

	return (0);

}
