#include <stdio.h>
#include <math.h>


int main()
{

    int i , n , factorielle , p;
    printf ("entrer un nombre n : ");
    scanf("%d", &n);
    
    factorielle = 1;
    for(i=0 ; i < n ; i++)
    {
        factorielle = factorielle * (i+1);
    }
    printf("le factorielle de %d est : %d\n\n", n, factorielle);

    return 0;
}