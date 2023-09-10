#include <stdio.h>
/**
 * main - we use the equal(==) operator
 *			to compare different values.
 * Return: success (0)
 */
int main(void)
{
	/* Returns 1 (True), beacuse 10 is equal to 10 */
	printf("Returns: %d (True)\n", 10 == 10);
	/* Returns 0 (False), because 10 is not equal to 15 */
	printf("Returns: %d (False)\n", 10 == 15);
	/* Returns 0 (False), because 5 is not equal to 55 */
	printf("returns: %d (False)", 5 == 55);
	return (0);

}


