// write a program to print numbers 1-10
#include <stdio.h>

int main()
{
    int num = 1;

    while (num <= 10)
    {
        printf("%d\n", num);
        num = num + 1;
    }

    printf("Outside while loop : %d\n", num);
}

// 1st time
// 1<= 10 - true
//  1
// num =1+1= 2

//2nd time
// 2<=10 - true
// prints 2
// num=2+1=3;

// 3rd timw
// 3<=10 - true
// prints 3
// num=3+1=4;

//4th time
// 4<=10 -true
// printd 4
// num=4+1=5;

// 9<=10- true
// prints 9
// num=9+1=10

// 10<=10-true
// prints 10
// num = 10+1=11

// 11<=10 - false
// exists from the while loop