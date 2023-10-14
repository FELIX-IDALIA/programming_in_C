#include <stdio.h>
/**
 * main - Loop through elements of an array.
 *
 * Return: success (0).
 */
int main(void)
{
	int num[4] = {25, 50, 75, 100};
	int *ptr = num;
	int i;

	for (i = 0; i < 4; i++)
	{
		printf("%d\n", *(ptr + i));
	}
	return (0);
}
