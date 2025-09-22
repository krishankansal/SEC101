// To find the largest element in a given array
#include <stdio.h>
int main()
{
    int x[7] = {989, -1, 560, 99, 89, 101, 78};
    int largest = x[0];
    for (int i = 1; i < 7; i = i + 1)
    {
        if (x[i] > largest)
        {
            largest = x[i];
        }
    }
    printf("Largest element = %d", largest);
    return 0;
}