# include <stdio.h>
# include <stdlib.h>

int main(void)
{
    system("cls");

    int produkt[10][10];

    printf("\n\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++) 
        {
            produkt[i][j] = (i + 1) * (j + 1);
            printf("\t\tIndex %d|%d: ( %d * %d ) = %d\n", i, j, (i+1), (j+1), produkt[i][j]);
        }
    }

    printf("\n\n");

    return EXIT_SUCCESS;
}