#include <stdio.h>
#include <stdlib.h>

// alouer une espace memoire initial; puis remplir le vecteur allou�, et tant que l'utilisateur saisi des element changer
// la taille de l'expace memoire allou�
int *alloue_et_remplit_vecteur(int *taille) {
    int capacite = 5; // Taille initiale du vecteur
    int *vecteur = (int *)calloc(capacite, sizeof(int)); // Allouer avec calloc
    if (vecteur == NULL) {
        printf("Erreur d'allocation de m�moire\n");
        exit(1);
    }

    int index = 0;
    int valeur;
    printf("Entrez les valeurs du vecteur (entrez -1 pour terminer) :\n");

    while (valeur != -1) {
        printf("Valeur %d : ", index + 1);
        scanf("%d", &valeur);
		        // Si l'utilisateur entre -1, on arr�te la saisie
               // Si le vecteur est plein, on le redimensionne
        if (index >= capacite) {
            capacite *= 2; // Doubler la capacit�
            vecteur = (int *)realloc(vecteur, capacite * sizeof(int));
            if (vecteur == NULL) {
                printf("Erreur de r�allocation de m�moire\n");
                exit(1);
            }
        }

        // Ajouter la valeur au vecteur
        if(valeur != -1) vecteur[index] = valeur;// *(vecteur+index) = valeur
        index++;
    }

    // Redimensionner le vecteur � la taille exacte utilis�e
    vecteur = (int *)realloc(vecteur, index * sizeof(int));
    if (vecteur == NULL) {
        fprintf(stderr, "Erreur de reallocation de memoire\n");
        exit(1);
    }

    *taille = index; // Mettre � jour la taille du vecteur
    return vecteur;
}

void affiche_vecteur(int *vecteur, int dimension) {
    int i;
	for (i = 0; i < dimension; i++) {
        printf("%d", vecteur[i]);
        if (i < dimension - 1) {
            printf(", ");
        }
    }
}

int main() {
    
int t[10];
t[0]= 10;
t[1]= 6;
int ta= 10*sizeof(int);
int *v = malloc(ta); // int *v = calloc(10,sizeof(int))
v[0] = 10;// *(v+0) = 10 ---> *v=10
v[1] = 6;// *(v+1
	
	int taille;

    // Allouer et remplir le vecteur
    int *vecteur = alloue_et_remplit_vecteur(&taille);

    // Afficher le vecteur
    printf("Vecteur saisi : ");
    affiche_vecteur(vecteur, taille-1);

    // Lib�rer la m�moire
    free(vecteur);
    printf("\nVecteur libere.\n");

    return 0;
}
