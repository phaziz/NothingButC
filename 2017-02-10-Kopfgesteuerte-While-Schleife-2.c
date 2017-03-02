/*
    Kopfgesteuerte Schleife WHILE
*/

# include <stdio.h>

int main ( void )
{
    setbuf( stdout, NULL ); // Ausgabepuffer ausschlaten

    int summe = 1, zaehler = 0;

    while( zaehler <= 20 )
    {
        summe = summe + summe;
        zaehler++;
        printf( "\n\t\t>>> %d Summe: %d <<<\n", zaehler, summe );
    }

    return 0;
}