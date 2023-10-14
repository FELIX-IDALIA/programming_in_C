#include <stdio.h>
/**
 * main - Memory storage.
 *
 * Return: success (0).
 */
int main(void)
{
	int num[4] = {10, 20, 30, 40};

	/* Get the size of the num array */
	printf("%lu", sizeof(num));

	return (0);
}
