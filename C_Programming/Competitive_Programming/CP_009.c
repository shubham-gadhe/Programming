////////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Number_N_Times
//
//  Description  : This program accepts two numbers from the user.
//                 It displays the first number as many times as
//                 specified by the second number.
//
//  Example:
//      Input  : 5 4
//      Output : 5 5 5 5
//
//      Input  : 11 7
//      Output : 11 11 11 11 11 11 11
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    printf("Enter Number : \n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}