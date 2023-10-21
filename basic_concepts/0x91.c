#include <stdio.h>

int main()
{
	FILE *fle;

	// Open a file to read mode
	fle = fopen("text.txt", "r");

	// Print some text if the file does not exist
	if (fle == NULL)
	{
		printf("FILE DOES NOT EXIST!\nPLEASE OPEN AN EXISTING FILE OR CREATE A NEW FILE!");
	}

	return 0;
}
