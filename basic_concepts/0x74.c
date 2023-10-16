#include <stdio.h>
/**
 * myFunction - A function to be called
 *
 * Return: success (0)
 */
int myFunction(void)
{
	printf("I have been called\n");
	return (0);
}
/**
 * main - main function
 *
 * Return: success (0).
 */
int main(void)
{
	myFunction();
	myFunction();
	myFunction();
	return (0);
}
