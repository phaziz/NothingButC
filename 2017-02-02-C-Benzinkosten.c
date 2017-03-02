/*
 * Einbindung Header-Dateien
 */
# include <stdio.h>
# include <locale.h>

/*
 * Hauptfunktion main()
 */
int main()
{
    setlocale(LC_NUMERIC, "");

    printf("\n\n\n");

    double  verbrauchbenzin = 6.2, 
            verbrauchdiesel = 4.7, 
            preisdiesel = 1.07, 
            preisbenzin = 1.35, 
            kilometergesamt = 40000,
            benzinkosten,
            dieselkosten;

    printf("\t- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    printf("\t\tBenzinkosten | Dieselkosten 40.000 KM\n");
    printf("\t- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");

    printf("\t>>Gegeben Dieselvariante:\n\n");
    printf("\t\t>>Diesel: %.2f KM Fahrleistung\n\t\t>>%.2f L Verbrauch Diesel\n\t\t>>%.2f EUR je Liter Diesel.\n", kilometergesamt, verbrauchdiesel, preisdiesel);

    // Berechnung Diesel
    dieselkosten = ( ( ( kilometergesamt / 100 ) * verbrauchdiesel ) * preisdiesel );

    // Ausgabe
    printf("\n\tDie Diesel-Verbrauchskosten betragen: %.2f EUR\n", dieselkosten);
    printf("\n\n\t>>Gegeben Benzinvariante:\n");
    printf("\n\t\t>>Benzin: %.2f KM Fahrleistung\n\t\t>>%.2f L Verbrauch Benzin\n\t\t>>%.2f EUR je Liter Benzin.\n", kilometergesamt, verbrauchbenzin, preisbenzin);
    
    // Berechnung Benzin
    benzinkosten = ( ( ( kilometergesamt / 100 ) * verbrauchbenzin ) * preisbenzin );

    // Ausgabe
    printf("\n\n\tDie Benzin-Verbrauchskosten betragen: %.2f EUR", benzinkosten);
    
    printf("\n");
    
    if(dieselkosten < benzinkosten){
        printf("\n\t>> Die Dieselkosten sind guenstiger als die Benzinkosten!");
        printf("\n\t>> Die Kostenersparnis betraegt: %.2f EUR", (benzinkosten - dieselkosten));
    } else {
        printf("\n\t>> Die Benzinkosten sind guenstiger als die Dieselkosten!");
        printf("\n\t>> Die Kostenersparnis betraegt: %.2f EUR", (dieselkosten - benzinkosten));
    }
    
    printf("\n\t- - - - - - - - - - - - - - - - - - - - - - - - - - - -");
    printf("\n\n\n");
    return 0;
}