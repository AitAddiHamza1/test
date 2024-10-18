#include <stdio.h>
#include <string.h>
int main()
{
    char users[6][20] = {"amine","amale","admin","Ali","med","man"};
    char logen[20];
    int i , x;
    printf("entrer votre logan : ");
    gets(logen);
    x = 0;
    for(i = 0; i < 6 ; i++)
    {
        if (strcmp(logen , users[i]) == 0)
        {
            x = 1;
            break;
        }
    }
    if( x == 1)
    {
        printf("Benvenue %s !", logen);
    }
    else
    {
        printf("Vous n'etes pas autorise a entrer!");
    }
    getchar();
    return 0;
}