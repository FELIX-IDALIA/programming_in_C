#include <stdio.h>

void myFunction(int num[5])
{
	for (int i = 0; i < 5; i++)
	{
		printf("My numbers are: %d\n", num[i]);
	}

}

int main()
{
	int num[5] = {10, 20, 30, 40, 50};
	myFunction(num);
	return 0;
}
