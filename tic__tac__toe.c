

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <ctype.h>
#include <time.h>

char box[10] = {'0' , '1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' };
void creating_board();
int working_board(int, char); // Changed return type to int
int check_for_win();

int main()
{
    int choice, player = 1, i;
    char mark;
    char response = ' ';
    do
    {   
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif    
        creating_board();
        player = (player % 2) ? 1 : 2;
        printf("Player %d, enter a number: ", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X' : 'O' ;
        while(working_board(choice, mark) == 0) // While the move is invalid, keep asking for input
        {
            printf("Invalid move! Player %d, enter a valid number: ", player);
            scanf("%d", &choice);
            
        }
        i = check_for_win();
        player++;
    } while(i == -1);
    creating_board();
    if (i == 1)
        printf("\nPlayer %d wins. Congratulations!\n", --player);
    else if (i == 0)
        printf("\nMatch draw!\n");

       printf("\nWould you like to play again? (Y/N): ");
       scanf("%c");
       scanf(" %c", &response);
       response = toupper(response);
    while (response == 'Y' || response == 'y');
   
       printf("Thanks for playing!");    

    getch();
    return 0;
}

void creating_board()
{
    printf("⨌⨉ ⨌ ✨ WELCOME TO TIC TAC TOE✨ ⨌⨉ ⨌\n\n");
    printf("player 1 (👍) 🥓\t🥓 player 2 (👌)\n\n");
    printf("____________________\n");
    printf("  %c   |  %c   |  %c   |\n", box[1], box[2], box[3]);
    printf("______|______|______|\n");
    printf("  %c   |  %c   |  %c   |\n", box[4], box[5], box[6]);
    printf("______|______|______|\n");
    printf("  %c   |  %c   |  %c   |\n", box[7], box[8], box[9]);
    printf("______|______|______|\n");

}

int working_board(int choice , char mark) // Return 1 if valid move, else 0
{
    if (choice >= 1 && choice <= 9 && box[choice] == '0' + choice) // Check if the position is available
    {
        box[choice] = mark;
        return 1; // Valid move
    }
    else
    {
        return 0; // Invalid move
    }
}

int check_for_win()
{
    // Check rows
    if (box[1] == box[2] && box[2] == box[3])
        return 1;
    else if (box[4] == box[5] && box[5] == box[6])
        return 1;
    else if (box[7] == box[8] && box[8] == box[9])
        return 1;
    
    // Check columns
    else if (box[1] == box[4] && box[4] == box[7])
        return 1;
    else if (box[2] == box[5] && box[5] == box[8])
        return 1;
    else if (box[3] == box[6] && box[6] == box[9])
        return 1;

    // Check diagonals
    else if (box[1] == box[5] && box[5] == box[9])
        return 1;
    else if (box[3] == box[5] && box[5] == box[7])
        return 1;

    // Check for draw
    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' &&
             box[4] != '4' && box[5] != '5' && box[6] != '6' &&
             box[7] != '7' && box[8] != '8' && box[9] != '9')
        return 0; 
    
    // Game still ongoing
    else
        return -1;
}

