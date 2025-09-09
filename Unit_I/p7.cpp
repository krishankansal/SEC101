// Nested if
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a Number : ");
    scanf("%d", &x);
    if (x > 0)
    {
        if (x % 2 == 0)
        {
            printf("Number is EVEN");
        }
        else
        {
            printf("Number is ODD");
        }
    }
    else
    {
        printf("Number is negative");
    }

    return 0;
}