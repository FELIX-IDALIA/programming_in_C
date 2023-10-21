#include <stdio.h>
#include <string.h>

int main()
{
FILE *fptr;

// Create a file
fptr = fopen("filename.txt", "w");

// Close the file
fclose(fptr);
return 0;
}
