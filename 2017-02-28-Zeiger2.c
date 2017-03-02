#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(void)
{
    setbuf(stdout, NULL);
    system("cls");

    int *p;
    char *d;
    char *e; // Pointer auf Array benötigt keine eckigen Klammern
    
    int p1 = 100;
    char d1 = 'C';
    char e1[MAX] = {"Yes"};

    printf("\n\n\t\tp = %d - %p", p1, &p1);
    printf("\n\n\t\td = %c - %p", d1, &d1);
    printf("\n\n\t\te = %s - %p", e1, &e1);
   
    printf("\n\n");

    for (int i = 0; e1[i] != '\0'; i++)
    {
        printf("\t\tIndex %d -> %p -> %c \n", i, &e1[i], e1[i]);
    }

    printf("\n");

    p=&p1;
    d=&d1;
    e=&e1;

    printf("\t\tp Adresse %p zeigt auf %p Wert %d\n", &p, p, *p);
    printf("\t\td Adresse %p zeigt auf %p Wert %c\n", &d, d, *d);
    printf("\t\te Adresse %p zeigt auf %p Wert %d", &e, e, *e);

    printf("\n\n");

    return EXIT_SUCCESS;
}