// To check whether the number is even or odd
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a Number: ");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("\n Number is even");
    }
    else
    {
        printf("\n Number is odd");
    }
    return 0;
}

