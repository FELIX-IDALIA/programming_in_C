#include <stdio.h>

int main()
{
	FILE *fle;

	// Open a file in read mode
	fle = fopen("idalia.txt", "r");

	// Store the content of the file
	char theFile[1000];

	// If the file exists
	if(fle != NULL)
	{
		// Read content and print it
		while(fgets(theFile, 1000, fle))
		{
		printf("%s", theFile);
		}
	}

	// If the file does not exist
	else 
	{
		printf("Not able to open the file.");
	}

	// Close the file
	fclose(fle);
}
