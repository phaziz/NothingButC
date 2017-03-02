/*
 * Einbindung Header-Dateien
 */
# include <stdio.h>

/*
 * Hauptfunktion main()
 */
int main()
{
    printf("\n\n\n");

    double kp, bar, at, N;
    
    printf("\tUmrechnung kp nach N...\n");
    printf("\t- - - - - - - - - - - - -\n");
    
    // Eingabe Aufforderung
    printf("\tBitte eine Zahl fuer \"kp\" eingeben: ");
    scanf("%lf", &kp);
    fflush(stdin);
    
    // Berechnung
    N = (kp * 9.80665);
    printf("\tDanke!\n");
    
    // Ausgabe
    printf("\tDer Wert fuer \"%.2f kp in N\" lautet: %.2f N",kp, N);
    
    printf("\n\n\n\tUmrechnung at nach bar...\n");
    printf("\t- - - - - - - - - - - - -\n");
    
    // Eingabeaufforderung
    printf("\tBitte eine Zahl fuer \"at\" eingeben: ");
    scanf("%lf", &at);
    fflush(stdin);
    
    // Berechnung
    bar = (at * 0.980665);
    printf("\tDanke!\n");
    
    // Ausgabe
    printf("\tDie Wert fuer \"%.2f at in bar\" lautet: %.2f bar", at, bar);
    printf("\n\n\n");
    return 0;
}