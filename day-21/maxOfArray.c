#include <stdio.h>
int main()
{
    // Maximum in an Array
    // 1,2,3,4,5
    // max=0
    // max= 0 ,1 = 1
    // max= 1 ,2 = 2
    // max= 2, 3 = 3
    // max= 3, 4 = 4
    // max= 4, 5 = 5
    // max= 5

    int arr[] = {-1, -2, -3, -4, -5};
    int max = arr[0];
    for (int i = 0; i < 5; i++) // i=2 2<5 true
    {
        if (max < arr[i]) // 2<arr[2] 2<3 true
        {
            max = arr[i]; // max=arr[2]=3
        }
    }

    printf("Max : %d", max);
}