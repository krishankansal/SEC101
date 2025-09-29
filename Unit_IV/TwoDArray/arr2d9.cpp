// To initialize a 2-D array and find the sum of all elements and average
#include <stdio.h>
int main()
{
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    int sum = 0;
    // Printing the 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("Sum of all elements: %d\n", sum);
    return 0;
}