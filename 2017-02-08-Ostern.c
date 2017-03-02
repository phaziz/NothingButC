    #include <stdio.h>

  /*
    Weitere Feiertage auf Basis Ostersonntag (Gauß'sche Osterformel')
    Weiberfastnacht / Schwerdonnerstag = -52 Tage
    Rosenmontag = -48 Tage
    Fastnachtdienstag = -47 Tage
    Aschermittwoch = -46 Tage
    Gründonnerstag = -3 Tage
    Karfreitag = -2 Tage
    Ostersonntag = 0 - Woohoo
    Ostermontag = +1 Tage
    Christi Himmelfahrt = +39 Tage
    Pfingssonntag = +49 Tage
    Pfingsmontag = +50 Tage
    Frohnleichnam = +60 Tage
    Maria Himmelfahrt ist immer am 15. August
  */


    int main( void )
    {
      int SJ = 0, monat = 0, tag = 0, jahr = 0, A = 0, B = 0, C = 0, E = 0 ;
      int H = 0, M = 0, T = 0, k = 0;

      printf("\n\n\t\tBitte geben Sie ein Jahr ein (Beispiel: 2017):\n\n\t\t--> ");
      scanf("%4d", &jahr);

      SJ = 1 / ( 1 + jahr % 4 ) -1 / ( 1 + jahr % 100 ) + 1 / ( 1 + jahr % 400 );
      printf("\n\t\tIst \"%4d\" ein Schaltjahr? %s\n",jahr, SJ == 0 ? "Computer sagt: \"Nein...\"" : "Computer sagt: \"Ja...\"");

      // k - 1 ist Differenz in Tagen, Julianischer und gregorianischer Kalender(Schaltregel)
      k = jahr / 100 - jahr / 400 - 1;

      // M säkulare Mondschaltung
      M = 16 + k - ( jahr / 100 * 8 + 13 ) / 25;

      // Mondparameter (H + 1 = Goldene Zahl
      H = jahr % 19;

      // Anzahl Tage ab 21. März bis Vollmond
      A = ( M + H * 19 ) % 30;

      // Osterregel Osterausnahmen z.B. 1954, 1981, 2049, 2076, ...
      T = ( A + H / 11 ) / 29;

      // Osterkenzahl 120 entspricht 27.März = spätester 1. Samstag ab 21.März
      B = 120 + A - T;

      // Wochentag zu B+1 ist der Abstand zu Samstag davor
      C = ( B + jahr + jahr / 4 - k ) % 7;

      // E Osterkennzahl (Easter Index), Bezugswert für alle beweglichen Feiertage
      E = B - C;

      // Ostersonntag (Datum Tag)
      tag = 1 + E % 31;

      // Ostersonntag (Datum Monat)
      monat = E / 31;

      printf("\n\t\tOstersonntag faellt im Jahr \"%4d\" auf das Tagesdatum: %0d.%0d.%d\n", jahr, tag, monat, jahr);

      return 0;
    }
