// Call by Reference
// Es wird jeweils die Startadresse des Arrays an die Funktion übergeben

#include <stdio.h>
#include <stdlib.h>

void funktion(int feld[], int MAX)
{
    printf("\n\n");

    for (int i = 0; i < MAX; i++)
    {
        printf("\n\t\t%d", feld[i]);
    }

    printf("\n\n");
}

int main(void)
{
    setbuf(stdout, NULL);
    system("cls");

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int val[10];

    for(int i = 0; i < 10; i++)
    {
        val[i] = i+1;
    }

    funktion(&val[0], sizeof(val) / sizeof(int));
    funktion(arr, sizeof(arr) / sizeof(int));

    return EXIT_SUCCESS;
}