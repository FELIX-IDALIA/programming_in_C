#include <stdio.h>
/**
 * main - switch statement
 *
 * Return: success (0).
 */
int main(void)
{
	int day = 4;

	switch (day)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;

			/* Output "Thursday" (day 4) */
	}
	return (0);
}
