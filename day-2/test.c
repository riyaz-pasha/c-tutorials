#include <stdio.h>

int main()
{
    char gender = 'M';
    int age = 23;
    float cgpa = 8.8;

    printf("Gender : %c\n", gender);
    printf("Age: %d\n", age);
    printf("CGPA: %f\n", cgpa);

    char favAlphabet;
    int favNumber;
    float finalGpa;

    printf("Enter your fav character : ");
    scanf("%c", &favAlphabet);

    printf("Enter your fav number : ");
    scanf("%d", &favNumber);

    printf("Enter your final gpa : ");
    scanf("%f", &finalGpa);

    printf("favAlphabet : %c\n", favAlphabet);
    printf("favNumber: %d\n", favNumber);
    printf("finalGpa: %f\n", finalGpa);
}