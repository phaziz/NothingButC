#include <stdio.h>
#include <stdlib.h>

void showLogo(void);

int main (void)
{
    char gesuchtesWort[100];
    char tempSpeicher[100];
    char buchstabe;
    int versuche = 10;
    int unterstrich = 0;
    
    system("cls");
    showLogo();

    printf("\n\nBitte geben Sie das Suchwort ein:\n\n--> ");
    scanf("%s", &gesuchtesWort[0]);
    fflush(stdin);

    printf("\n\n");

    int i = 0;

    for( ; gesuchtesWort[i] != '\0'; i++){
        tempSpeicher[i] = '_';
        printf("_");
    }

    tempSpeicher[i] = '\0';

    do{
        printf("\n\nBitte geben Sie einen Buchstaben ein:\n\n--> ");
        buchstabe = getchar();
        int status = 1;

        for(int i = 0; gesuchtesWort[i] != '\0'; i++)
        {
            if(gesuchtesWort[i] == buchstabe)
            {
                tempSpeicher[i] = buchstabe;
                status = 0;
            }
        }

        versuche = versuche - status;
        
        for(i = 0; tempSpeicher[i] != '\0'; i++)
        {
            printf("%c", tempSpeicher[i]);

            if(tempSpeicher[i] == '_')
            {
                unterstrich++;
            }
        }

        printf("- %d - ", unterstrich);

        if(unterstrich == 0)
        {
            printf("\n\nHerzlichen Glueckwunsch - GEWONNEN!!!\n\n");
            break;
        }
        else
        {
            printf("\n\nDu hast noch %i Versuche\n\n", versuche);
        }
    } while( versuche != 0 );

    if(versuche == 0){
        printf("\n\nVersuche sind aufgebraucht - VERLOREN!!!\n\n");
    }

    printf("\n\n");

    return EXIT_SUCCESS;
}

void showLogo() {
      printf("\n\n\t\t\t\t--------------------------------------------\n");
      printf("\t\t\t\t| #  #   #   #   #  #### #   #   #   #   # |\n");
      printf("\t\t\t\t| #  #  # #  ##  # #     ## ##  # #  ##  # |\n");
      printf("\t\t\t\t| #### ##### # # # #  ## # # # ##### # # # |\n");
      printf("\t\t\t\t| #  # #   # #  ## #   # #   # #   # #  ## |\n");
      printf("\t\t\t\t| #  # #   # #   #  ###  #   # #   # #   # |\n");
      printf("\t\t\t\t--------------------------------------------\n\n");
}