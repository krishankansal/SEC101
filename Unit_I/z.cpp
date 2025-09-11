// To find a given numer is prime or not
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
            count = count + 1;
        }
    }

    if (count == 2)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }

    return 0;
}