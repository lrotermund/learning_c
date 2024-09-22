#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Guess the right number between 0 and 100 within five tries\n");

    srand((unsigned)time(NULL));
    int goal = rand() % (100 + 1 - 0) + 0;
    int tries = 0;
    int guess;

    while(scanf("%d", &guess) != EOF) {
        tries++;

        if(guess == goal) {
            printf(
                "Congratulations! Your %d guess '%d' was correct!\n",
                tries,
                guess
            );

            return 0;
        } else if(guess < goal) {
            printf("You guess was to low! %d tries left\n", 5 - tries);
        } else {
            printf("You guess was to high! %d tries left\n", 5 - tries);
        }

        if(tries == 5) {
            printf("Sorry you lose! The number was %d\n", goal);
            return 0;
        }
    }

    printf("EOF found. OK, bye!\n");
}
