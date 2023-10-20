#include <stdio.h>

//Function declaration
int myFunc(int, int);

//Main Function
int main()
{
	int sum = myFunc(10, 5);
	printf("Sum is: %d", sum);

	return 0;
}

//Function definition
int myFunc(int x, int y)
{
	return x + y;
}
