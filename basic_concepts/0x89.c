#include <stdio.h>
#include <string.h>

// Main function
int main()
{
	FILE *fle;

	// Open a file for reading
	fle = fopen("idalia.txt", "r");

	// Store a file
	char theFile[1000];

	// Read file
	fgets(theFile, 1000, fle);

	// Print content of the file
	printf("%s", theFile);
	
	fclose(fle);
	
	return 0;
}
