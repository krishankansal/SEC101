// positive or negative
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    if (x >= 0)
    {
        printf("Number is positive");
    }
    else
    {
        printf("Number is Negative");
    }
    return 0;
}