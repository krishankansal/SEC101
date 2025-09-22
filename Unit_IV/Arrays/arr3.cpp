// To change the value of elements
#include <stdio.h>
int main()
{
    int x[5] = {10, 89, -1, 22, -98};
    x[0] = x[1] + x[3];
    for (int i = 0; i <= 4; i = i + 1)
    {
        printf("%d \n", x[i]);
    }

    return 0;
}

