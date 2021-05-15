#include <stdio.h>
int main()
{
    //1
    //12
    //123
    //1234
    //12345

    int n = 5;
    int row = 1;
    while (row <= n) // row=6 6<=5.. false.. exits
    {
        int column = 1;       // row=5.. column=1
        while (column <= row) // 6<=5.. false.. exits
        {
            printf("%d", column); // 5
            column = column + 1;  // column=5+1=6
        }
        printf("\n");  //
        row = row + 1; //row=5+1=6
    }
}

//Output
//1
//12
//123
//1234
//12345
//