#include <stdio.h>
int main()
{
    int a = 1;
    int b = 2;
    printf("a: %d b: %d\n", a, b);

    int temp = a; // temp=1
    a = b;        // a=b  a=2
    b = temp;     // b=temp b=1
    printf("a: %d b: %d\n", a, b);
}