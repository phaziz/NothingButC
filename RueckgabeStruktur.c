#include <stdio.h>
#include <stdlib.h>
struct adresse
{
	char vname[30];
	char nname[30];
	char plz[7];
	char ort[30];
	int geburtsjahr;
} adressen;

void ausgabe(struct adresse *struct_ptr)
{
	printf("\n\nSie gaben ein:\n\n");
	printf("Vorname..........:%s", (*struct_ptr).vname);
	printf("Nachname.........:%s", (*struct_ptr).nname);
	printf("PLZ..............:%s", (*struct_ptr).plz);
	printf("Ort..............:%s", (*struct_ptr).ort);
	printf("Geburtsjahr......:%d", (*struct_ptr).geburtsjahr);
}

struct adresse *eingabe(void)
{
	static struct adresse *adressen;
	//malloc() reserviert Speicher Parameter=Speichergröße, Rückgaberwert = Startadresse des res. Speichers
	adressen = malloc(sizeof(struct adresse));
	printf("Vorname: ");
	fgets(adressen->vname,30,stdin);
	printf("Nachname: ");
	fgets(adressen->nname,30,stdin);
	printf("PLZ: ");
	fgets(adressen->plz, 7, stdin);
	printf("Ort: ");
	fgets(adressen->ort,30,stdin);
	printf("Geburtsjahr: ");
	do{
		scanf("%4d",&adressen->geburtsjahr);
	}while(getchar()!='\n');

	return adressen;
}

int main(void) {
	setbuf(stdout, NULL); //Ausgabebuffer ausschalten
	struct adresse *adresse1;
	struct adresse *adresse2;
	adresse1=eingabe();
	adresse2=eingabe();

	ausgabe(adresse1);
	ausgabe(adresse2);

	return EXIT_SUCCESS;
}
