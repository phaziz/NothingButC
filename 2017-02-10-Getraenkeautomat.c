#include <stdio.h>

int main (void)
{
    double Geldeinwurf;

    printf( "\n\n\t\tBitte werfen Sie eine Muenze ein... (0,50, 1,00, 2,00):\n\n\t\t--> " );
    scanf( "%lf", &Geldeinwurf );

     printf( "\n\t\tSie haben \"%.2lf EUR\" eingeworfen...Getraenkeauswahl erfolgt!\n", Geldeinwurf );
    
    if( Geldeinwurf < 0.5 || Geldeinwurf > 2 )
    {
        printf( "\n\t\tFehler: Sie haben \"%.2lf EUR\" eingeworfen...\n", Geldeinwurf );
        printf( "\n\t\tBitte werfen Sie nur folgende Muenzen ein: 0,50 EUR, 1,00 EUR, oder 2,00 EUR!" );
        printf( "\n\n" );
        return 0;
    } 
    else 
    {
        if (Geldeinwurf < 1)
        {
            printf( "\n\t\tDas gewuenschte Getraenk Wasser fuer \"%.2lf EUR\" wird jetzt ausgeworfen...\n\n", Geldeinwurf );
            return 0;
        }
        else 
        {
            switch ( (int) Geldeinwurf )
            {
                case 1 : printf( "\n\t\tDas gewuenschte Getraenk Limonade wird jetzt ausgeworfen...\n\n" ); break;
                case 2 : printf( "\n\t\tDas gewuenschte Getraenk Bier wird jetzt ausgeworfen...\n\n" ); break;
                default : printf( "Fehlerhafter Geldeinwurf!\n\n" );
            }
        }
    }

    return 0;
}