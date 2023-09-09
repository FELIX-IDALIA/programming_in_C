#include <stdio.h>
/**
 * main - Constants
 *
 * If you don't want others(or yourself) to change existing
 *	variables values,you can use the const keyword.
 *
 * This will declare the variable as "constant", which means
 *	unchangeable and read-only
 *
 *Return: success (0)
 */
int main(void)
{
	const int myNum = 15; /*myNum will be 15 */
	const int minutesPerHour = 59;
	const float PI = 2.14;

	printf("%d\n", myNum);
	printf("%d\n", minutesPerHour);
	printf("%.2f\n", PI);
	return (0);
}

