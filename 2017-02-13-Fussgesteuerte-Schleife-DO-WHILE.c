/*
    Fußgesteuerte Schleife wird mindestens einmal durchlaufen...
*/

#include <stdio.h>

int main ( void ) {
    setbuf( stdout, NULL ); // Ausgabepuffer ausschalten

    double currentHour;
    int sex;
    char name;
    
    prinf("\n\n\t\t");
    printf("Bitte geben Sie mir die aktuelle Uhrzeit: ");
    prinf("\n\n\t\t");
    scanf("%lf", &currentHour);
    fflush(stdin);

    prinf("\n\n\t\t");
    printf("Bitte geben Sie mir das Geschlecht: ");
    prinf("\n\n\t\t");
    scanf("%d", &sex);
    fflush(stdin);

    prinf("\n\n\t\t");
    printf("Bitte geben Sie mir einen Namen: ");
    prinf("\n\n\t\t");
    scanf("%c", &name);
    fflush(stdin);

    printf("Danke!");
    
    return 0;
}