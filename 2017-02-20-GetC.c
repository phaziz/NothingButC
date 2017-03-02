/*
    getchar() liefert uns einen INT-Wert zurück..., Eingabe kann Variablen zugewiesen und weiterverarbeitet werden.
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    setbuf(stdout, NULL);

    int antwort;
    printf("Bitte lesen Sie diese Zeile!\n (weiter mit ENTER-Taste)!\n");
    getchar();
    printf("Das ist der weitere Text...(Weiter mit \"J\" und der ENTER-Taste!)\n");
    antwort = getchar();
    printf("Die Antwort war %c", antwort);
    getchar();

    return EXIT_SUCCESS;
}