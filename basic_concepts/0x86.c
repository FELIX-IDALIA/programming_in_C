#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fle;

	// Open a file in writing mode
	fle = fopen("idalia.txt", "w");

	// Write some text to the file
	fprintf(fle, "Happy Mashujaa Day");

	// Close the file
	fclose(fle);
}
