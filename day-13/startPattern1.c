#include <stdio.h>
int main()
{
    // *****
    int row = 0;
    while (row < 5)
    {
        int column = 0;
        while (column < 5)
        {
            printf("*");
            column++;
        }
        printf("\n");
        row++;
    }
}