#include <stdio.h>
#include <string.h>

/**
 * main - Entry point.
 *
 * Return: success (0).
 */
int main(void)
{
	char str1[20] = "Hello";
	char str2[] = "World";

	/* Concatenate str2 to str1 (result is stored in str1) */
	strcat(str1, str2);

	/* Print str1 */
	printf("st1 combined with str2 we get: %s", str1);
	return (0);
}
