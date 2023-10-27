#include <stdio.h>
enum Level
{
	HIGH,
	MEDIUM,
	LOW
};

int main()
{
	enum Level myLevel = LOW;

	printf("%d", myLevel);

	return 0;
}
