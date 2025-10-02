// Number uessing Game
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int number, guess, attempts = 0;

    // Generate a random number between 1 and 100
    number = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("Can you guess what it is?\n\n");

    // Game loop
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number)
        {
            printf("Too high! Try again.\n");
        }
        else if (guess < number)
        {
            printf("Too low! Try again.\n");
        }
        else
        {
            printf("Congratulations! You guessed it correctly!\n");
            printf("The number was %d and you took %d attempts.\n", number, attempts);
        }

    } while (guess != number);

    return 0;
}
