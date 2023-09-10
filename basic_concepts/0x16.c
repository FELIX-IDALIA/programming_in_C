#include <stdio.h>
#include <stdbool.h>
/**
 * main - Comparing boolean variables
 *
 * Return: success (0)
 */
int main(void)
{
	bool isMercedesFast = true;
	bool isFerrariFast = true;

	/* Find out if both Mercedes and Ferrari are fast */
	printf("(%d) Represents True", isMercedesFast == isFerrariFast);
	return (0);
}
