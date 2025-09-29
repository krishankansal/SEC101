#include <stdio.h>

int main()
{
    char str[] = "P";
    for (int i = 0; str[i] != '\0'; i = i + 1)
    {
        printf("%c", str[i]);
    }
    printf("\n Size of string is %d\n", sizeof(str));
    return 0;
}