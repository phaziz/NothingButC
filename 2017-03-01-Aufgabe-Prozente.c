#include <stdio.h>
#include <stdlib.h>

// Beispiel Array lt. Angaben in Aufgabe... zum Testdurchlauf
double einkommen_miete[6][2] = 
    {
        {4200.0, 1200.0},
        {900.0, 340.0},
        {1800.0, 600.0},
        {3600.0, 1100.0},
        {2700.0, 800.0},
        {5900.0, 1300.0}
    };

int main(void)
{
    setbuf(stdout, NULL);
    system("cls");

    int anzahlGruppen = 5;
    int staffelung = 1000;
    int gruppe;
    double prozente[anzahlGruppen];
    double summeEinkommen[anzahlGruppen], summeMiete[anzahlGruppen];

    for (int i = 0; i < anzahlGruppen; i++)
    {
        summeEinkommen[i] = 0;
        summeMiete[i] = 0;
    }

    for (int i = 0; i < anzahlGruppen; i++)
    {
        gruppe = einkommen_miete[i][0] / staffelung;

        if(gruppe > anzahlGruppen)
        {
            gruppe = anzahlGruppen;
        }

        summeEinkommen[gruppe] = summeEinkommen[gruppe] + einkommen_miete[i][0];
        summeMiete[gruppe] = summeMiete[gruppe] + einkommen_miete[i][1];
    }

    for (int i = 0; i < anzahlGruppen; i++)
    {
        prozente[i] = summeMiete[i] / summeEinkommen[i] * 100;
    }

    printf("\n\n");

    printf("\t\t-------------------------------------------\n");
    printf("\t\tEinkommensgruppe\tProzentualer Anteil\n");
    printf("\t\t-------------------------------------------\n");
    
    for(int i = 0; i < anzahlGruppen; i++)
    {
        printf("\t\t  %d\t\t\t  %.2lf%%\n", i, prozente[i]);
    }

    printf("\t\t-------------------------------------------\n\n");

    return EXIT_SUCCESS;
}