// To find all the factors of a given numer
#include <stdio.h>

int main()
{
    int num;
    int count = 0;
    printf("Enter a Number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i = i + 1)
    {

        if (num % i == 0)
        {
            printf("%d ", i);
            count = count + 1;
        }
    }

    printf("\n Total Factors = %d", count);

    return 0;
}