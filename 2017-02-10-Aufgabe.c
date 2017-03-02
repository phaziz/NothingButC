/*
    Kopfgesteuerte Schleife WHILE
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( void )
{
    setbuf( stdout, NULL ); // Ausgabepuffer ausschalten

    const int lb = 1, ub = 100;
    
    int geheimeZahl;
    int Zahl = 0;

    // seed value generator
    srand (time (NULL));
    
    // Zufallszahl zwischen 1 und 100 bilden
    geheimeZahl = (rand () % ((ub + 1) - lb)) + lb;
    //printf ("%d\n", geheimeZahl);
    
    while( Zahl != geheimeZahl )
    {
        printf( "\n\n\t\tGib mir eine Zahl zwischen 1 und 100 um die Geheimzahl zu erraten:\n\n\t\t>>> " );
        scanf( "%d", &Zahl );
        
        if(Zahl < 1 || Zahl > 100)
        {
            printf("\n\t\t>>> Diese Zahl \"%i\" liegt ausserhalb der Grenze 1 - 100!\n\n", Zahl);
        } 
        else if( Zahl == geheimeZahl )
        {
            printf("\n\t\tHurra, hast gewonnen!\n");
            printf( "\n\t\tBist doof, hab keine Lust mehr zu spielen, bring mir ein Bier...\n\n\n" );
            return 0;
        } 
        else if( Zahl > geheimeZahl )
        {
            printf("\n\t\tWeniger bieten Du musst...");
        } 
        else
        {
            printf("\n\t\tMehr bieten Du musst...");
        }
    }

    return 0;
}