// Initialize and print a 2D array using nested loops
#include <stdio.h>
int main()
{
    char arr[3][4] = {
        {'a', '4', 'c', 'd'},
        {'e', ' ', '#', 'h'},
        {'1', 'j', '.', 'l'}
    };
    // Printing the 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}