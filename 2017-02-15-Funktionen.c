#include <stdio.h>
#include <stdlib.h>

int vergleich(int wert1, int wert2, int wert3)
{
    if(wert1 < wert2)
    {
        if(wert1 < wert3)
        {
            return wert1;
        }
        else
        {
            return wert3;
        }
    }
    else
    {
        if(wert2 < wert3)
        {
            return wert2;
        }
        else
        {
            return wert3;
        }
    }
}

int main(void)
{
    setbuf( stdout, NULL );

    int wert1, wert2, wert3, ergebnis;

    printf("\n\n\t\t");
    printf("Bitte geben Sie mir Wert 1: ");
    printf("\n\n\t\t");
    scanf("%d", &wert1);
    fflush(stdin);

    printf("\n\n\t\t");
    printf("Bitte geben Sie mir Wert 2: ");
    printf("\n\n\t\t");
    scanf("%d", &wert2);
    fflush(stdin);

    printf("\n\n\t\t");
    printf("Bitte geben Sie mir Wert 3: ");
    printf("\n\n\t\t");
    scanf("%d", &wert3);
    fflush(stdin);

    ergebnis = vergleich(wert1, wert2, wert3);

    printf("\n\n\t\t");
    printf("Die kleinste Zahl ist: %d", ergebnis);
    printf("\n\n\t\t");
    
    return EXIT_SUCCESS;
}