/*
 * Bruttopreis aus Warenkorb errechnen
 */

/*
 * Einbindung Header-Dateien
 */
# include <stdio.h>
# include <math.h>

/*
 * Hauptfunktion main()
 */
int main()
{
    double flaeche = 1600.00, seite;
    seite = sqrt(flaeche);
    
    printf("\n\n\tSeitenlaenge =\t%.2f cm\n", seite );
    
    return 0;
}