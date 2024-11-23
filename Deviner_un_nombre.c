#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int NombreAleatoire = 0;
    int NombreTentative = 0 ;
    int NombreEntre;
    int EstCorrect = 0;
    const int Max = 30, Min = 1;
    srand(time(NULL));
    NombreAleatoire =( rand() % (Max - Min + 1)) + Min;
    printf("l'ordinateur a choisi un nombre entre 1 et 30. A vous de le deviner en 5 tentatives au maximum ! \n ");
    do
    {
        NombreTentative ++ ;
        printf("Quel est ce nombre ?\t");
        scanf("%d", &NombreEntre);

        if(NombreEntre < NombreAleatoire)
        {
            printf("C'est plus  !\n");
        }
        else if(NombreEntre > NombreAleatoire)
        {
            printf("C'est moins  !\n");
        }
        else 
        {
            EstCorrect = 1;
            break;
        }
    } while (NombreTentative < 5);
    
    if (EstCorrect == 1)
        printf("Brevo ! vous aves trouve %d en %d essais. ", NombreAleatoire, NombreTentative);
    else
        printf("Oups ! vous avez depasse les 5 tentatives autorisees. le nombre etait : %d . ", NombreAleatoire);

    return 0 ;
}