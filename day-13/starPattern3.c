#include <stdio.h>
int main()
{
    //pattern3 - I'll
    //*****
    // ****
    //  ***
    //   **
    //    *

    int n = 5;
    int row = n;
    while (row > 0) // row=0 0>0 false exits loop
    {
        int spaces = n - row; // spaces=5-1=4
        while (spaces > 0)    // 0>0 false loop exits
        {
            printf(" "); // prints space
            spaces--;    // space=1-1=0
        }

        int column = row;  // column=1 row=1
        while (column > 0) // column=0 0>0 false exits loop
        {
            printf("*"); // prints *
            column--;    //column=1-1=0
        }
        printf("\n");
        row--; //row=1-1=0
    }
}

//*****
//@****
//@@***
//@@@**
//@@@@*
//