#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL); //Ausgabebuffer ausschalten
	int jahr;
	printf("Bitte Jahr eingeben:");
	scanf("%d",&jahr);
	if(((jahr%4==0) && (jahr%100 !=0))||(jahr%400==0))
	{
		printf("%d ist ein Schaltjahr", jahr);
	}
	else
	{
		{
			printf("%d ist kein Schaltjahr", jahr);
		}
	}
	return EXIT_SUCCESS;
}
