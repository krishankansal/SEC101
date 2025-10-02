#include <stdio.h>
#include <stdlib.h>


int main()
{
    int userChoice, computerChoice, result;
    char choices[3][10] = {"Rock", "Paper", "Scissors"};


    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Choose your move:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Enter your choice (1-3): ");

    scanf("%d", &userChoice);

    // Validate user input
    if (userChoice < 1 || userChoice > 3)
    {
        printf("Invalid choice! Please run the program again.\n");
        return 1;
    }

    // Generate computer's choice (1-3)
    computerChoice = rand() % 3 + 1;

    printf("\nYou chose: %s\n", choices[userChoice - 1]);
    printf("Computer chose: %s\n", choices[computerChoice - 1]);

    // Determine winner
    if (userChoice == computerChoice)
    {
        printf("It's a tie!\n");
    }
    else if ((userChoice == 1 && computerChoice == 3) || // Rock beats Scissors
             (userChoice == 2 && computerChoice == 1) || // Paper beats Rock
             (userChoice == 3 && computerChoice == 2))
    { // Scissors beats Paper
        printf("You win!\n");
    }
    else
    {
        printf("Computer wins!\n");
    }

    return 0;
}
