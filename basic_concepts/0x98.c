#include <stdio.h>
#include <string.h>

struct myStructure
{
	char name[100];
	int date;
	char month[100];
	int year;

};

int main()
{
	struct myStructure s1 = {"FELIX IDALIA", 13, "AUGUST", 1998};
	struct myStructure s2;

	s2 = s1;

	printf("NAME:  %s\nDATE:  %d\nMONTH: %s\nYEAR:  %d\n", s1.name, s1.date, s1.month, s1.year);
	printf("\n");
	printf("NAME:  %s\nDATE:  %d\nMONTH: %s\nYEAR:  %d", s2.name, s2.date, s2.month, s2.year);
}
