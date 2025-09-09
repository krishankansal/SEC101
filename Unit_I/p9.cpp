// To find the largest of three numbers
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter First number : ");
    scanf("%d", &a);
    printf("Enter Second number : ");
    scanf("%d", &b);
    printf("Enter Third number : ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("a = %d is largest", a);
    }
    else if (b > c)
    {
        printf("b = %d is largest", b);
    }
    else
    {
        printf("c = %d is largest", c);
    }
    return 0;
}
