/*
 *  Schaltjahr, oder kein Schaltjahr, das ist hier die Frage...
 *
 *  Ein Jahr ist ein Schaltjahr, wenn es durch 4 aber nicht durch 100 teilbar ist.
 *  Ist es durch 400 teilbar, so ist es ein Schaltjahr.
 */



#include <stdio.h>

int main (void)
{
    int AKTUELLES_JAHR, SCHALTJAHR;
    
    printf("\n\n\t\tBitte geben Sie ein Jahr ein (Beispiel: 2017):\n\n\t\t--> ");
    scanf("%4d", &AKTUELLES_JAHR);

    // 0,... aber als int = 0 == kein Schaltjahr && 1 == ist Schaltjahr
    SCHALTJAHR = 1 / ( 1 + AKTUELLES_JAHR % 4 ) - 1 / ( 1 + AKTUELLES_JAHR % 100 ) + 1 / ( 1 + AKTUELLES_JAHR % 400 );
    
    // Ausgabe
    printf("\n\t\tIst \"%4d\" ein Schaltjahr? %s\n", AKTUELLES_JAHR, SCHALTJAHR == 0 ? "Computer sagt: \"Nein...\"" : "Computer sagt: \"Ja...\"");
    
    
/*    
    Alternative mit IF ELSE.....
    printf("\n\n\tBitte geben Sie ein gewuenschtes Jahresdatum ein (YYYY):\n\n\t");
    scanf("%i", &AKTUELLES_JAHR);
    fflush(stdin);

    if( ( ( AKTUELLES_JAHR % 4 == 0 ) && ( AKTUELLES_JAHR % 100 != 0 ) ) || ( AKTUELLES_JAHR % 400 == 0) )
    {
        printf("\n\t...Yes, das eingegebene Jahr \"%i\" entspricht einem Schaltjahr!\n\n", AKTUELLES_JAHR);
        return 0;
    }
    else 
    {
        printf("\n\t...Nope, das eingegebene Jahr \"%i\" entspricht keinem Schaltjahr!\n\n", AKTUELLES_JAHR);
        return 0;
    }   
*/  
}