#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: success (0).
 */
int main(void)
{
	int num[] = {10, 20, 30};

	printf("Index 0 is: %d\n", num[0]);

			num[0] = 50;

			printf("Index 0 has been changed to: %d", num[0]);

			return (0);
}
