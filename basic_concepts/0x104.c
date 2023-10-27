#include <stdio.h>

enum Level
{
	LOW = 1,
	MEDIUM,
	HIGH
};

int main()
{
	enum Level myLevel = HIGH;

	switch (myLevel)
		{
			case 1:
				printf("Prints LOW");
			break;

			case 2:
				printf("Prints MEDIUM");
			break;

			case 3:
				printf("Prints HIGH");

		}

		return 0;
}
