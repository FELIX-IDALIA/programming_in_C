#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: success (0);
 */
int main(void)
{
	char car[] = "Volvo";
	int i;

	for (i = 0; i < 5; ++i)
	{
		printf("%d\n", i);
		printf("-----------------------------");
		printf("Output is: %c\n", car[i]);
	}
	return (0);
}
