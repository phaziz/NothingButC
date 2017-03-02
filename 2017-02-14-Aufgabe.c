/*
    Fußgesteuerte Schleife wird mindestens einmal durchlaufen...
*/

#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    setbuf( stdout, NULL ); // Ausgabepuffer ausschalten

    double currentHour;
    int sex;
    char name[100];
    
    printf("\n\n\t\t");
    printf("Bitte geben Sie mir die aktuelle Uhrzeit als Dezimalzahl (z.B. HH.MM - 14.25 fuer 14:25 Uhr Nachmittags): ");
    printf("\n\n\t\t");
    scanf("%lf", &currentHour);
    fflush(stdin);

    printf("\n\n\t\t");
    printf("Bitte geben Sie mir das Geschlecht: ");
    printf("\n\n\t\t\t--> 1 fuer Weibchen");
    printf("\n\n\t\t\t--> 2 fuer Maennchen");
    printf("\n\n\t\t");
    scanf("%d", &sex);
    fflush(stdin);

    printf("\n\n\t\t");
    printf("Bitte geben Sie mir einen Namen: ");
    printf("\n\n\t\t");
    fgets(name, 100, stdin);
    fflush(stdin);

    if(currentHour >= 0.0 && currentHour <= 9.59)
    {
        printf("\n\n\t\t");
        printf("Guten Morgen ");
    } else if(currentHour > 9.59 && currentHour <= 17.59){
        printf("\n\n\t\t");
        printf("Guten Tag ");
    } else if(currentHour > 18.0 && currentHour <= 23.59){
        printf("\n\n\t\t");
        printf("Guten Abend ");
    }

    if(sex == 1){
        printf("Frau %s", name);
    } else if(sex == 2){
        printf("Herr %s", name);
    } else {
        printf("Meister %s", name);
    }
    
    printf("\n\n");
    
    return EXIT_SUCCESS;
}