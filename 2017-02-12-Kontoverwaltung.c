# include <stdio.h>
# include <stdlib.h>

int main( void )
{
    int anzahlKonten = 0;
    int kontonummer;
    int z = 0

    while(z == 0) // ASCII 69 == E fuer EXIT!
    {
        printf("\n\n\t\t*** Kontenverwaltung ***");
        printf("\n\n\t\t*** Sie koennen das Programm mit der Taste \"E\" verlassen, oder mit ENTER starten! ***");
        printf("\n\n\t\tWieviele Konten möchten Sie einpflegen?\n\n\t\t--> ");
        scanf("%20d", &anzahlKonten);

        int kontenArray[anzahlKonten];

        for( int i = 0; i < anzahlKonten && i <= 99; i++ )
        {
            printf("\n\t\tGeben Sie mir die Kontonummer Nr. %d:\n\n\t\t--> ", ( i + 1 ) );
            scanf("%20d", &kontonummer);

            kontenArray[i] = kontonummer;
        }

        for( int i = 0; i < anzahlKonten; i++ )
        {
            if((i + 1) <= 9)
            {
                printf("\n\t\tKontonummer Nr. 0%d: %d", (i + 1), kontenArray[i]);
            }
            else
            {
                printf("\n\t\tKontonummer Nr. %d: %d", (i + 1), kontenArray[i]);
            }
        }

        printf("\n\n\t\tFertig!\n\n");
    }

    return EXIT_SUCCESS;
}