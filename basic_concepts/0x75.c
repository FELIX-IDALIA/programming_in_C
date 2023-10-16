#include <stdio.h>
#include <string.h>
/**
 * myFunction - Takes string characters with name as parameter.
 * @name: character
 *
 * Return: NULL
 */
void myFunction(char name[])
{
	printf("Hello %s\n", name);
}
/**
 * main - Entry point.
 *
 * Return: Success (0).
 */
int main(void)
{
	myFunction("Felix");
	myFunction("Idalia");
	myFunction("Ashley");
	return (0);
}
