/*
    putchar() Schreibt ein Zeichen in die Konsole
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    setbuf(stdout, NULL);

    char z1;

    z1 = 'A';
    putchar('-');
    putchar(z1);
    putchar('-');
    putchar(171);
    putchar('-');
    putchar('b');
    putchar('-');
    putchar(145);
    putchar('-');
    putchar(210);
    putchar('-');
    // putc(); putc kann auch in Dateien schreiben, putchar nur in die Standardausgabe (Konsole)

    return EXIT_SUCCESS;
}