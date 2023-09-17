#include <stdio.h>
/**
 * main - entry point
 *
 * Return: returns (0), success
 */
int main(void)
{
	int time = 22;

	if (time < 10)
	{
		printf("Good morning.");
	}
	else if (time < 20)
	{
		printf("Good day.");
	}
	else
	{
		printf("Good evening.");
	}
	return (0);
	/* Outputs "Good evening" */

}

