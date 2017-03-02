#include <stdio.h>

int main()
{
    int zahl, divisor, obergrenze, primzahl;

    printf("\n\n\t\tBitte geben Sie eine Obergrenze ein:\n\n\t\t--> ");
    scanf("%d", &obergrenze);
    fflush(stdin);

    printf("\n\t\tEs folgen die Primzahlen zwischen 1 und %d:\n\n", obergrenze);

    for(zahl = 1; zahl <= obergrenze; zahl++)
    {
        primzahl = 1;

        for(divisor = 2; divisor < zahl; divisor++)
        {
            if(zahl % divisor == 0)
            {
                primzahl = 0;
            }
        }

        if( primzahl )
        {
            printf("\t\t- %d\n", zahl);    
        }
    }

    printf("\n");

    return 0;
}