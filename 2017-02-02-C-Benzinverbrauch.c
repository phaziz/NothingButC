/*
 * Einbindung Header-Dateien
 */
# include <stdio.h>

/*
 * Hauptfunktion main()
 */
int main()
{
    printf("\n\n\n");

    double km, liter, ergebnis;

    printf("\t- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    printf("\tBenzinverbrauch...\n");
    printf("\t- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");

    // Eingabe Aufforderung
    printf("\tBitte geben Sie die gefahrenen Kilometer ein: ");
    scanf("%lf", &km);
    fflush(stdin);
    printf("\n\t\t>> Danke!\n\n");

    // Eingabeaufforderung
    printf("\tBitte geben Sie die verbrauchten Liter Kraftstoff ein: ");
    scanf("%lf", &liter);
    fflush(stdin);
    printf("\n\t\t>> Danke!\n\n");

    // Berechnung
    ergebnis = ( ( liter / km ) * 100 );

    // Ausgabe
    printf("\tDer Verbrauch je 100Km lautet: %.2f Liter je 100 Km", ergebnis);

    // Wertung
    if(ergebnis < 5){
        printf("\n\n\t\t>> Das sind sehr gute Verbrauchswerte!\n");
    } else if(ergebnis > 5 && ergebnis < 9){
        printf("\n\n\t\t>> Das sind noch annehmbare Verbrauchswerte!\n");
    } else if(ergebnis > 9 && ergebnis < 15 ){
        printf("\n\n\t\t>> Das sind schlechte Verbrauchswerte!\n");
    } else if(ergebnis > 15 ){
        printf("\n\n\t\t>> Das sind sehr, sehr schlechte Verbrauchswerte!\n");
    }

    printf("\n\t- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    printf("\n\n\n");
    return 0;
}