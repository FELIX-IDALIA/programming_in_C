#include <stdio.h>
/**
 * main -starting point
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	int age = 18;
	int year = 4;
	/**
	 *To combine both text and a variable,
	 *separate them with a comma
	 *inside the printf() function:
	 */
	printf("I'm %d years old.\n", age);
	printf("I'm in my %dth year of study.", year);
	return (0);
}
