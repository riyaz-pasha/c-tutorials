#include <stdio.h>
int main()
{
    int num = 1;
    while (num <= 100)
    {
        if (num % 2 == 0)
        {
            printf("%d\n", num);
        }
        num = num + 1;
    }
}

// Tracing
// num =1
// 1<=100-true..goes inside
// 1%2==0... 1==0..false... doesn't print 1
// num=1+1=2

// 2<=100..true..goes inside
// 2%2==0.. 0==0..true.. prints 2
// num=2+1=3

// 3<=100...true
// 3%2==0.. 1==0.. false dpesn't print 3
// num=3+1=4

// 4<=100..true
// 4%2==0.. 0==0.. true.. prints 4
// num=4+1=5