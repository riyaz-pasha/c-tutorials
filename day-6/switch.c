#include <stdio.h>
int main()
{
    int firstNumber, secondNumber, operation;
    printf("Enter first number : ");
    scanf("%d", &firstNumber);
    printf("Enter second number : ");
    scanf("%d", &secondNumber);

    printf("Enter you choice\n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &operation);

    switch (operation)
    {
    case 1:
        printf("Addition: %d\n", firstNumber + secondNumber);
        break;
    case 2:
        printf("Sub: %d\n", firstNumber - secondNumber);
        break;
    case 3:
        printf("Mul: %d\n", firstNumber * secondNumber);
        break;
    case 4:
        printf("Div: %f\n", firstNumber / (float)secondNumber);
        break;
    }

    printf("This will print");
}