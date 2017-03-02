# include <stdio.h>
# include <stdlib.h>

// Zweidimensionales Array für die eigentlichen Konten
// Spalte 0 = Kontonummer
// Spalte 1 = Kontostand
double kontenArray[100][2];

// Alle Konten werden global gezählt
int alleKonten = 0;

// auswahl ist die Hauptmenü Variable, i ein Zähler
int auswahl = 0, i = 0;

// Funktion um das Hauptmenü zu zeigen
int zeigeMenue( void )
{
    int option;

    printf("\n\n\n\t\t*** Kontenverwaltung ***");
    printf("\n\n\t\t1) Neues Konto anlegen\n");
    printf("\t\t2) Angelegte Konten anzeigen lassen (%d Stueck bisher)\n", alleKonten);
    printf("\t\t3) Geld auf Konto einzahlen\n");
    printf("\t\t4) Geld von Konto abheben\n");
    printf("\t\t5) Zinsen gutschreiben\n");
    printf("\t\t6) Einzelverzinsung gutschreiben\n");
    printf("\n\t\t99) Kontenverwaltung verlassen - Programmabbruch!");
    printf("\n\n\t\tBitte waehlen Sie eine Option:\n\t\t--> ");
    scanf("%d", &option);
    fflush( stdin );

    return option;
}

// Funktion um ein neues Konto anzulegen
void neueKontenAnlegen( void )
{
    double kontonummer, kontostand;
    int zeile;

    system("cls");
    printf("\n\n\t\t*** Neues Konto anlegen ***");
 
    printf("\n\t\tGeben Sie mir die Kontonummer:\n\t\t--> ");
    scanf("%lf", &kontonummer);
    fflush( stdin );

    printf("\n\t\tGeben Sie mir den aktuellen Kontostand:\n\t\t--> ");
    scanf("%lf", &kontostand);
    fflush( stdin );

    // Ist die Kontonummer eventuell schon vorhanden?
    for( zeile = 0; zeile < alleKonten; zeile++ )
    {
        // Hier ist der Treffer -> Kontonummer ist bereits vorhanden
        if(kontonummer == kontenArray[zeile][0])
        {
            printf("\n\t\tDieses Konto ist bereits vorhanden!");
            printf("\n\t\tGeben Sie mir die richtige Kontonummer:\n\t\t--> ");
            scanf("%lf", &kontonummer);
            fflush( stdin );
        }
    }

    // Kontonummer ist noch nicht vorhanden
    // Konto kann angelegt werden
    kontenArray[alleKonten][0] = kontonummer;
    kontenArray[alleKonten][1] = kontostand;

    // Kontozähler wird erhöht
    alleKonten++;
    printf("\n\n\t\tFertig!\n\n");
}

// Übersicht über alle Konten
void zeigeAlleKonten( void )
{
    int zeile;

    system("cls");
    printf("\n\n\t\t*** Alle Konten anzeigen ***");

    // Iteration über alle vorhandenen Konten
    for( zeile = 0; zeile < alleKonten; zeile++ )
    {
        // kontenArray[zeile][0] == Kontonummer
        // kontenArray[zeile][0] == Kontostand
        printf("\n\t\tKontonummer %.0lf mit aktuellem Kontostand von %.2lf EUR", kontenArray[zeile][0], kontenArray[zeile][1]);
    }

    printf("\n\n\t\tFertig!\n");
}

// Einzahlungsfunktion
void einzahlung( void )
{
    double kontonummer, einzahlungsbetrag = .0;
    int zeile, error = 1;

    system("cls");
    printf("\n\n\t\t*** Einzahlung - Bitte Konto auswaehlen ***");

    // Iteration über alle vorhandenen Konten
    for( zeile = 0; zeile < alleKonten; zeile++ )
    {
        printf("\n\t\t%d) Kontonummer %.0lf mit aktuellem Kontostand von %.2lf EUR", zeile, kontenArray[zeile][0], kontenArray[zeile][1]);
    }

    printf("\n\n\t\tGeben Sie mir die Kontonummer fuer die Einzahlung:\n\t\t--> ");
    scanf("%lf", &kontonummer);
    fflush( stdin );

    // Ist die Kontonummer für die EInzahlung überhaupt vorhanden?
    for( zeile = 0; zeile < alleKonten; zeile++ )
    {
        if( kontonummer == kontenArray[zeile][0] )
        {
            error = 0;
        }
    }

    // Kontonummer wurde nicht gefunden... Neue Eingabe Kontonummer
    if(error != 0)
    {
        printf("\n\n\t\tDie Kontonummer ist unbekannt!");
        printf("\n\n\t\tGeben Sie mir die Kontonummer fuer die Einzahlung:\n\t\t--> ");
        scanf("%lf", &kontonummer);
        fflush( stdin );
    }

    printf("\n\n\t\tGeben Sie mir die Summe der Einzahlung:\n\t\t--> ");
    scanf("%lf", &einzahlungsbetrag);
    fflush( stdin );

    // Iteration über alle vorhandenen Konten, 
    // bis das richtige Konto für die EInzahlung gefunden wurde
    // Dann kann der EInzahlungsbetrag gebucht werden
    for( zeile = 0; zeile < alleKonten; zeile++ )
    {
        if( kontonummer == kontenArray[zeile][0] )
        {
            kontenArray[zeile][1] = (kontenArray[zeile][1] + einzahlungsbetrag);
            error = 0;
        }
    }

    // Wenn doch wieder eine falsche Kontonummer eingegeben wurde...Abbruch
    if(error != 0)
    {
        printf("\n\n\t\tDie Kontonummer ist immer noch unbekannt!");
        printf("\n\n\t\tEinzahlung konnte nicht gebucht werden!");
    }

    printf("\n\n\t\tFertig!\n");
}

