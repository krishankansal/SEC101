// To display all the even elements in array
#include <stdio.h>

int main()
{
    int x[50];
    for (int i = 0, j = 10; j < 50; i = i + 1, j = j + 5)
    {
        x[i] = j;
    }
    for (int z = 0; z < 50; z = z + 1)
    {
        if (x[z] % 2 == 0)
        {
            printf("%d ", x[z]);
        }
    }

    return 0;
}