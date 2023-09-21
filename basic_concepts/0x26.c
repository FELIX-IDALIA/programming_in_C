#include <stdio.h>
/**
 * main - entry point
 *
 * Return: success (0)
 */
int main(void)
{
	int day = 4;

	switch (day)
	{
		case 6:
			printf("Today is Saturday.");
			break;
		case 7:
			printf("Today is Sunday.");
			break;
		default:
			printf("None of the above");
	}
	return (0);
}
