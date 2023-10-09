#include <stdio.h>
#include <string.h>
/**
 * main - Compare strigs
 *
 * Return: success 0.
 */
int main(void)
{
	char str1[] = "Felix";
	char str2[] = "Felix";
	char str3[] = "Fel";

	/* Compare str1 and str2, and print the result */
	printf("%d\n", strcmp(str1, str2)); /* Returns 0 (the strings are equal */

	/* Compare str1 and str3, and print the result */
	printf("%d\n", strcmp(str1, str3));
	return (0);
}


