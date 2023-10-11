#include <stdio.h>
#include <string.h>
/**
 * main - Take string input.
 *
 * Return: success (0).
 */
int  main(void)
{
	/* Create a string */
	char fName[10];

	/* Ask the user to input some text */
	printf("Enter name: \n");

	/* Get and save the text */
	scanf("%s", fName);

	/* Output the text */
	printf("My name is %s", fName);

	return (0);

}
