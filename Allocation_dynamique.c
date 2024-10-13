#include<stdlib.h>
#include<stdio.h>

void main()
{
    int n , i;
    float S , M ;

    printf("veuillez saisir la taille du tableau : ");
    scanf("%d", &n);

    float *T = calloc(n, sizeof(float));
    if(T == NULL)
    {
        printf("la memoire n'est pas allouée : ");
        exit(0);
    }

    else
    {
        for(i=0; i<n ; i++)
        {
            printf("veuillez saisir les element T[%d] : ",i + 1);
            scanf("%f", (T + i));
        }

        S = 0;

        for(i=0 ; i<n ; i++)
        {
            S = S + *(T + i);
        }

        M = S / n;

        printf("la somme des elements du tableau est : %.2f \n", S);
        printf("la moyenne des elements du tableau est : %.2f \n", M);
        
        free(T);
        

    }
}