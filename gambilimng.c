#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("WELCOME TO REX CASINO\n");
    srand(time(0)); // Seed the random number generator
    int random_number = rand() % 100 + 1;

    int m;
    printf("Enter the money you want to enter\n");
    scanf("%d", &m);

    int user_guess1;
    printf("Guess the random number between 1 and 100: ");
    scanf("%d", &user_guess1);

    int n = 1; // Initialize the attempt counter
    while (user_guess1 != random_number && n <= 3)
        
    {

        if (user_guess1 < random_number)
        {
            printf("your guess is too low!\n");
        }
        else if (user_guess1 > random_number)
        {
            printf("your guess is too high!\n");
        }

        printf("Enter your guess again: ");
        scanf("%d", &user_guess1);

        n++;
    }
    if (user_guess1 == random_number)
    {
        printf("Congratulations! You guessed the number %d in %d attempts.\n", random_number, n);
        printf("You win %d dollars\n", m * 2);
    }
    else
    {
        printf("Sorry, you've used all your attempts. The correct number was %d.\n", random_number);
        printf("You lose %d dollars\n", m);
    }
}
