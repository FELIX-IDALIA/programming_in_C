#include <stdio.h>

int sum(int);

int main()
{
	int result = sum(10);
	printf("Result = %d", result);
	return 0;
}

int sum(int k)
{
	if (k > 0)
	{
		return k + sum(k - 1);
	}
	else
	{
		return 0;
	}

		

}
