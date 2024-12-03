#include<stdio.h>

// float mettre_a_jour_note(float note) {
//     return note + 1;
// }

void mettre_a_jour_note2(float tab[], int nombre_etudiants , int i) 
{
    if (i >= 0 && i < nombre_etudiants) 
    { 
        tab[i] = mettre_a_jour_note(tab[i]);
    }
}

int main() 
{
    float tab[100]; 
    int nombre_etudiants, i ,p;

//     printf("saisissez la note d'un etudiant : ");
//     scanf("%f", &note);
//     printf("La note mis a jour est : %.2f\n", mettre_a_jour_note(note));


    printf("Combien d'etudiants ? ");
    scanf("%d", &nombre_etudiants);

    for (i = 0; i < nombre_etudiants; i++) 
    {
        printf("Saisir la note de l'etudiant %d (entre 0 et 20) : ", i + 1);
        scanf("%f", &tab[i]);

        if (tab[i] < 0 || tab[i] > 20) 
        {
            printf("Note invalide, ressaisir la note entre 0 et 20.\n");
            i--;
        }
    }
    printf("entrer le nombre d'etudiant : ");
    scanf("%d", &p);
    for (i = 0; i < nombre_etudiants; i++) 
    {
        mettre_a_jour_note2(tab, nombre_etudiants, i);
    }

    for (i = 0; i < nombre_etudiants; i++) 
    {
        if(p == (i+1))
        {
            printf("La note mise a jour de l'etudiant %d est : %.2f\n", i, tab[i]);
        }
    }
    return 0;
}