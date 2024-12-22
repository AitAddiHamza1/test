#include<stdio.h>
#include<string.h>

typedef struct{
    char Nom[20] ;
    char Prenom[25] ;
    double Note[3];
    float Moyenne;
}Etudiant;

void E_tudiant(int n_etud , Etudiant etud[] )
{

    for (int i = 0; i<n_etud; i++)
    {
        printf(" entrer le nom de l'etudiant %d : " ,i+1);
        getchar();
        fgets(etud[i].Nom , sizeof(etud[i].Nom),stdin);
        etud[i].Nom[strcspn(etud[i].Nom,"\n")] = 0;

        printf("entrer le prenom de l'etudiant \" %s \" : ",etud[i].Nom );
        fgets(etud[i].Prenom , sizeof(etud[i].Prenom),stdin);
        etud[i].Prenom[strcspn(etud[i].Prenom,"\n")] = 0;

        printf("\nentrer les notes de l'etudiant %s %s : \n", etud[i].Nom, etud[i].Prenom );
        float som = 0;
        for(int j=0; j<3 ; j++)
        {
            printf("note %d : ", j+1 );
            scanf("%lf", &etud[i].Note[j]) ;
            som += etud[i].Note[j];
        }

        etud[i].Moyenne = som/3.0 ;
        
    }
}
int main ()
{
    int i,n_etud;

    printf("entrer le nombre l'etudiant : ");
    scanf("%d", &n_etud);

    Etudiant etud[n_etud];
    E_tudiant(n_etud , etud);

    for(i=0; i<n_etud ; i++)
        {
            printf("Les moyenne de l'etudiant %s %s est %.2f : \n", etud[i].Nom, etud[i].Prenom, etud[i].Moyenne);
        }

    return 0;
}