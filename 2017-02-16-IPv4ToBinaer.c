#include<stdio.h>
main()
{
    int index[32],dezimalzahl,i;
 
    printf("Geben Sie eine Dezimalzahl ein:\n");
    scanf("%d",&dezimalzahl);
    for ( i=0; dezimalzahl > 0; i++)
    {
    index[i]=dezimalzahl%2;
    dezimalzahl=dezimalzahl/2;
    }

    for (; i > 0; i--)
    {
    printf("%d",index[i-1]);

    }

return 0;
}