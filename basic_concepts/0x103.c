#include <stdio.h>

enum Level
{
	HIGH = 10,
	MEDIUM,  // Now 11
	LOW      // Now 12
};

int main()
{
	enum Level myLevel = LOW;

	printf("%d", myLevel);

	return 0;
}
