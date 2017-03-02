/*
    Kopfgesteuerte Schleife WHILE
*/

# include <stdio.h>

int main ( void )
{
    setbuf( stdout, NULL ); // Ausgabepuffer ausschlaten

    int z, i = 0;

    while( z != 69 ) // 69 == ASCII E
    {
        i++;
       
        printf( "\n\t\t>>> Durchlauf %d <<<\n", i );
        printf( "\t\t>>> Beenden mit E <<<\n" );
        printf( "\t\t>>> Ihre Wahl: <<<\n\t\t" );
        printf( ">>> " );
        z = getchar();
        fflush( stdin );
    }

    printf("\t\t>>> Sie haben das Programm mit E nach %d Durchlaeufen beendet! <<<\n", i);
    return 0;
}