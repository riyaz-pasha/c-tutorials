#include <stdio.h>

int main()
{
    int firstNumber = 0;
    int secondNumber = 1;
    int thirdNumber = firstNumber + secondNumber;
    while (firstNumber < 100)
    {
        printf("%d\n", firstNumber);
        thirdNumber = firstNumber + secondNumber;
        firstNumber = secondNumber;
        secondNumber = thirdNumber;
    }
}