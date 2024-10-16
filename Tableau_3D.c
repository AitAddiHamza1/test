#include<stdio.h>
int main()
{
    int i , j , k;
    int M[3][2][2];
    printf("veuillez saisir les elements du tableau :\n\a");
    for(i = 0; i < 3 ; i++)
    {
        for(j = 0; j < 2 ; j++)
        {
            for(k = 0 ; k < 2 ; k++)
            {
                printf("M[%d][%d][%d] : ",i ,j ,k);
                scanf("%d",&M[i][j][k]);
            }
        }
    }

        printf("les elements du tableau sont :\n\a");
    for(i = 0; i < 3 ; i++)
    {
        for(j = 0; j < 2 ; j++)
        {
            for(k = 0 ; k < 2 ; k++)
            {
                
                printf("%d\t\a",M[i][j][k]);
            }
            printf("\n\n");
        }
        printf("\n\n");
    }
    return 0;

}