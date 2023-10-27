#include <stdio.h>

enum Level
{
	HIGH = 150,
	MEDIUM = 100,
	LOW = 50
};

int main()
{
	enum Level myLevel = LOW;

	printf("%d", myLevel); // Outputs 50

	return 0;
}
