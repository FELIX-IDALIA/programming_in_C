#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fle;

	fle = fopen("idalia.txt", "a");

	fprintf(fle, "\nYesterday was Mashujaa Day!");

	fclose(fle);

	return 0;
}

