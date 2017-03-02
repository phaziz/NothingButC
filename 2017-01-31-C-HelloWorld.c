/*
 * Einbindung Header-Dateien
 */
# include <stdio.h>

/*
 * Funktionsprototypen
 */
void HelloWorld( void ); // Funktionsprototyp

/*
 * Hauptfunktion main()
 */
int main( void )
{
    printf( "Vor der Funktion HelloWorld()\n" );
    HelloWorld();
    printf( "\nNach der Funktion HelloWorld()\n" );
    return 0;
}

/*
 * Funktion HelloWorld();
 */
inline void HelloWorld( void )
{
    printf( "Hello world!" );
}
