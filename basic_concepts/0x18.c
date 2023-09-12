#include <stdio.h>
/**
 * main - if myAge is greater than or equal to 18
 *
 * Return: success (0)
 */
int main(void)
{
	int myAge = 25;
	int votingAge = 18;

	if (myAge >= votingAge)
	{
		printf("Old enough to vote!");
	}
	else
	{
		printf("Not old enough to vote");
	}
	return (0);
}
