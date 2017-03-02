# include <stdio.h>
# include <stdlib.h>

int main ()
{
    typedef int temperatur;

    temperatur gradzahl;

    gradzahl = 20;

    printf("Aktuelle Temperatur: %d Grad Celsuis.", gradzahl);

    return EXIT_SUCCESS;
}