// To print all the even numbers from 1 to number entered by the user
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the Number : ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i = i + 1)
    {
        if (i % 2 == 0)
        {
            printf("%d \n", i);
        }
    }

    return 0;
}