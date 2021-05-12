#include <stdio.h>
int main()
{
    // 3 * 1  = 3
    // 3 * 2  = 6
    // 3 * 3  = 9
    // 3 * 4  = 12
    // 3 * 5  = 15
    // 3 * 6  = 18
    // 3 * 7  = 21
    // 3 * 8  = 24
    // 3 * 9  = 27
    // 3 * 10 = 30

    int i = 1;
    int num = 3;
    while (i <= 10)
    {
        printf("%d * %d = %d\n", num, i, num * i);
        i = i + 1;
    }
}