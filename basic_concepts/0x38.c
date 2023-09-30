#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: success (0).
 */
int main(void)
{
	int myNumber[] = {25, 50, 75, 100}, i;

	for (i = 0; i < 4; i++)
	{
		printf("Output is: %d\n", myNumber[i]);
	}
	return (0);
}
