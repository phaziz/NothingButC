/*
 ============================================================================
 Name        : schaltjahr2.c
 Author      : Ren� Sch�lke
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL); //Ausgabebuffer ausschalten
	int jahr;
	printf("Bitte Jahr eingeben:");
	scanf("%d",&jahr);

	if(jahr%400==0)
	{
		printf("Jahr ist Schaltjahr");
	}
	else
	{
		if(jahr%4==0 && jahr%100!=0)
		{
			printf("Jahr ist Schaltjahr");
		}
		else
		{
			printf("Jahr ist kein Schaltjahr");
		}
	}
	return EXIT_SUCCESS;
}