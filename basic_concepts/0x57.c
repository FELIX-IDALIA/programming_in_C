#include <stdio.h>
/**
 * main - Output a number by the user
 *
 * Return: success (0).
 */
int main(void)
{
	/* Create an integer variable that will store the number entered by user */
	int num;

	/* Ask the user to type a number */
	printf("Enter a number: \n");

	/* Get and save the number the use types */
	scanf("%d", &num);

	/* Output the number the user entered */
	printf("Your number is: %d", num);
	return (0);

}
