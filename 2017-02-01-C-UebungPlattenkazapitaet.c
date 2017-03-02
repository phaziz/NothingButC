/*
 * Festplattenkazapität errechnen
 * Bytes * Sektoren * Sektoren
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
    double spuren = 3712;
    double sektoren = 108;
    double byte = 512;
    double kazapitaet, megabyte;
    
    kazapitaet = (byte*sektoren*spuren);
    megabyte = (kazapitaet / 1024 / 1024);
    
    printf("\n\n\tKazapitaet Byte:\t%.2f Byte", kazapitaet);
    printf("\n\tKazapitaet MegaByte:\t%.2f Megabyte\n\n", megabyte);
 
    return 0;
}