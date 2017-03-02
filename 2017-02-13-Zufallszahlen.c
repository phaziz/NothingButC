/*
    Zufallszahlen
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( void )
{
    // rand() Liefert Pseudozufallszahlen von 0 bis RAND_MAX, nutzt zur Berechnung immer den selben Startpunkt
    // int rand( void );
    
    // srand() Setzt den Startpunkt für rand(), für die Erstellung der Zufallszahlen
    // void srand( unsigned int seed );

    // time() liefert den UNIX-Timestamp zurück
    // time_t time( time_t *arg )
    
    // NULL != 0, NULL == NOTHING, NÜSCHTS, NIX, NADA, ...
    
    setbuf( stdout, NULL ); // Ausgabepuffer ausschalten

    const int lb = 1, ub = 100; // lb == lower bound, ub == upper bound
    int i = 1;
    
    srand( time( NULL ) ); // Legt den Startpunkt der Berechnung der Zufallszahl fest

    printf("\n");
    
    while(i < 11)
    {
        int Zufallszahl = ( rand() % ( ( ub + 1 ) - lb ) ) + lb;
        printf ( "\t%d)\tZufallszahl:\t%d\n", i, Zufallszahl );
        i++;
    }
    
    return 0;
}