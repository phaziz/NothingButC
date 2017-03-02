#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    setbuf(stdout, NULL);
    double jahre, tage, gehalt, urlaubsgeld;
    int indikator;
    
    printf("\n\n\t\tHatten Sie Urlaub?\n\t\t1 fuer JA, 2 fuer NEIN:\n\t\t--> ");
    scanf("%d", &indikator);
    fflush(stdin);

    printf("\n\n\t\tWie lange sind Sie im Unternehmen beschaeftigt?\n\t\tBitte Jahre eingeben:\n\t\t--> ");
    scanf("%lf", &jahre);
    fflush(stdin);

    if(indikator == 2 || jahre < 3){
        printf("\n\n\t\tSie hatten keinen Urlaub...oder sind weniger als 3 Jahre beschaeftigt!\n\t\t--> Programmabbruch\n\n");
        return EXIT_SUCCESS;
    } else {
        printf("\n\n\t\tWieviele Tage Urlaub hatten Sie?\n\t\tBitte Tage eingeben:\n\t\t--> ");
        scanf("%lf", &tage);
        fflush(stdin);

        printf("\n\n\t\tWie hoch ist Ihr Grundgehalt?\n\t\tBitte EUR eingeben:\n\t\t--> ");
        scanf("%lf", &gehalt);
        fflush(stdin);

        if(jahre > 10){
            urlaubsgeld = (gehalt/30) * tage;
            urlaubsgeld = urlaubsgeld * 1.25;            
        } else {
            urlaubsgeld = (gehalt/30) * tage;
        }

        printf("\n\n\t\tIhr Urlaubsgeld betraegt: %.2lf EUR und wird ueberwiesen!\n\n", urlaubsgeld);
    }

    return EXIT_SUCCESS;
}