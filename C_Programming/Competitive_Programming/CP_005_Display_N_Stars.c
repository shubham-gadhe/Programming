////////////////////////////////////////////////////////////////////
//
//  File Name    : Display_N_Stars
//
//  Description  : This program accepts a number and displays
//                 that many asterisk (*) characters on the screen.
//
//  Example:
//      Input  : 5
//      Output : *****
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    
    return 0;
}