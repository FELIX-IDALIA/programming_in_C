#include <stdio.h>

int summ(int x, int y)
{
	return x + y;
}

int main()
{
	int sum = summ(10, 8); //store function in a variable

	printf("Sum is = %d", sum); //Output 10 + 8
	return 0;
}
