#include <stdio.h>
int main()
{
    int x = 1;
    for (int i = 1; i <= 6; i = i + 1)
    {
        for (int j = 1; j <= i; j = j + 1)
        {
            printf("%d ", x);
            x = x + 1;
        }
        printf("\n");
    }

    return 0;
}