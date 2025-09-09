#include <stdio.h>

int main()
{
    float percentage;
    printf("Enter your Percentage : ");
    scanf("%f", &percentage);
    if (percentage >= 60)
    {
        printf("Welcome");
        printf("\n You are elegible for admission");
    }
    else
    {
        printf("Sorry");
        printf("\n You are not elegible for admission");
    }

    return 0;
}