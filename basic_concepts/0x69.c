#include <stdio.h>
/**
 * main - How pointers are related to an array.
 *
 * Return: success (0).
 */
int main(void)
{
	int myNumbers[4] = {25, 50, 75, 100};

	/* Get the memory address of the myNumbers array */
	printf("%p", myNumbers);

	/* Get the memory address of the first array element */
	printf("%p", &myNumbers[0]);
	return (0);
}
