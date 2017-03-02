# include <stdio.h>
# include <stdlib.h>

#define Januar = 1;
#define Februar = 2;
//...

enum monate {
    // Jan, Feb, Mrz, Apr, Mai, Jun, Jul, Aug, Sep, Okt, Nov, Dez // Mrz == 2;
    Jan=1, Feb=2, Mrz=3, Apr=4, Mai=5, Jun=6, Jul=7, Aug=8, Sep=9, Okt=10, Nov=11, Dez=12 // Mrz == 3;
};

int main (void)
{
    setbuf(stdout, NULL);

    printf("\n\n");

    enum monate mon;

    mon = Mrz; // 3

    if (mon == Mrz)
        printf("Zahl Mrz = %d\n\n", mon); // 3

    mon = 5;

    if (mon == 5)
        printf("Zahl Mai = %d\n\n", mon); // 5

    for(int i = 1; i <= 12; i++){
        mon = i;
        printf("Zahl: %d\n", mon);
        if(mon == 1)
            printf("\tJanuar\n\n");
        if(mon == 2)
            printf("\tFeburar\n\n");
        if(mon == 3)
            printf("\tMaerz\n\n");
        if(mon == 4)
            printf("\tMotherfucking April\n\n");
        if(mon == 5)
            printf("\tMai\n\n");
        if(mon == 6)
            printf("\tJuni\n\n");
        if(mon == 7)
            printf("\tJuli\n\n");
        if(mon == 8)
            printf("\tAugust\n\n");
        if(mon == 9)
            printf("\tSeptember\n\n");
        if(mon == 10)
            printf("\tOktober\n\n");
        if(mon == 11)
            printf("\tNovember\n\n");
        if(mon == 12)
            printf("\tDezember\n\n");
    }

    printf("\n\n");

    return EXIT_SUCCESS;
}