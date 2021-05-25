#include <stdio.h>
int main()
{
    // Program for Prime number
    // Prime number- which has only 2 fctors - self and 1

    // Ex 5
    // 5%5 - rem - 0 so it's a factor .. 1
    // 5%4 - rem - 1 so it's not a factor
    // 5%3 - rem - 2 so it's not a factor
    // 5%2 - rem - 1 so it's not a factor
    // 5%1 - rem - 0 so it's a factor .. 2

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);    // num=8
    int i = num;          // i=8
    int numOfFactors = 0; //
    while (i > 0)         // i=0 0>0 false exits while loop
    {
        if (num % i == 0) // 8%1 - rem 1 0==0 true
        {
            numOfFactors++; // numOfFactors=3+1=4
        }
        i--; // i=1-1=0
    }
    if (numOfFactors == 2) // 4==2 false
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not prime\n");
    }
}