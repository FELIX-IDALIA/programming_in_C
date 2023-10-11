#include <stdio.h>
#include <string.h>
/**
* main - Take string input.
*
* Return: success (0).
*/
int main(void)
{
char fullName[30];

printf("Type your full name: \n");
scanf("%s", fullName);

printf("Name is %s", fullName);
return (0);
}

