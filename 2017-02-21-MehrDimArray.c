/*
 ============================================================================
 Name        : MehrDimArray.c
 Author      : René Schülke
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define ARBEITER 3
#define TAGE 5
//Dekalration vom Array Zeitkonnto mit 3 Zeilen und 5 Spalten
int zeitkonto[ARBEITER][TAGE];

void error(int n) {
   printf("%d (?) Falsche Eingabe!!\n",n);
}

void arbeiterWochenStunden(void)
{
	int zeile,spalte,tmp;

	//For Schleife zum durchlaufen der Zeilen
	for (zeile=0;zeile<ARBEITER; zeile++)
	{
		tmp=0;
		printf("Wochenarbeitszeit von Arbeiter Nr. %d\n", zeile+1);
		printf("--------------------------------------------\n");
		//For Schleife zum durchlaufen der Spalten
		for(spalte=0;spalte<TAGE ;spalte++)
		{
			printf("|%d Std.", zeitkonto[zeile][spalte]);
			tmp += zeitkonto[zeile][spalte];
		}
		printf("| = Ges. %d Std.\n\n", tmp);
	}
}

void arbeiterTagesDurchschnitt(void)
{
   int i,j,tmp;
	//For Schleife zum durchlaufen der Zeilen
   for(i=0; i < ARBEITER; i++)
   {
      tmp=0;
      printf("Durchschn. pro Tag/Woche Arbeiter: %d\n",i+1);
      printf("-------------------------------------------\n");
		//For Schleife zum durchlaufen der Spalten
      for(j=0; j < TAGE; j++)
      {
         tmp+=zeitkonto[i][j];
      }
      printf("Durchschn. v. Arbeiter %d p. Tag: %.1f "
             "Std/Tag\n\n" , i+1, (float)tmp / TAGE);
   }
}

void teamTagesDurchschnitt(void)
{
   int i,j,tmp;
	//For Schleife zum durchlaufen der Zeilen
   for(i=0; i < TAGE; i++)
   {
      tmp=0;
      printf("Durchschn. Arbeitszeit aller Mitarbeiter pro "
             "Tag %d = ", i+1);
		//For Schleife zum durchlaufen der Spalten
      for(j=0; j < ARBEITER; j++)
      {
         tmp += zeitkonto[j][i];
      }
      printf("%.1f Std.\n\n",(float)tmp/ARBEITER);
   }
}

void TeamWochenStunden(void)
{
   int i, j, tmp=0;

   printf("Gesamtstunden aller Arbeiter in der Woche\n");
   printf("-----------------------------------------\n");
	//For Schleife zum durchlaufen der Zeilen
   for(i=0; i < ARBEITER; i++)
   {
		//For Schleife zum durchlaufen der Spalten
      for(j=0; j < TAGE; j++)
      {
         tmp+=zeitkonto[i][j];
      }
   }
   printf("Gesamtstunden aller Arbeiter i. d. Woche: "
          " %d Std.\n" , tmp);
}

void ArbeiterStundenUebersicht(void)
{
   int arb,tag;

   printf("Welcher Arbeiter: ");
   scanf("%d", &arb);
   printf("Welcher Tag: ");
   scanf("%d", &tag);
   if(arb > ARBEITER) {
      printf("Die Firma hat nur %d Arbeiter\n", ARBEITER);
      return;
   }
   else if(tag > TAGE)
   {
      printf("Es werden nur %d Tage gespeichert\n", TAGE);
      return;
   }
   printf("Arbeiter Nr.%d hat am Tag %d : ", arb, tag);
   //zeitkonto[arb-1][tag-1] direkter Zugriff auf das gewünschte Feld
   printf("%d Stunden gearbeitet!\n\n", zeitkonto[arb-1][tag-1]);
}

int main(void) {
	setbuf(stdout, NULL); //Ausgabebuffer ausschalten
	int abfrage, i, j;
	//For Schleife zum durchlaufen der Zeilen
	   for(i=0; i < TAGE; i++) {
	      printf("\n\tTag %d in der Woche\n",i+1);
	      printf("\t-------------------\n\n");
			//For Schleife zum durchlaufen der Spalten
	      for(j=0; j < ARBEITER; j++) {
	         printf("Arbeiter Nr.%d in Std.: ",j+1);
	         scanf("%d",&zeitkonto[j][i]);
	         if(zeitkonto[j][i] > 24)
	            printf("Ein Tag hat nur 24 Stunden?\n");
	      }
	   }
	   do {
	      printf("\n\n");
	      printf("\t-1- Stundenwoche\n");
	      printf("\t-2- Durchschnitt/Tag\n");
	      printf("\t-3- Durchschnitt aller Arbeiter/Tag\n");
	      printf("\t-4- Stunden aller Arbeiter/Woche\n");
	      printf("\t-5- Einzelauswahl eines Arbeiters\n");
	      printf("\t-6- ENDE\n");
	      printf("\n\tIhre Wahl : ");
	      scanf("%1d",&abfrage);
	      printf("\n");

	      switch(abfrage) {
	         case 1  : arbeiterWochenStunden();
	                   break;
	         case 2  : arbeiterTagesDurchschnitt();
	                   break;
	         case 3  : teamTagesDurchschnitt();
	                   break;
	         case 4  : TeamWochenStunden();
	                   break;
	         case 5  : ArbeiterStundenUebersicht();
	                   break;
	         case 6  : break;
	         default : error(abfrage);
	      }
	   } while(abfrage != 6);




	return EXIT_SUCCESS;
}
