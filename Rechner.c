#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL); //Ausgabebuffer ausschalten
	int    opcode;
	double zahl1;
	double zahl2;
	printf("Dieses Programm rechnet mit zwei Zahlen.\n");
	printf("Bitte geben Sie die Art\nder Rechenoperation an:\n");
	printf(" 1 : +\n 2 : -\n 3 : *\n 4 : /\n");
	printf("Rechenoperation...............: ");
	scanf("%i", &opcode);
	printf("Bitte die erste Zahl eingeben : ");
	scanf("%lf", &zahl1);
	printf("Bitte die zweite Zahl eingeben: ");
	scanf("%lf", &zahl2);
	int stellen=4;
	switch(opcode)
    {
		case 1:
			printf("Ergebnis: %lf\n", zahl1+zahl2);
			break;
		case 2:
			printf("Ergebnis: %lf\n", zahl1-zahl2);
			break;
		case 3:
			printf("Ergebnis: %lf\n", zahl1*zahl2);
			break;
		case 4:
			if(zahl2)
			{
				printf("Ergebnis: %.lf\n", zahl1/zahl2);
			}
			else
			{
				printf("Division durch null: nicht erlaubt!\n");
			}
			break;
		default:
			printf("Falsche Eingabe!\n");
    }

	return EXIT_SUCCESS;
}
