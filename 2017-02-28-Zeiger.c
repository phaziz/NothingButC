#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    setbuf(stdout, NULL);
    system("cls");

    // Deklaration einer Zeigervariablen auf einen short int Wert
    // Aktueller Inhalt ist NULL (NULL-Pointer)
    short int *p;
    
    //Variablen vom Typ short int deklariert...initialisiert
    short int m, n = 10;

    // p speichert die Speicheradresse von n -> p zeigt auf n
    p = &n;

    // Inhalt der Variablen auf den p zeigt wird m zugewiesen
    // m hat jetzt den Wert 10
    m=*p;

    printf("\n\n\t\tm=%d beginnt bei Adresse %p\n\t\tn=%d beginnt bei Adresse %p\n\t\tp hat die Adresse p=%p\n\n", m, &m, n, &n, p);
    
    int *p1;
    p1 = NULL;

    if(p1 != NULL)
    {
        printf("\t\tPointer p1=%d (%d) ist initialisiert!\n", *p1, p1);
    }
    else
    {
        printf("\t\tPointer p1 ist nicht initialisiert!\n");

    }

    int x = 5;
    int *y;

    printf("\n\t\tAdresse x=%p und Wert x = %d\n", &x, x);
    
    // Führt bei manchen Systemen zu Programmabstürzen
    printf("\t\tAdresse *y=%p und Wert *y = %d (Unsinn)\n", &y, *y);
    printf("\n\t\tx=&x;\n");
    
    y = &x;
    printf("\n\t\tAdresse auf die y zeigt y=%p\n", &y);
    printf("\t\tAdresse von x=%p\n\n", &x);

    // ACHTUNG
    *y = 10;
    printf("\t\tAdresse x=%p und Wert x = %d\n", &x, x);
    printf("\t\tAdresse *y=%p und Wert *y = %d\n", &y, *y);
    printf("\n\t\tAdresse auf die y zeigt y=%p\n", &y);
    printf("\t\tAdresse von x=%p\n\n", &x);

    
    char *v2;
    int *w2;
    float *x2;
    double *y2;
    void *z2;

    printf("\n\n\t\tGroessen: %d, %d, %d, %d, %d\n\n", sizeof(v2), sizeof(w2), sizeof(x2), sizeof(y2), sizeof(z2));

    int *ptr;
    int wert;

    ptr=&wert;
    printf("\n\t\tptr = %p, Dezimal: %d", ptr, ptr);
    
    // 4 Byte * 10 = 40 Byte
    ptr+=10;
    printf("\n\t\tptr = %p, Dezimal: %d", ptr, ptr);

    printf("\n\n");

    return EXIT_SUCCESS;
}