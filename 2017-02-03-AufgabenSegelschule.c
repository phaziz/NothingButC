/*
 * Einbindung Header-Dateien 
 * Segelschule.exe
 */
# include <stdio.h>

/*
 * Hauptfunktion main()
 */
int main()
{
    printf("\n\n\n");

    float EINGABE_ZAHL;
    
    printf("\t- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    printf("\t\tSegelbootempfehler 2000?\n");
    printf("\t- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");

    printf("\t>>Bitte geben Sie Ihr Gewicht ein:");
    scanf("%f", &EINGABE_ZAHL);
    fflush(stdin);
    printf("\t>>Danke\n");

    if(EINGABE_ZAHL > 45){
        printf("\n\t>> Wir empfehlen Ihnen die Segelboot-Klasse 420er Boote!");
    } else {
        printf("\n\t>> Wir empfehlen Ihnen die Opti-Klasse (ist auch cool - keine Sorge ;-)!");
    }
    
    printf("\n\t- - - - - - - - - - - - - - - - - - - - - - - - - - - -");
    printf("\n\n\n");
    return 0;
}