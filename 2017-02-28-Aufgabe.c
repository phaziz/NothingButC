#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(void)
{
    setbuf(stdout, NULL);
    system("cls");

    double einkommen_miete[5][2];

    einkommen_miete[0][0] = 4200.0;
    einkommen_miete[0][1] = 1200.0;

    einkommen_miete[1][0] = 900.0;
    einkommen_miete[1][1] = 340.0;

    einkommen_miete[2][0] = 1800.0;
    einkommen_miete[2][1] = 600.0;

    einkommen_miete[3][0] = 3600.0;
    einkommen_miete[3][1] = 1100.0;

    einkommen_miete[4][0] = 2700.0;
    einkommen_miete[4][1] = 800.0;

    einkommen_miete[5][0] = 5900.0;
    einkommen_miete[5][1] = 1300.0; 

    printf("\n\n");

    for (int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("\t\t%d %d --> %.2lf\n", i, j, einkommen_miete[i][j]);
        }
    }

    printf("%.2lf", einkommen_miete[5][0]);

    printf("\n\n");

    return EXIT_SUCCESS;
}