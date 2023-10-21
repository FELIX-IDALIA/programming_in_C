#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fle;
	fle = fopen("idalia.txt", "w");

	fprintf(fle, "Today is not Mashujaa Day, HAHAHA!");

	fclose(fle);

	return 0;
}
