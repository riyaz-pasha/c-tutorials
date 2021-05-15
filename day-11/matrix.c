#include <stdio.h>
int main()
{
    // 12345  // r1c1 r1c2 r1c3 r1c4 r1c5
    // 12345  // r2c1 r2c2 r2c3 r2c4 r2c5
    // 12345
    // 12345
    // 12345

    int n; // 3
    printf("Enter n value : ");
    scanf("%d", &n);

    int row = 1;
    while (row <= n) // row=2.. 2<=3..true goes inside
    {
        int column = 1;     // row=2..column=1..
        while (column <= n) // 2<=3.. true.. goes inside
        {
            printf("%d", column); // prints 1
            column = column + 1;  // column=1+1=2
        }
        printf("\n");  // comes here and goes to new line
        row = row + 1; // row=1+1=2
    }
}

//123
//1