#include <stdio.h>
#include <string.h>
/**
 * main - Copy strings.
 *
 * Return: success (0).
 */
int main(void)
{
	char str1[30] = "University Of Nairobi";
	char str2[20] = "Maseno University";

	/* Copy str1 to str2 */
	strcpy(str2, str1);

	/* Print str2 */
	printf("Copy str1 to str2 we get: %s", str2);
	return (0);
}
