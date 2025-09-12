//  Find the factorial of a number using do . while loop

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);

    int i = 0;

    do
    {
        i = i + 1;
        if (num % i == 0)
        {
            printf("%d ", i);
        }

    } while (i < num);

    return 0;
}