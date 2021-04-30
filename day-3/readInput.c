#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks : "); //1
    scanf("%d", &marks);           //2 80

    if (marks >= 90) // 80 >=90 false
    {
        printf("Grade A\n"); //
    }
    else if (marks >= 80) // 80 >=90 false
    {
        printf("Grade B\n"); //
    }
    else if (marks >= 70) // 80 >=90 false
    {
        printf("Grade C\n"); //
    }
    else if (marks >= 35) //80>=35    true
    {
        printf("Passed : %d\n", marks); // 3. Passed
    }
    else
    {
        printf("failed : %d\n", marks);
    }

    printf("Marks : %d\n", marks); // always runs
}