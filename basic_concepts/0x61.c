#include <stdio.h>
#include <string.h>
/**
 * main -Entry point.
 *
 * Return: success (0).
 */
int main(void)
{
	char fName[30];

	printf("Enter your full name: \n");
	fgets(fName, sizeof(fName), stdin);

	printf("Hello %s", fName);
	return (0);
}
