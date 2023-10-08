#include <stdio.h>
#include <string.h>
/**
 * main - Entry point.
 *
 * Return: success (0).
 */
int main(void)
{
	char alphabets[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int len = strlen(alphabets), size = sizeof(alphabets);

	printf("Length is: %d\n", len);
	printf("Size is:   %d", size);
	return (0);
}
