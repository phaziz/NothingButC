    #include <stdio.h>
     
    int main(int argc, char *argv[]) {
      int SJ = 0, monat = 0, tag = 0, jahr = 0, A = 0, B = 0, C = 0, E = 0, K = 0;
      int G = 0, H = 0, M = 0, T = 0, k = 0;
     
      printf("Jahr eingeben (Beispiel: 2009): ");
      scanf("%4d", &jahr);
     
      SJ = 1/(1+jahr%4)-1/(1+jahr%100)+1/(1+jahr%400);
      printf("Schaltjahr: %s\n", SJ==0?"nein":"ja");
     
      printf("Ostern\n");
    // k - 1 ist Differenz in Tagen, Julianischer und gregorianischer Kalender(Schaltregel)
      k = jahr/100 - jahr/400 - 1;
    // M säkulare Mondschaltung  
      M = 16 + k - (jahr/100*8 + 13)/25;
    // Mondparameter (H + 1 = Goldene Zahl
      H = jahr%19;
    // Anzahl Tage ab 21. März bis Vollmond
      A = (M + H*19) % 30;
    // Osterregel Osterausnahmen z.B. 1954, 1981, 2049, 2076, ...
      T = (A + H/11) / 29;
    // Osterkenzahl 120 entspricht 27.März = spätester 1. Samstag ab 21.März
      B = 120 + A - T;
    // Wochentag zu B+1 ist der Abstand zu Samstag davor
      C = (B + jahr + jahr/4 - k) % 7;
    // E Osterkennzahl (Easter Index), Bezugswert für alle beweglichen Feiertage
      E = B - C;
    // Ostersonntag (Datum Tag)
      tag = 1 + E % 31;
    // Ostersonntag (Datum Monat)
      monat = E/31;
      printf("Ostersonntag: %0d.%0d.%d\n", tag, monat, jahr);
     
      return 0;
    }