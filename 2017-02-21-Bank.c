/*
 ============================================================================
 Name        : Bank.c
 Author      : René Schülke
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int konten[100];
int anzahlKonten=0;

int menuAnzeigen(void)
{
	int auswahl;
	printf("Kontenverwaltung mal ander!!\n");
	printf("==================================\n\n");
	printf("1 Neues Konto anlegen\n");
	printf("2 alle Konten anzeigen\n");
	printf("3 Programm beenden\n");
	printf("Bitte wählen Sie einen entsprechenden Menüpunkt:");
	scanf("%d", &auswahl);
	fflush(stdin);
	return auswahl;
}
void neuesKonto(void)
{
	int kontonummer;
	printf("Bitte geben Sie die Kontonummer ein: ");
	scanf("%d", &kontonummer);
	konten[anzahlKonten]=kontonummer;
	anzahlKonten++;
}
void alleKontenAnzeigen(void)
{
	printf("Kontonr.\t\tName\t\tVorname\n");
	for(int i=0;i<anzahlKonten;i++)
	{
		printf("%d\n", konten[i]);
	}
}
int main(void) {
	setbuf(stdout, NULL); //Ausgabebuffer ausschalten
	int auswahl;

	do
	{
		auswahl=menuAnzeigen();
		switch(auswahl)
		{
		case 1:
			neuesKonto();
			break;
		case 2:
			alleKontenAnzeigen();
			break;
		case 3:
			break;
		default:
			printf("Wählen Sie einen gültigen Menüpunkt");
		}
	}while(auswahl!=3);
	return EXIT_SUCCESS;
}
