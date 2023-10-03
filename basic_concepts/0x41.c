#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: success (0),
 */
int main(void)
{
	int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

	matrix[0][0] = 9;

	printf("After Element Change, we get: %d", matrix[0][0]); /* output 9 */
	return (0);
}
