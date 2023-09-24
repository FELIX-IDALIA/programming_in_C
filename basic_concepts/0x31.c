#include <stdio.h>
/**
 * main - entry point
 *
 * Return: success (0).
 */

int main(void)
{
	int i;

	for (i = 0; i <= 5; i++)
	{
		switch (i)
		{
			case 0:
			printf("First iteration prints:\t\t%d\n", i);
			break;

			case 1:
			printf("Second iteration prints:\t%d\n", i);
			break;

			case 2:
			printf("Third iteration prints:\t\t%d\n", i);
			break;

			case 3:
			printf("Fourth iteration prints:\t%d\n", i);
			break;

			case 4:
			printf("Fifth iteration prints:\t\t%d\n", i);
			break;

			case 5:
			printf("Sixth iteration prints:\t\t%d\n", i);
			break;

			default:
			printf("IT'S A LOOP");
		}
	}

	return (0);
}


