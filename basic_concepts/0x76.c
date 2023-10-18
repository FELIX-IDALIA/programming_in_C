#include <stdio.h>
#include <string.h>

void myFunction(char name[], int age)
{
	printf("Hello %s. You are %d years old.\n", name, age);
}

int main()
{
	myFunction("Odhiambo", 21);
	myFunction("Idalia", 22);
	myFunction("Felix", 23);
	return 0;

}
