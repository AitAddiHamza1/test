#include<stdio.h>
int main(){
    char C1[100];
    char C2[100];
    char i;

    printf ("veuillez saisir une chaine :");
    gets(C1);
    for(i=0;C1[i]!='\0';i++)
    {
        C2[i] = C1[i];
    }
    C2[i] = '\0';

    printf("la premiere chaie est :%s \n", C1);
    printf("la deuxieme chaie est :%s \n", C2);
    printf("nombre total de carcteres copies est : %d",i);

    return 0;
}