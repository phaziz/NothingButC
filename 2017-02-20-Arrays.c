# include <stdio.h>
# include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main (void)
{
    int zahlenarray2[] = {3, 24, 35, 6, 15};

    printf("\n\nVorher:\n");

    printf("%d\n", zahlenarray2[0]);
    printf("%d\n", zahlenarray2[1]);
    printf("%d\n", zahlenarray2[2]);
    printf("%d\n", zahlenarray2[3]);
    printf("%d\n", zahlenarray2[4]);


    qsort(zahlenarray2, 5, sizeof(int), cmpfunc);
    printf(" \n\n- - - - Sortierung mit qSort - - - - -\n\n\nNachher:\n");

    printf("%d\n", zahlenarray2[0]);
    printf("%d\n", zahlenarray2[1]);
    printf("%d\n", zahlenarray2[2]);
    printf("%d\n", zahlenarray2[3]);
    printf("%d\n", zahlenarray2[4]);

    return EXIT_SUCCESS;
}