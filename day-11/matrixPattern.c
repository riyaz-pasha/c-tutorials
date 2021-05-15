#include <stdio.h>
int main()
{
    // *****
    // *****
    // *****
    // *****
    // *****

    int n;
    printf("Enter matrix size : ");
    scanf("%d", &n);

    int row = 0;
    // outer loop
    while (row < n)
    {
        int column = 0;
        // inner loop
        while (  < n)
        {
            printf("*");
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }
}

// n=3

//***
//

// row=0
// 0<3 - true..goes inside
// row=0;column=0;
// 0<3-true..goes inside
// *
// column=1

//1<3-true.. goes inside
// *
// column=2

//2<3.true..goes inside
// *
// column=3

//3<3..false..exists inner while loop


// row=1
// 1<3