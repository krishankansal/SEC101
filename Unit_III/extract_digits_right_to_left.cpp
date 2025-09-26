// Extract digits of an integer number right to left

#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0)
    {
        printf("-");
        num = -num;
    }

    while (num > 0)
    {
        int digit = num % 10; // Extract last digit
        printf("%d ", digit);
        num = num / 10; // Remove last digit
    }
    printf("\n");

    return 0;
}
