#include <stdio.h>
int main()
{
    int firstNumber, secondNumber;
    printf("Enter first number : ");
    scanf("%d", &firstNumber);
    printf("Enter second number : ");
    scanf("%d", &secondNumber);

    if (firstNumber > secondNumber) // 3 > 2 - true
    {
        printf("%d\n", firstNumber); //print
    }

    else
        printf("%d\n", secondNumber); // not

    printf("This prints always"); // prints
}