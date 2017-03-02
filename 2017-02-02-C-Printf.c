/*
 * PRINTF
 */

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
    
    float nettobetrag = 5;
    float bruttobetrag = nettobetrag * 1.19;
    
    // Einfacher Text mit Zeilenumbruch
    printf("Eine Text\nZeile");
    
    // Einfacher Text mit Zeilenumbruch im Quelltext
    printf("\nEine Text \
Zeile\n");
    
    // %, um Werte von Variablen auszugeben
    printf("\n\tDer Rechnungsbetrag lautet Netto:\t%.2f EUR", nettobetrag);
    printf("\n\tDer Rechnungsbetrag lautet MwSt:\t%.2f EUR", (bruttobetrag - nettobetrag) );
    printf("\n\tDer Rechnungsbetrag lautet Brutto:\t%.2f EUR", bruttobetrag);
    
    
    printf("\n\n\n");
    
    return 0;
}