// Genau wie Einzahlungsfunktion nur mit Subtraktion für die Abbuchung
void abhebung( void )
{
    double kontonummer, einzahlungsbetrag = .0;
    int zeile, error = 1;

    system("cls");
    printf("\n\n\t\t*** Abhebung - Bitte Konto auswaehlen ***");

    for( zeile = 0; zeile < alleKonten; zeile++ )
    {
        printf("\n\t\t%d) Kontonummer %.0lf mit aktuellem Kontostand von %.2lf EUR", zeile, kontenArray[zeile][0], kontenArray[zeile][1]);
    }

    printf("\n\n\t\tGeben Sie mir die Kontonummer fuer die Abhebung:\n\t\t--> ");
    scanf("%lf", &kontonummer);
    fflush( stdin );

    for( zeile = 0; zeile < alleKonten; zeile++ )
    {
        if( kontonummer == kontenArray[zeile][0] )
        {
            error = 0;
        }
    }

    if(error != 0)
    {
        printf("\n\n\t\tDie Kontonummer ist unbekannt!");
        printf("\n\n\t\tGeben Sie mir die Kontonummer fuer die Abhebung:\n\t\t--> ");
        scanf("%lf", &kontonummer);
        fflush( stdin );
    }

    printf("\n\n\t\tGeben Sie mir die Summe der Abhebung:\n\t\t--> ");
    scanf("%lf", &einzahlungsbetrag);
    fflush( stdin );

    for( zeile = 0; zeile < alleKonten; zeile++ )
    {
        if( kontonummer == kontenArray[zeile][0] )
        {
            kontenArray[zeile][1] = ( kontenArray[zeile][1] - einzahlungsbetrag );
            error = 0;
        }
    }

    if(error != 0)
    {
        printf("\n\n\t\tDie Kontonummer ist unbekannt!");
        printf("\n\n\t\tAbbuchung konnte nicht gebucht werden!");
    }

    printf("\n\n\t\tFertig!\n");
}

// Verzinsung für alle Konten
void verzinsen( void )
{
    int zeile;
    double verzinsung = .0;

    system("cls");
    printf("\n\n\t\t*** Verzinsung ***");

    printf("\n\n\t\tGeben Sie mir die Zinsen in Prozent:\n\t\t--> ");
    scanf("%lf", &verzinsung);
    fflush( stdin );

    // Jedes Konto wird um die entsprechenden Zinsen erhöht...
    for( zeile = 0; zeile < alleKonten; zeile++ )
    {
        kontenArray[zeile][1] = kontenArray[zeile][1] + ( kontenArray[zeile][1] / 100 * verzinsung );
    }

    printf("\n\n\t\tFertig!\n");
}

// Zinsen nur einem Konto gutschreiben
void einzelverzinsung( void )
{
    int zeile, error = 1;
    double kontonummer, verzinsung = .0;

    system("cls");
    printf("\n\n\t\t*** Verzinsung ***");

    printf("\n\n\t\tGeben Sie mir die Kontonummer fuer die Einzelverzinsung:\n\t\t--> ");
    scanf("%lf", &kontonummer);
    fflush( stdin );

    // Überprüfen ob das Konto (Kontonummer) überhaupt vorhanden ist?
    for( zeile = 0; zeile < alleKonten; zeile++ )
    {
        if( kontonummer == kontenArray[zeile][0] )
        {
            // Wenn das Konto vorhanden ist, wird der Fehler zurückgesetzt
            error = 0;
        }
    }

    // Ist der Fehler noch vorhanden, wurde das Konto nicht gefunden...
    if(error != 0)
    {
        printf("\n\n\t\tDie Kontonummer ist unbekannt!");
        printf("\n\n\t\tGeben Sie mir die Kontonummer fuer die Einzelverzinsung:\n\t\t--> ");
        scanf("%lf", &kontonummer);
        fflush( stdin );
    }

    printf("\n\n\t\tGeben Sie mir die Zinsen in Prozent:\n\t\t--> ");
    scanf("%lf", &verzinsung);
    fflush( stdin );

    // Iteration über alle vorhandenen Konten - bis das richtige gefunden wurde
    // Wird die richtige Kontonummer gefunden, werden die Zinsen berechnet und addiert
    for( zeile = 0; zeile < alleKonten; zeile++ )
    {
        if( kontonummer == kontenArray[zeile][0] )
        {
            kontenArray[zeile][1] = kontenArray[zeile][1] + ( kontenArray[zeile][1] / 100 * verzinsung );
            error = 0;
        }
    }

    printf("\n\n\t\tFertig!\n");
}

// Hauptfunktion in WHILE-Schleife 
// Hauptmenü wird gezeigt nach jeder Aktion, bis der USER mit EIngabe 99 - siehe Hauptmenü-Funktion - 
// Die Anwendung verlassen möchte.
int main( void )
{
    system("cls");

    while( auswahl != 99 )
    {
        auswahl = zeigeMenue();

        if( auswahl == 1 )
        {
            neueKontenAnlegen();
        }
        else if( auswahl == 2 )
        {
            zeigeAlleKonten();
        }
        else if( auswahl == 3 )
        {
            einzahlung();
        }
        else if( auswahl == 4 )
        {
            abhebung();
        }
        else if( auswahl == 5 )
        {
            verzinsen();
        }
        else if( auswahl == 6 )
        {
            einzelverzinsung();
        }
    }

    printf("\n\n\t\tSie haben die Kontenverwaltung auf eigenen Wunsch verlassen!\n\n");

    return EXIT_SUCCESS;
}