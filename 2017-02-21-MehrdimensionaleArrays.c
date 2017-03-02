# include <stdio.h>
# include <stdlib.h>

int main( void )
{
    system("cls");
    setbuf(stdout, NULL);

    // Deklaration eines leeren mehrdimensionalen - 2-Dimensional - Arrays
    int regal[4][5];

    // Felder werden mit Werten initialisiert, ...
    regal[0][0] = 3;
    regal[0][1] = 4;
    regal[0][2] = 5;
    regal[0][3] = 6;
    regal[0][4] = 7;

    regal[1][0] = 30;
    regal[1][1] = 40;
    regal[1][2] = 50;
    regal[1][3] = 60;
    regal[1][4] = 70;

    // Deklaration und Initialisierung eines mehrdimensionalen - 2 Dimensionen - Arrays
    int matrix[4][5] = 
    {
        {10,20,30,40,50},
        {15,25,35,45,55},
        {20,30,40,50,60},
        {25,35,45,55,65}
    };

    return EXIT_SUCCESS;
}