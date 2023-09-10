#include <stdio.h>
/**
 * main - find out if a person is old enough to vote
 *
 * Return: success (0)
 */
int main(void)
{
	int myAge = 19;
	int votingAge = 18;

	/* Return 1 (True), meaning 19years old are allowed to vote */
	printf("Returns (%d) which represents True", myAge >= votingAge);
	return (0);
}
