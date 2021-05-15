#include <stdio.h>
int main()
{
    // 12345
    // 12345
    // 12345
    // 12345
    // 12345
    int n = 3;
    int row = 1;
    while (row <= n) // row=4.. 4<=3.. false.. exists while loop
    {
        int column = 1;     // row=3..column=1
        while (column <= n) // 4<=3..false.. exists while loop
        {
            printf("%d", column); // 3
            column = column + 1;  // column=3+1=4
        }
        printf("\n");
        row = row + 1; // row=3+1=4
    }
}

//123
//123
//123
//