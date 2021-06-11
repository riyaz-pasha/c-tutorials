#include <stdio.h>
int main()
{
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};

    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1 - j; i++) // i=4 ; 4<4 false
        {
            if (arr[i] > arr[i + 1]) // arr[3] > arr [4] -> 5>1 ->true
            {
                int temp = arr[i + 1]; // temp=arr[4]=1
                arr[i + 1] = arr[i];   // arr[4]=arr[3]=5
                arr[i] = temp;         // arr[3]=1
            }
            // 4,5,3,2,1
            // 4,3,5,2,1
            // 4,3,2,5,1
            // 4,3,2,1,5

            // 3,4,2,1,5
            // 3,2,4,1,5
            // 3,2,1,4,5
            // 3,2,1,4,5 waste

            // 2,3,1,4,5
            // 2,1,3,4,5
            // 2,1,3,4,5 waste
            // 2,1,3,4,5 waste

            // 1,2,3,4,5
            // 1,2,3,4,5 waste
            // 1,2,3,4,5 waste
            // 1,2,3,4,5 waste
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

// time complexity
//  n*n - n^2