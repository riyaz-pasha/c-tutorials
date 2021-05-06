// program to pront the word of given number

#include <stdio.h>
int main()
{
    int number;
    // STEP 1. Ask user to enter a number
    printf("Enter a number between 0-9 : "); // 1.
    // STEP 2. Read a number from user
    scanf("%d", &number); //2. 8
    // STEP 3. print the word of given number
    switch (number) // 8
    {
    // 1. Check if given number is 0 then print "ZERO"
    case 0: //0===8 false
        printf("Zero\n");
        break;
    // 2. Check if given number is 1 then print "ONE"
    case 1: // 1==8 false
        printf("One\n");
        break;
    // 3. Check if given number is 2 then print "Two"
    case 2:
        printf("Two\n");
        break;
    // 3. Check if given number is 3 then print "Three"
    case 3:
        printf("Three\n");
        break;
    // 3. Check if given number is 4 then print "Four"
    case 4:
        printf("Four\n");
        break;
    case 5:
        printf("Five\n");
        break;
    case 6:
        printf("Six\n");
        break;
    case 7:
        printf("Seven\n");
        break;
    case 8: // 8==8 true
        printf("Eight\n");
        break;
    // 10. Check if given number is 9 then print "Nine"
    case 9:
        printf("Nine\n");
        break;
    }
}