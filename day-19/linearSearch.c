#include <stdio.h>

int main()
{
    int size;
    printf("Enter your array size : ");
    scanf("%d", &size);

    int array[size]; //array[3]
    printf("Enter your numbers in to the array \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int num;
    printf("Enter your number to search : ");
    scanf("%d", &num);

    int isFound = 0; //false
    for (int i = 0; i < size; i++)
    {
        if (array[i] == num)
        {
            isFound = 1; //true
            break;
        }
    }

    if (isFound == 1)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }
}