#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: success (0)
 */
int main(void)
{
	/*
	 * This example shows how you can use if...else
	 *	to find out if a number is positive or negative.
	 */
	int myNum = 10; /* Is this positive or negative number? */

	if (myNum > 0)
	{
		printf("The value is a positive number.");
	}
	else if (myNum > 0)
	{
		printf("The value  is a negative number.");
	}
	else
	{
		printf("The value is 0.");
	}
	return (0);
}
