#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: success (0).
 */
int main(void)
{
	int age = 43; /* An int variable */
	int* ptr = &age; /* Pointer variable, name ptr, stores age address */

	/* Output the value of age (43) */
	printf("%d\n", age);

	/* Output the memory address of age */
	printf("%p", &age);

	/* Output the memory address of age with the pointer */
	printf("%p\n", ptr);
	return (0);


}
