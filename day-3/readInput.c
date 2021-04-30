#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Grade A\n");
    }
    else if (marks >= 80)
    {
        printf("Grade B\n");
    }
    else if (marks >= 70)
    {
        printf("Grade C\n");
    }
    else if (marks >= 35)
    {
        printf("Passed : %d\n", marks);
    }
    else
    {
        printf("failed : %d\n", marks);
    }

    printf("Marks : %d\n", marks);
}