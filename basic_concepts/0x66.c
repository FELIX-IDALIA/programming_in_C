#include <stdio.h>
/**
 * main - C ponters and arrays.
 *
 * Return: success (0)
 */
int main(void)
{
	int num[4] = {10, 20, 30, 40};
	int i;

	for (i = 0; i < 4; i++)
	{
		printf("%p\n", &num);
	}
	return (0);
}
