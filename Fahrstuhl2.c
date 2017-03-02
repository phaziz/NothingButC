/*
 ============================================================================
 Name        : Fahrstuhl2.c
 Author      : René Schülke
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL); //Ausgabebuffer ausschalten
	int etage;
	printf("Drücken Sie die Taste für Ihre Etage:");
	scanf("%d", &etage);


	switch(etage)
	{
	case 0:
		printf("Etage 0\n");
		//break;
	case 1:
		printf("Etage 1\n");
		//break;
	case 2:
		printf("Etage 2\n");
		break;
	case 3:
		printf("Etage 3\n");
		break;
	case 4:
		printf("Etage 4\n");
		break;
	case 5:
		printf("Etage 5\n");
		break;
	default:
		printf("keine gültige Etage\n");
		break;
	}

	return EXIT_SUCCESS;
}
