#include <stdio.h>
/**
 * main - Change the value of array elements with pointers.
 *
 * Return: success (0).
 */
int main(void)
{
	int num[4] = {25, 50, 75, 100};

	/* Change the value of the first element to 13 */
	*num = 13;

	/* Change the value of the second element to 17 */
	*(num + 1) = 17;

	/* Get the value of the first element */
	printf("%d\n", *num);

	/* Get the value of the second element */
	printf("%d\n", *(num + 1));
	return (0);
}
