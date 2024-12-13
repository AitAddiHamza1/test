#include <stdio.h>

typedef struct 
{
    char nom[30] , prenom[30];
    int age ;
    int score ;
} joueur;

typedef struct 
{
    char nom[30];
    joueur joueur1 ;
    joueur joueur2 ;
} equipes;

void saisirUnJoueur( joueur*j)
{
    // for (int i = 0; i <2 ; i++)
    // {
        // printf("l'information sur le joueur %d : ",i+1);
        printf("entrez le prenom : ");
        scanf(" %[^\n]", j->prenom);
        printf("entrez le Nom : ");
        scanf(" %[^\n]", j->nom);
        printf("entrez l'age : ");
        scanf("%d", &j->age);
        printf("entrez un score allant de 0 à 10 indiquant le niveau de joueur : ");
        scanf("%d", &j->score);
    // }
}
void saisirUnEquipe(equipes*e)
{
    static int memorise = 0;
    printf("sasisir le nom de l'equipe : ");
    scanf("%s", e->nom);
    printf("\n****************************\n");
    printf("\nl'information sur le joueur1 : \n");
    saisirUnJoueur(&e->joueur1);
    printf("\n****************************\n");
    printf("l'information sur le joueur2 : \n");
    saisirUnJoueur(&e->joueur2);
    printf("\n****************************\n");
    memorise ++;
}

void afficherUneJoueur(joueur*j)
{
    printf("Joueur : %s %s, age : %d, score : %d\n", j->prenom, j->nom, j->age, j->score);
}

void afficherUneEquipe(equipes*e)
{
    printf("Nom de l'equipe : %s\n", e->nom);
    printf("\n****************************\n");
    printf("le joueur 1 :\n");
    afficherUneJoueur(&e->joueur1);
    printf("\n****************************\n");
    printf("le joueur 2 :\n");
    afficherUneJoueur(&e ->joueur2);
}    

int main()
{
    equipes e[10];
    int i, nbrEquipe;
    printf("donnez le nombre de l'equipe : ");
    scanf("%d",&nbrEquipe);
    for(i=0; i<nbrEquipe; i++)
    {
        printf("donnez l'information pour le equipe %d : \n" , i+1);
        saisirUnEquipe(&e[i]);
    }

    for(i=0; i<nbrEquipe; i++)
    {
    printf("l'information de le equipe %d : \n" , i+1);
    afficherUneEquipe(&e[i]);
    printf("\n==================================\n");
    }
    return 0;
}