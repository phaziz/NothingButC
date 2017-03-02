#include <stdio.h>
#include <stdlib.h>

struct konto
{
	int kontonummer;
	char name[50];
	char vorname[50];
	double guthaben;
};

int main(void) {
	setbuf(stdout, NULL); //Ausgabebuffer ausschalten
	struct konto konto1;
	printf("Bitte Kontonummer eingeben: ");
	scanf("%d", &konto1.kontonummer);
	printf("Bitte Vorname eingeben: ");
	scanf("%s",&konto1.vorname[0]);
	printf("Bitte Nachname eingeben: ");
	scanf("%s",&konto1.name[0]);
	printf("Bitte das Guthaben eingeben: ");
	scanf("%lf", &konto1.guthaben);

	printf("Die Kontonummer ist: %d\n", konto1.kontonummer);
	printf("Kontoinhaber ist: %s %s\n", konto1.vorname, konto1.name);
	printf("Das Guthaben beträgt: %.2lf\n",konto1.guthaben);
	return EXIT_SUCCESS;
}
