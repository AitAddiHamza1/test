#include <stdio.h>

void fusion(int T[], int debut, int m, int fin)
{
    int i, j, K;
    int n1 = m - debut + 1;
    int n2 = fin - m;
    int Tdebut[n1], Tfin[n2];

    for (i = 0; i < n1; i++)
    {
        Tdebut[i] = T[debut + i];
    }

    for (j = 0; j < n2; j++)
    {
        Tfin[j] = T[m + 1 + j];
    }

    i = 0;
    j = 0;
    K = debut;

    while (i < n1 && j < n2)
    {
        if (Tdebut[i] <= Tfin[j])
        {
            T[K] = Tdebut[i];
            i++;
        }
        else
        {
            T[K] = Tfin[j];
            j++;
        }
        K++;
    }

    while (i < n1)
    {
        T[K] = Tdebut[i];
        i++;
        K++;
    }
    while (j < n2)
    {
        T[K] = Tfin[j];
        j++;
        K++;
    }
}

void triFusion(int T[], int debut, int fin)
{
    if (debut < fin)
    {
        int m = (debut + fin) / 2;
        triFusion(T, debut, m);
        triFusion(T, m + 1, fin);
        fusion(T, debut, m, fin);
    }
}

void affichage(int T[], int taille)
{
    for (int i = 0; i < taille; i++)
        printf("%d | ", T[i]);
    printf("\n");
}

int main()
{
    int taille, i;

    printf("Enter the size of the array: ");
    scanf("%d", &taille);
    int T[taille];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < taille; i++)
    {
        printf("T[%d] = ", i);
        scanf("%d | ", &T[i]);
    }

    printf("\nOriginal array:\n");
    affichage(T, taille);

    triFusion(T, 0, taille - 1);

    printf("Sorted array:\n");
    affichage(T, taille);

    return 0;
}