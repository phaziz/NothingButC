#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
    setbuf( stdout, NULL );
    double  startkapital, 
            zinssatz, 
            anfangssumme,
            summmme;
    int laufzeit;
    
    printf("\n\n\t\tWieviel Kapital moechten Sie anlegen?\n\t\t--> ");
    scanf("%lf", &startkapital);

    printf("\n\n\t\tWieviel %%-Zinsen moechten Sie angeben?\n\t\t--> ");
    scanf("%lf", &zinssatz);

    printf("\n\n\t\tWelche Laufzeit in Jahren schwebt Ihnen vor?\n\t\t--> ");
    scanf("%d", &laufzeit);

    anfangssumme = startkapital;
    
    printf( "\n\n\t\tBerechnung:\n\n" );
    
    for( int i = 1; i <= laufzeit; i++ )
    {
        startkapital = startkapital + ((startkapital /100 ) * zinssatz);

        if(i == 1){
            printf( "\t\tKapital %.2lf EUR ergibt verzinst zu %.2lf%% im %d Jahr: %.2lf EUR\n", anfangssumme, zinssatz, i, startkapital );
        } else {
            printf( "\t\tKapital %.2lf EUR ergibt verzinst zu %.2lf%% im %d Jahr: %.2lf EUR\n", summmme, zinssatz, i, startkapital );
        }
        
        summmme = startkapital;
    }
    
    return EXIT_SUCCESS;
}