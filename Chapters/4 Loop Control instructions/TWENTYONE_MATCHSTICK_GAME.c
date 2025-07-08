// Try to program for a matchstick game being played between computer and a user. your program should ensure that the computer always wins. Rules for the game are as follows

//     there are 21 matchsticks
//     the computer asks the player to pick 1,2,3 or 4 matchsticks
//     after the person takes the computer does its piggy
//     whoever is forced to pick up the last matchstick loses the game
#include <stdio.h>
int main()
{
    int p, i = 21;
    printf("- There are 21 matchsticks\n"
           "- You have to pick 1,2,3 or 4 matchsticks\n"
           "- After you the computer does its picking\n"
           "- Whoever is forced to pick up the last matchstick loses the game\n");
    while (i > 1)
    {
        printf("Pick your Matchsticks-");
        scanf("%d", &p);
        printf("You picked %d matchsticks\n", p);

        if (p >= 1 && p <= 4)
        {
            printf("%d matchsticks left\n", i - p);
            printf("Computer Picks %d matchsticks\n", 5 - p);
            i -= 5;
            printf("%d matchsticks left\n", i);
        }
        else
        {
            printf("Enter a valve from 1-4\n");
        }
    }
    printf("Your turn -\n COMPUTER WINS !!!!!!");

    return 0;
}