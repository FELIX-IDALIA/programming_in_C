#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: success (0)
 */
int main(void)
{
	char greetings[] = "Hello World";

	greetings[0] = 'F';
	printf("Output is: %s", greetings);
	return (0);
}
