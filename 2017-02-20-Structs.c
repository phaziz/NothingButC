# include <stdio.h>
# include <stdlib.h>

enum monate {
    Jan, Feb, Mrz, Apr, Mai, Jun, Jul, Aug, Sep, Okt, Nov, Dez
};

int main (void)
{
    setbuf(stdout, NULL);

    enum monate mon;
    mon = Mrz;

    printf("Zahl: %d", mon);

    return EXIT_SUCCESS;
}