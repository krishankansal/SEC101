// Grading System
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter Marks : ");
    scanf("%d", &marks);
    if (marks >= 90)
    {
        printf("GRADE - A");
    }
    else if (marks >= 80)
    {
        printf("GRADE - B");
    }
    else if (marks >= 70)
    {
        printf("GRADE - C");
    }
    else if (marks >= 60)
    {
        printf("GRADE - D");
    }
    else
    {
        printf("FAIL");
    }

    return 0;
}