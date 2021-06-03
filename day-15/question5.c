//Reverse of a number

#include <stdio.h>

int main()
{
    //12345

    // STEP -1
    // 12345%10 - 5
    //5 - (0*10)+5=5
    //1234 [ 12345/10=1234.5= 1234 ]

    // STEP -2
    // 1234%10-4
    //54 - (5*10)+4=54
    //123 - [1234/10=123.4=123]

    //STEP-3
    // 123%10-3
    //543 - (54*10)+ 3= 543
    //12- [123/10=12.3=12]

    //STEP-4
    //12%10-2
    //5432 - (543*10)+2=5432
    //1 - [12/10=1.2=1]

    //STEP-5
    //1%10-1
    //54321 - (5432*10)+1=54321
    //0 - [1/10=0.1=1]

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int revNum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        revNum = (revNum * 10) + lastDigit;
        num = num / 10;
    }
    printf("Reverse : %d\n", revNum);
}

//1 - 1
//12 - 2
//123 - 3
//10)1(0 - rem 1
//10)12(1 - rem 2
//10)123(12 - rem 3