#include <stdio.h>
#include <string.h>

// Main function
int main()
{
	FILE *fle;

	// Open file in read mode
	fle = fopen("idalia.txt", "r");

	// Store the content of the file
	char theFile[1000];

	//Read the content and print it
	while (fgets(theFile, 1000, fle))
	{
		printf("%s", theFile);
	}

	// Close the file
	fclose(fle);

	return 0;


	
}
