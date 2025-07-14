// Number guessing game
// generates a random number and asks the player to guess
// if player's guess is higher than the actual number the program displays lower number please
// similarly if the user's case is too low program prints higher number please
// when the user guesses the correct number the program is the number of cases the player used to arrive at the number

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int num = (rand() % 100) + 1, guess, attempts = 0;
    printf("I have selected a number between 1 and 100. Can you guess it?\n");

    while (1)
    {
        attempts++;
        printf("Take your Guess - ");
        scanf("%d", &guess);

        if (guess > num)
        {
            printf("Guess a Lower Number\n");
            printf("...........................................................\n");
        }
        else if (guess < num)
        {
            printf("Guess a Higher Number\n");
            printf("...........................................................\n");
        }
        else if (guess == num)
        {
            printf("CORRECT!!...You took %d guesses\n", attempts);
            break;
        }
    }
    return 0;
}