/*
 * Umfangberechnung -> Formel: ((2 * pi) * r)
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
    int radius = 5;
    float umfang, pi = 3.14159265359;
    umfang = (2*pi) * (radius);
    printf("\n\n\tUmfang: %.20f\n\n", umfang);
 
    return 0;
}