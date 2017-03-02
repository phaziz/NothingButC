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
    int ganzzahl;
    char zeichen;
    float eulerscheZahl;
    
    // Wertezuweisung
    ganzzahl = 9;
    zeichen = 'X';
    eulerscheZahl = 2.718281828459045;    

    // Verwendung
    printf("ganzzahl: %d\n", ganzzahl); 
    printf("zeichen: %c\n", zeichen);
    printf("eulerscheZahl: %f\n", eulerscheZahl);
    printf("eulerscheZahl kompletttttoooo: %.17f\n", eulerscheZahl);
 
    return 0;
}