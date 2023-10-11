#include <stdio.h>
/**
 * main - Multiple inputs.
 *
 * Return: success (0).
 */
int main(void)
{
	/* Create an int and a char variable */
	int num;
	char chr;

	/* Ask the user to type a number AND a character */
	printf("Enter a number AND a character and press enter: \n");

	/* Get and save the number AND character entered */
	scanf("%d %c", &num, &chr);

	/* Print the number */
	printf("Your number is:    %d\n", num);

	/* Print the character */
	printf("Your character is: %c", chr);
	return (0);


}
