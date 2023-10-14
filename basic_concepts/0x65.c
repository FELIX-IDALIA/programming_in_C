#include <stdio.h>
/**
 * main - Dereference operator (*).
 *
 * Return: success (0).
 */
int main(void)
{
	int age = 43; /* Variable declaration */
	int* ptr = &age; /* Pointer declaration */

	/* Reference: Output the memory address of age */
	printf("%p\n", ptr);

	/* Dereference: Output the value of age with the pointer (43) */
	printf("%d\n", *ptr);
	return (0);
}
