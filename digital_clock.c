#include <stdio.h>
#include <unistd.h>

void displayClock(int hour, int minute, int second) {
    // ANSI escape code to clear the screen and move the cursor to the top-left corner
    printf("\033[H\033[J");
    
    // Display the digital clock with borders and labels
    printf("+--------------------+\n");
    printf("|    DIGITAL CLOCK   |\n");
    printf("+--------------------+\n");
    printf("|     %02d:%02d:%02d       |\n", hour, minute, second);
    printf("+--------------------+\n");
}

int main() {
    int hour = 0, minute = 0, second = 0;

    while (1) {
        displayClock(hour, minute, second);

        second++;
        if (second == 60) {
            second = 0;
            minute++;
        }
        if (minute == 60) {
            minute = 0;
            hour++;
        }
        if (hour == 24) {
            hour = 0;
        }

        sleep(1);
    }
    
    return 0;
}
