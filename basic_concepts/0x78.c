#include <stdio.h>

int myFunc(int x)
{
	return 10 + x;
}

int main()
{
	printf("The function returns: %d", myFunc(20));// Outputs 30
	return 0;
}
