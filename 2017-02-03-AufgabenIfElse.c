/*
 * Einbindung Header-Dateien
 * Saftvergleich.exe
 */
# include <stdio.h>

/*
 * Hauptfunktion main()
 */
int main()
{
    printf("\n\n\n");

    double  AEPFEL_KG_KOSTEN = .85, 
            BIRNEN_KG_KOSTEN = .95, 
            AEPFEL_MENGE = 1.5, 
            BIRNEN_MENGE = 1.2,
            APFELSAFT, 
            BIRNENSAFT;

    printf("\t- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    printf("\t\tSaftkosten | Aepfel und Birnen\n");
    printf("\t- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");

    printf("\t>>Gegeben Angaben Apfelsaft:\n\n");
    printf("\t\t>>Menge Aepfel: %.2f\n\t\t>>%.2f Kosten je Kilo\n", AEPFEL_MENGE, AEPFEL_KG_KOSTEN);

    // Berechnung Apfelsaft
    APFELSAFT = ( AEPFEL_MENGE * AEPFEL_KG_KOSTEN );

    // Ausgabe
    printf("\n\tDie Kosten fuer einen Liter Apfelsaft betragen: %.2f EUR\n\n\n", APFELSAFT);
   

    printf("\t>>Gegeben Angaben Birnensaft:\n\n");
    printf("\t\t>>Menge Birnen: %.2f\n\t\t>>%.2f Kosten je Kilo\n", BIRNEN_MENGE, BIRNEN_KG_KOSTEN);

    // Berechnung Birnensaft
    BIRNENSAFT = ( BIRNEN_MENGE * BIRNEN_KG_KOSTEN );

    // Ausgabe
    printf("\n\tDie Kosten fuer einen Liter Birnensaft betragen: %.2f EUR\n", BIRNENSAFT);
   
    if(BIRNENSAFT < APFELSAFT){
        printf("\n\t>> Die Birnensaft-Kosten sind guenstiger als die Apfelsaft-Kosten!");
        printf("\n\t>> Die Kostenersparnis betraegt: %.2f EUR", (APFELSAFT - BIRNENSAFT));
    } else if (BIRNENSAFT > APFELSAFT) {
        printf("\n\t>> Die Apfelsaft-Kosten sind guenstiger als die Birnensaft-Kosten!");
        printf("\n\t>> Die Kostenersparnis betraegt: %.2f EUR je Liter Fruchtsaft!", (BIRNENSAFT - APFELSAFT));
    } else {
        printf("\n\t>> Die Saft-Kosten sind identisch!");
    }
    
    printf("\n\t- - - - - - - - - - - - - - - - - - - - - - - - - - - -");
    printf("\n\n\n");
    return 0;
}