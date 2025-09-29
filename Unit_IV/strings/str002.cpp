#include <stdio.h>

int main()
{
    char str[] = {'R', 'a', 'm', ' ', 'S', 'h', 'a', 'r', 'm', 'a', '\0'};
    for (int i = 0; str[i] != '\0'; i = i + 1)
    {
        printf("%c", str[i]);
    }
    return 0;
}