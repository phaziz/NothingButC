#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 8-stelliges Kennwort generieren
// Mindestens ein Klein- und ein Großbuchstabe
// jedes Zeichen darf nur einmal vorkommen
// Keine Sonderzeichen
// Hinweis ASCII-Tabelle
// Kleinbuchstaben  97 - 122
// Großbuchstaben   65 - 90
// Zahlen           48 - 57

#define kleinbuchstabenMIN 97
#define kleinbuchstabenMAX 122
#define grossbuchstabenMIN 65
#define grossbuchstabenMAX 90
#define zahlenMIN 48
#define zahlenMAX 57

int main (void)
{
    system("cls");
    setbuf(stdin, NULL);
    srand( time( NULL ) );
    printf("\n\n\t\tDas Kennwort lautet: ");

    int kennwort[8];
    int i = 1;

    // Stelle 1
    int lb = kleinbuchstabenMIN, ub = kleinbuchstabenMAX;
    int zufall = ( rand() % ( ( ub + 1 ) - lb ) ) + lb;
    kennwort[i] = zufall;
    i++;

    // Stelle 2
    lb = grossbuchstabenMIN, ub = grossbuchstabenMAX;
    zufall = ( rand() % ( ( ub + 1 ) - lb ) ) + lb;
    kennwort[i] = zufall;
    i++;

    // Stelle 3
    lb = zahlenMIN, ub = zahlenMAX;
    zufall = ( rand() % ( ( ub + 1 ) - lb ) ) + lb;
    kennwort[i] = zufall;
    i++;

    // Stelle 4
    lb = kleinbuchstabenMIN, ub = kleinbuchstabenMAX;
    zufall = ( rand() % ( ( ub + 1 ) - lb ) ) + lb;
    kennwort[i] = zufall;
    i++;

    // Stelle 5
    lb = grossbuchstabenMIN, ub = grossbuchstabenMAX;
    zufall = ( rand() % ( ( ub + 1 ) - lb ) ) + lb;
    kennwort[i] = zufall;
    i++;

    // Stelle 6
    lb = zahlenMIN, ub = zahlenMAX;
    zufall = ( rand() % ( ( ub + 1 ) - lb ) ) + lb;
    kennwort[i] = zufall;
    i++;

    // Stelle 7
    lb = kleinbuchstabenMIN, ub = kleinbuchstabenMAX;
    zufall = ( rand() % ( ( ub + 1 ) - lb ) ) + lb;
    kennwort[i] = zufall;
    i++;

    // Stelle 8
    lb = grossbuchstabenMIN, ub = grossbuchstabenMAX;
    zufall = ( rand() % ( ( ub + 1 ) - lb ) ) + lb;
    kennwort[i] = zufall;
    
    for (int i = 1; i <= 8; i++)
    {
        printf("%c ", kennwort[i]);
    }

    printf("\n\n");

    return EXIT_SUCCESS;
}