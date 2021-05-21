#include <stdio.h>
int main()
{
    //*
    //**
    //***
    //****
    //*****
    int row = 0;
    while (row < 5)
    {
        int column = 0;
        while (column <= row)
        {
            printf("*");
            column++;
        }
        printf("\n");
        row++;
    }
}
//pattern1  - Done
//*
//**
//***
//****
//*****


//pattern2  - Try
//*****
//****
//***
//**
//*

//pattern3 - I'll
//*****
// ****
//  ***
//   **
//    *

//pattern4 - Try
//    *
//   **
//  ***
// ****
//*****