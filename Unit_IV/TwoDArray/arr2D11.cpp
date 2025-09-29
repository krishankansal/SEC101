// To initialize a 2-D array and find the sum of each column
#include <stdio.h>
int main()
{
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    int sum = 0;
    // Printing the 2D array
    for (int j = 0; j < 4; j++)
    {
        sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum = sum + arr[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, sum);
    }
    return 0;
}