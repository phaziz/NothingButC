/*
 * Einbindung Header-Dateien
 * Zahlenteilen.exe
 */
# include <stdio.h>
# include <math.h>

/*
 * Hauptfunktion main()
 */
int main()
{
    printf("\n\n\n");

    int EINGABE_ZAHL; 
    float ERGEBNIS;
    
    printf("\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    printf("\t\tTeilbar ohne Rest durch 3?\n");
    printf("\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");

    printf("\t>>Bitte geben Sie eine beliebige Ganzzahl ein:");
    scanf("%i", &EINGABE_ZAHL);
    fflush(stdin);
    printf("\t>>Danke\n");
    
    // Berechnung 
    ERGEBNIS = ( (int) EINGABE_ZAHL % 3 );

    // Ausgabe
    printf("\n\tDas Rechenergebnis %.i %% 3 = %.2f\n\n", EINGABE_ZAHL, ERGEBNIS);
   
    if(ERGEBNIS != 0){
        printf("\n\t>> Die von Ihnen eingegebene Zahl ist nicht ohne Rest durch 3 teilbar!");
        printf("\n\t>> Es bleibt ein Rest von: %.2f", ERGEBNIS);
    } else {
        printf("\n\t>> Die von Ihnen eingegebene Zahl ist ohne Rest durch 3 teilbar!");
    }
    
    printf("\n\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
    printf("\n\n\n");
    return 0;
}