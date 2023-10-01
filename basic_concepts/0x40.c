#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: success (0).
 */
int main(void)
{
	int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

	printf("Output is: %d", arr[1][1]); /* Output 5 */
	return (0);
}
