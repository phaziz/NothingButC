#include <stdio.h>

int main (void)
{
    double Wareneinkaufswert;

    printf( "\n\n\t\tBitte geben Sie den Rechnungsbetrag ein:\n\n\t\t--> " );
    scanf( "%lf", &Wareneinkaufswert );

     printf( "\n\t\tSie haben Verkaeufe ueber \"%.2lf EUR\" eingegeben - Rechnungsstellung erfolgt!\n", Wareneinkaufswert );
    
    if( Wareneinkaufswert < 100 )
    {
        // Kein Rabatt
        printf( "\n\t\tRechnungsbetrag Netto:\t\t\"%.2lf EUR\"\n", Wareneinkaufswert );
        printf( "\n\t\tMehrwertsteuer 19%%:\t\t\"%.2lf EUR\"\n", (Wareneinkaufswert * 0.19) );
        printf( "\n\t\tRechnungsbetrag Brutto:\t\t\"%.2lf EUR\"\n", (Wareneinkaufswert * 1.19) );
        printf( "\n\n" );
        return 0;
    } 
    else if ( Wareneinkaufswert >= 100 && Wareneinkaufswert <= 500) 
    {
        // 2% Rabatt
        printf( "\n\t\tRechnungsbetrag Netto:\t\t\"%.2lf EUR\"\n", Wareneinkaufswert );
        printf( "\n\t\tabzgl. 2%% Rabatt:\t\t\"%.2lf EUR\"\n", (Wareneinkaufswert*0.98) );
        printf( "\n\t\tMehrwertsteuer 19%%:\t\t\"%.2lf EUR\"\n", ((Wareneinkaufswert*0.98) * 0.19) );
        printf( "\n\t\tRechnungsbetrag Brutto:\t\t\"%.2lf EUR\"\n", ((Wareneinkaufswert*0.98) * 1.19) );
        printf( "\n\n" );
        return 0;
    }
    else if ( Wareneinkaufswert > 500 && Wareneinkaufswert <= 1000) 
    {
        // 5% Rabatt
        printf( "\n\t\tRechnungsbetrag Netto:\t\t\"%.2lf EUR\"\n", Wareneinkaufswert );
        printf( "\n\t\tabzgl. 5%% Rabatt:\t\t\"%.2lf EUR\"\n", (Wareneinkaufswert*0.95) );
        printf( "\n\t\tMehrwertsteuer 19%%:\t\t\"%.2lf EUR\"\n", ((Wareneinkaufswert*0.95) * 0.19) );
        printf( "\n\t\tRechnungsbetrag Brutto:\t\t\"%.2lf EUR\"\n", ((Wareneinkaufswert*0.95) * 1.19) );
        printf( "\n\n" );
        return 0;
    }
    else if ( Wareneinkaufswert > 1000) 
    {
        // 10% Rabatt
        printf( "\n\t\tRechnungsbetrag Netto:\t\t\"%.2lf EUR\"\n", Wareneinkaufswert );
        printf( "\n\t\tabzgl. 10%% Rabatt:\t\t\"%.2lf EUR\"\n", (Wareneinkaufswert*0.90) );
        printf( "\n\t\tMehrwertsteuer 19%%:\t\t\"%.2lf EUR\"\n", ((Wareneinkaufswert*0.90) * 0.19) );
        printf( "\n\t\tRechnungsbetrag Brutto:\t\t\"%.2lf EUR\"\n", ((Wareneinkaufswert*0.90) * 1.19) );
        printf( "\n\n" );
        return 0;
    }

    return 0;
}