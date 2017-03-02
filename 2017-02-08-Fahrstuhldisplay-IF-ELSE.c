#include <stdio.h>

int main (void)
{
    int Zielstockwerk;

    printf( "\n\n\t\tBitte geben Sie ein Zielstockwerk ein (1 - 5):\n\n\t\t--> " );
    scanf( "%d", &Zielstockwerk );

    if( Zielstockwerk < 1 || Zielstockwerk > 5 )
    {
        printf( "\n\t\tDas gewuenschte Stockwerk %d liegt leider ausserhalb meiner Reichweite (1 - 5)", Zielstockwerk );
        printf( "\n\n" );
        return 0;
    } 
    else 
    {
        printf( "\n\t\tDas gewuenschte Stockwerk \"%d\" wird jetzt angefahren...", Zielstockwerk );
        printf( "\n\n" );
        return 0;
    }
}