// Program to print 1-5

#include <stdio.h>
int main()
{
    int num = 1;
    while (num <= 5)
    {
        printf("%d\n", num);
        num = num + 1;
    }
}

// Problems
// 1. Human error
// 2. this extendible.. human efforts

// Tracing
// num=1
// 1<=5 -- true.. goes inside while loop
// prints num 1
// increases num... num=1+1=2

// 2<=5 -- true.. goes inside
// prints num 2
// incre num .. num=2+1=3

// 3<=5 -- treu.. goes inside
// prints num 3
// num=3+1=4

// 4<=5-- true.. goes inside
// prints num 4
// num=4+1=5

// 5<=5-- true.. goes inside
// prints num 5
// num=5+1=6

// 6<=5-- false.. donesn't inside

//exists program
