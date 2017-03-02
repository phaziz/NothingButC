/*
 ============================================================================
 Name        : Hangman.c
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
	char gesuchtesWort[65];
	char tempSpeicher[65];
	char buchstabe;
	int versuche=10;
	int i;
	printf("Bitte das Suchwort eingeben: ");
	scanf("%s", &gesuchtesWort[0]);
	fflush(stdin);
	system("cls");
	for(i=0; gesuchtesWort[i]!='\0';i++)
	{
		tempSpeicher[i]='_';
		printf("_ ");
	}
	tempSpeicher[i]='\0';

	do
	{
		printf("Bitte einen Buchstaben eingeben: ");
		buchstabe=getchar();
		fflush(stdin);
		int status =1;

		for(int i=0;gesuchtesWort[i]!='\0';i++)
		{
			if(gesuchtesWort[i]==buchstabe)
			{
				tempSpeicher[i]=buchstabe;
				status=0;
			}
		}

		versuche=versuche-status;
		int unterstrich=0;
		for(i=0;tempSpeicher[i]!='\0';i++)
		{
			printf("%c", tempSpeicher[i]);
			if(tempSpeicher[i]=='_')
			{
				unterstrich++;
			}
		}
		if(unterstrich==0)
		{
			printf("Herzlichen Glückwunsch du hast gewonnen!");
			break;
		}
		else
		{
			printf("Du hast noch %d Versuche!", versuche);
		}
	}while(versuche!=0);

	return EXIT_SUCCESS;
}
