#include <stdio.h>
#include <stdlib.h>

double addition(double zahl1, double zahl2){
    return (zahl1 + zahl2);
}

double subtraktion(double zahl1, double zahl2){
    return (zahl1 - zahl2);
}

double division(double zahl1, double zahl2){
    return (zahl1 / zahl2);
}

double multiplikation(double zahl1, double zahl2){
    return (zahl1 * zahl2);
}

double ergebnisausgabe( int rechenart, double zahl1, double zahl2, double ergebnis){
    if(rechenart == 1){
        return printf("\n\n\t\tDas Ergebnis lautet: ( %.2lf + %.2lf ) = %.2lf\n\n\t\t",zahl1, zahl2, ergebnis);
    } else if(rechenart == 2){
        return printf("\n\n\t\tDas Ergebnis lautet: ( %.2lf / %.2lf ) = %.2lf\n\n\t\t",zahl1, zahl2, ergebnis);
    } else if(rechenart == 3){
        return printf("\n\n\t\tDas Ergebnis lautet: ( %.2lf - %.2lf ) = %.2lf\n\n\t\t",zahl1, zahl2, ergebnis);
    } else if(rechenart == 4){
        return printf("\n\n\t\tDas Ergebnis lautet: ( %.2lf * %.2lf ) = %.2lf\n\n\t\t",zahl1, zahl2, ergebnis);
    }
    
    return 0;
}

int main(void){
    setbuf(stdout, NULL);

    int rechenart;
    double zahl1, zahl2, ergebnis;

    printf("\n\n\t\t");
    printf("Bitte geben Sie mir die Rechenart:\n\n");
    printf("\n\n\t\t--> 1. Addition");
    printf("\n\t\t--> 2. Division");
    printf("\n\t\t--> 3. Subtraktion");
    printf("\n\t\t--> 4. Multiplikation\n\n\t\t--> ");
    scanf("%d", &rechenart);
    fflush(stdin);

    if(rechenart < 1 || rechenart > 4){
        printf("\n\n\t\tDiese Rechenart steht leider nicht zur Verfuegung! Programmabbruch");
        printf("\n\n\t\t");
        return EXIT_FAILURE;
    }
    
    printf("\n\n\t\t");
    printf("Bitte geben Sie mir Zahl 1: ");
    printf("\n\n\t\t--> ");
    scanf("%lf", &zahl1);
    fflush(stdin);

    printf("\n\n\t\t");
    printf("Bitte geben Sie mir Zahl 2:");
    printf("\n\n\t\t--> ");
    scanf("%lf", &zahl2);
    fflush(stdin);

    if(rechenart == 1){
        ergebnis = addition(zahl1, zahl2);
        ergebnisausgabe(rechenart, zahl1, zahl2, ergebnis);
    } else if(rechenart == 2){
        ergebnis = division(zahl1, zahl2);
        ergebnisausgabe(rechenart, zahl1, zahl2, ergebnis);
    } else if(rechenart == 3){
        ergebnis = subtraktion(zahl1, zahl2);
        ergebnisausgabe(rechenart, zahl1, zahl2, ergebnis);
    } else if(rechenart == 4){
        ergebnis = multiplikation(zahl1, zahl2);
        ergebnisausgabe(rechenart, zahl1, zahl2, ergebnis);
    }
    
    return EXIT_SUCCESS;
    
}