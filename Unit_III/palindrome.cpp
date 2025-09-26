// Check if a given positive integer number is a palindrome or not?

#include <stdio.h>

int main()
{
    int num, original, reversed = 0, digit;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    original = num; // Store original number

    // Reverse the number
    while (num > 0)
    {
        digit = num % 10;                 // Extract last digit
        reversed = reversed * 10 + digit; // Build reversed number
        num = num / 10;                   // Remove last digit
    }

    // Compare original with reversed
    if (original == reversed)
    {
        printf("%d is a PALINDROME number.\n", original);
    }
    else
    {
        printf("%d is NOT a palindrome number.\n", original);
    }

    return 0;
}
