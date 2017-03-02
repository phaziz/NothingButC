#include <stdio.h>
#include <stdlib.h>

char brett[8][8];  //1. Dimension 8 Zeilen, 2 Dimension 8 Spalten

//initialisiert das Spielfeld und befüllt die Felder mit dem Buchstaben O
void init(void)
{
	for(int zeile=0;zeile<8;zeile++)
	{
		for(int spalte=0;spalte<8;spalte++)
		{
			brett[zeile][spalte]='O';
		}
	}
}

//Abfrage der Zeilennummer auf die der Spieler sein Spielstein setzen möchte
int zeile(void)
{
	int z;
	printf("Zeile: ");
	scanf("%d", &z);
	fflush(stdin);
	return z;
}

//Abfrage der Spaltennummer auf die der Spieler sein Spielstein setzen möchte
int spalte(void)
{
	int s;
	printf("Spalte: ");
	scanf("%d", &s);
	fflush(stdin);
	return s;
}

//Ermittelt den Gewinnstand bzw. ob vier gleiche Spieltsteine senkrecht oder waagerecht zusammenhängend liegen
int erg(int sp)
{
	char zeichen;
	int reihe=0;

	if(sp<0)
	{
		zeichen='A';
	}
	else
	{
		zeichen='B';
	}

	for(int zeile=0; zeile <8;zeile++)
	{
		if(reihe<4)
		{
			reihe=0;
		}
		for(int spalte=0;spalte<8;spalte++)
		{
			if(brett[zeile][spalte]==zeichen)
			{
				reihe++;
			}
			else if(reihe<4)
			{
				reihe=0;
			}
		}

		for(int zeile=0; zeile <8;zeile++)
		{
				if(reihe<4)
				{
					reihe=0;
				}
				for(int spalte=0;spalte<8;spalte++)
				{
					if(brett[spalte][zeile]==zeichen)
					{
						reihe++;
					}
					else if(reihe<4)
					{
						reihe=0;
					}
				}

			}
	}
	return reihe;
}

//Ausgabe der Spielsituation
void ausgabe(int i, int j, int sp)
{
	if(sp<0)
	{
		brett[i][j]='A';
	}
	if(sp>0)
	{
		brett[i][j]='B';
	}
	printf("\n");

	for(int zeile=0;zeile<8;zeile++)
	{
		printf("\n");
		for(int spalte=0;spalte<8;spalte++)
		{
			printf(" %c", brett[zeile][spalte]);
		}
	}
}

int main(void) {
	setbuf(stdout, NULL); //Ausgabebuffer ausschalten

	int runde = 64;
	int z;
	int s;
	int spieler = 1;

	init();
	while((runde>0) && (erg(spieler)<4))
	{
		z=zeile();
		s=spalte();
		spieler*=-1;
		ausgabe(z, s, spieler);
		printf("\n");
		runde--;
	}

	if(runde>0)
	{
		printf("Gewonnen!");
	}
	else
	{
		printf("Unentschieden!");
	}

	return EXIT_SUCCESS;
}
