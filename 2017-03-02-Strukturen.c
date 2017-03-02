# include <stdio.h>
# include <stdlib.h>

struct isbn 
{
    unsigned int ersterBlock;
    unsigned int zweiterBlock;
    unsigned int dritterBlock;
    unsigned int vierterBlock;
    unsigned int fuenfterBlock;
};

struct medien
{
    struct isbn isbn_nummer;
    char titel[100];
    float preis;
    int erscheinungsjahr;
};

int main (void)
{
        system("cls");
        setbuf(stdin, NULL);

        struct medien buch;

        buch.isbn_nummer.ersterBlock = 978;
        buch.isbn_nummer.zweiterBlock = 3;
        buch.isbn_nummer.dritterBlock = 86680;
        buch.isbn_nummer.vierterBlock = 192;
        buch.isbn_nummer.fuenfterBlock = 9;
        buch.titel = "Stadt und Landkreis Hof";
        buch.preis = 18.99;
        buch.erscheinungsjahr = 2007;

        printf("\n\t\t%s", buch.isbn);
        printf("\n\t\t%s", buch.titel);
        printf("\n\t\t%.2f EUR", buch.preis);
        printf("\n\t\t%d", buch.erscheinungsjahr);
        
        return EXIT_SUCCESS;
}