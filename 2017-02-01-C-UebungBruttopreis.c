/*
 * Bruttopreis aus Warenkorb errechnen
 */

/*
 * Einbindung Header-Dateien
 */
# include <stdio.h>

/*
 * Hauptfunktion main()
 */
int main()
{
    float riesling = 5.20;
    int riesling_m = 6;
    float sauvignon = 8.12;
    int sauvignon_m = 12;
    float cabernet = 4.85;
    int cabernet_m = 6;

    float riesling_n_s = (riesling * riesling_m);
    float sauvignon_n_s = (sauvignon * sauvignon_m);
    float cabernet_n_s = (cabernet * cabernet_m);
    
    float nettosumme = (riesling_n_s + sauvignon_n_s + cabernet_n_s);
    float bruttosumme = (nettosumme * 1.19);
    float mwst = (bruttosumme - nettosumme);
    
    printf("\n\n\tNettosumme =\t%.2f EUR\n", nettosumme);
    printf("\tMwSt =\t\t %.2f EUR\n", mwst);
    printf("\tBruttosumme =\t%.2f EUR\n\n", bruttosumme);
 
    return 0;
}