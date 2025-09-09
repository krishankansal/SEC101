// To print the table of a given number
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the Number : ");
    scanf("%d", &number);
    for (int i = 1; i <= 10; i = i + 1)
    {
        printf("\n %d X %d = %d", number, i, (i * number));
    }

    return 0;
}