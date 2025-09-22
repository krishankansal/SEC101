// To find the sum of all elements of given array
//  and average
#include <stdio.h>
int main()
{
    int x[5] = {10, 20, 10, 20, 10};
    int sum = 0;
    for (int i = 0; i <= 4; i = i + 1)
    {
        sum = sum + x[i];
    }
    printf("The sum of array = %d", sum);
    int y = 0;
    printf("\n Size of int = %d", sizeof(y));
    printf("\n Total memory of array x = %d", sizeof(x));
    int size = sizeof(x) / sizeof(int);
    printf("\n Number od elements in array = %d", size);
    printf("\n Everage of array = %d", (sum / size));
    return 0;
}