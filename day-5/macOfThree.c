#include <stdio.h>
int main()
{
    int firstNumber, secondNumber, thirdNumber;
    printf("Enter first number : ");
    scanf("%d", &firstNumber);
    printf("Enter second number : ");
    scanf("%d", &secondNumber);
    printf("Enter third number : ");
    scanf("%d", &thirdNumber);

    if (firstNumber >= secondNumber && firstNumber >= thirdNumber)
    {
        // 3>=3 && 3>=3
        // true && true
        // true
        printf("%d\n", firstNumber);
    }
    else if (secondNumber >= firstNumber && secondNumber >= thirdNumber)
    {
        printf("%d\n", secondNumber);
    }
    else
    {
        printf("%d\n", thirdNumber);
    }
    printf("---This prints always---\n");
}