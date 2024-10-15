#include<stdio.h>
int main()
{
    float notes[5][3];
    float S , M;
    int i , j;

    for (i = 0 ; i < 5 ; i++)
    {
        for (j = 0 ;  j < 3 ; j++)
        {
            printf("Donner la note de l'etudiant num %d dans la matiere %d : ", i+1 , j+1);
            scanf("%f" , &notes[i][j]);
        }
    }
    for (i = 0 ; i < 5 ; i++)
    {
        S = 0;
        for(j = 0 ; j < 3 ; j++)
        {
            S = S + notes[i][j];
        }
        M = S / 3 ;
        printf("la moyenne de l'etudiant num %d est %.2f \n ",i+1,M);
    }
    return 0;

}