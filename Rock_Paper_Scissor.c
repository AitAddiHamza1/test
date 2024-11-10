
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int game(char you, char computer) {
    if (you == computer)
        return -1;

    switch (you) {
        case 's':
            return (computer == 'z') ? 1 : 0;
        case 'p':
            return (computer == 's') ? 1 : 0;
        case 'z':
            return (computer == 'p') ? 1 : 0;
        default:
            return -2;
    }
}

int main() {
    char you, computer;
    int n, result;

    srand(time(0));
    
    n = rand() % 3; 

    if (n == 0)
        computer = 's';
    else if (n == 1)
        computer = 'p'; 
    else
        computer = 'z'; 

    printf("\nEnter 's' for STONE, 'p' for PAPER, 'z' for SCISSORS: ");
    
    scanf(" %c", &you);

    result = game(you, computer);

    if (result == -1) {
        printf("\nGame Draw!\n");
    } else if (result == 1) {
        printf("\nWow! You have won the game!\n");
    } else if (result == 0) {
        printf("\nOh! You have lost the game!\n");
    } else {
        printf("\nInvalid input! Please enter 's', 'p', or 'z'.\n");
        return 1; 
    }

    printf("You chose: %c and Computer chose: %c\n", you, computer);

    return 0;
}