// Call by Reference
// Es wird jeweils die Startadresse des Arrays an die Funktion übergeben

#include <stdio.h>
#include <stdlib.h>

struct array
{
    int wert[3];
};

void outputArray(struct array z)
{
    printf("\n\n");

    for (int i = 0; i < (sizeof(struct array) / sizeof(int)); i++)
    {
        printf("\t\t%d\n", z.wert[i]);
    }

    printf("\n\n");
}

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

    struct array new_array;
    new_array.wert[0]=10;
    new_array.wert[1]=20;
    new_array.wert[2]=30;

    outputArray(new_array);

    return EXIT_SUCCESS;
}