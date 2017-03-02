/*
 * Einbindung Header-Dateien
 */
# include <stdio.h>

/*
 * Hauptfunktion main()
 */
int main()
{
    // Deklaration
    int zahl;
    char buchstabe;
    float euroZuDollar;
    float mwst;

    // Wertezuweisung
    zahl = 25;
    buchstabe = 'B';
    euroZuDollar = 1.4588;
    mwst = 19;

    // Verwendung
    printf("Name der Variablen\tTyp\t\t\tWert\n");
    printf("int zahl:\t\tGanzzahl\t\t%d\n", zahl); 
    printf("char buchstabe:\t\tZeichen\t\t\t%c\n", buchstabe);
    printf("float euroZuDollar:\tGleitkommazahl\t\t%.4f\n", euroZuDollar);
    printf("float mwst:\t\tGleitkommazahl\t\t%.0f\n", mwst);
 
    return 0;
}