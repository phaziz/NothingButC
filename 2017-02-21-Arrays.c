# include <stdio.h>
# include <stdlib.h>

int main( void )
{
    int anzahl = 0;

    printf("\n\n\t\tWie gross soll das Array werden?\n\n\t\t--> ");
    scanf("%d", &anzahl);

    int zahlenarray[anzahl];

    for( int i = 0; i < anzahl; i++ )
    {
        zahlenarray[i] = i + ( i * i );
    }

    for( int i = 0; i < anzahl; i++ )
    {
        if((i + 1) <= 9)
        {
            printf("\n\t\tZahl Nr. 0%d: %d", (i + 1), zahlenarray[i]);
        }
        else
        {
            printf("\n\t\tZahl Nr. %d: %d", (i + 1), zahlenarray[i]);
        }
    }

    printf("\n\n\t\tFertig!\n\n");

    return EXIT_SUCCESS;
}