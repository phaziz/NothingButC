/*
    Kopfgesteuerte Schleife WHILE
*/

# include <stdio.h>

int main ( void )
{
    setbuf( stdout, NULL ); // Ausgabepuffer ausschlaten
    
    long Zahl;
    int Zaehler = 1;
    
    printf("\n\n\t\tBitte geben Sie eine Zahl ein:\n\n\t\t>>> ");
    scanf("%ld", & Zahl);

    long Ausgangswert = Zahl;

    if(Zahl / 5 != 0)
    {
        printf("\n\t\t>>> Diese Zahl (%ld) ist nicht ganzzahlig durch 5 teilbar!\n\n", Zahl);
        return 0;
    }
    
    while( ( Zahl % 5 ) == 0 )
    {

        Zahl = ( Zahl / 5 );
        printf( "\n\t\t>>> %d) Ausgangswert %ld / 5 = %ld <<<\n", Zaehler, Ausgangswert, Zahl );
        Ausgangswert = Zahl;
        Zaehler++;

    }

    return 0;
}