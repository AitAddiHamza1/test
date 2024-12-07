#include<stdio.h>
#include<stdlib.h>

//la declaration d'un new type (strucure)
typedef struct{
    int jours;
    int mois;
    int annee;
}Datenais;


typedef struct {
    char nom[50];
    char prenom[50];
    Datenais Dat;
}Stagiaire;

int main()
{
    int i,st;

    printf("Donnez le nombre du stagiaires : ");
    scanf("%d",&st);
    Stagiaire stag[st];
    for (i=0; i<st; i++)
    {
    //remplissage des informations du stagiaire
    printf("entrer l'information de stagiaire %d : \n", i+1);
    printf("donnez le nom : ");
    scanf("%s", stag[i].nom);
    printf("donnez le prenom : ");
    scanf("%s", stag[i].prenom);
    printf("donnez la datenais : \n");
    printf("jours : ");
    scanf("%d",&stag[i].Dat.jours);
    printf("moist : ");
    scanf("%d",&stag[i].Dat.mois);
    printf("annee : ");
    scanf("%d",&stag[i].Dat.annee);
    system("cls");
    }
    for(i = 0; i <st ; i++)
    {
    //affichage des informations du stagiaire
    printf("********************************\n");
    printf("les informations du stagiaire %d est : \n", i+1);
    printf("le nom : %s\n",stag[i].nom);
    printf("le prenom : %s\n",stag[i].prenom);
    printf("la datenais : ");
    printf("%d / %d / %d\n",stag[i].Dat.jours,stag[i].Dat.mois,stag[i].Dat.annee);
    printf("********************************\n");
    }
    return 0;
}
