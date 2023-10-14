#include <stdio.h>
/**
 * main - Acccessing array element.
 *
 * Return: success (0).
 */
int main(void)
{
	int num[4] = {25, 50, 75, 100};

	/* Get the value of the first element */
	printf("%d\n", *num);
	/* Get the value of the second element in num */
	printf("%d\n", *(num + 1));

	/* Get the value of the third element in num */
	printf("%d\n", *(num + 2));

	/* and so on */
	return (0);
}
