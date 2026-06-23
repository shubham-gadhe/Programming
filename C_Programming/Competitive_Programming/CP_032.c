//////////////////////////////////////////////////////////////////
//
//  File Name    : USD_To_INR
//
//  Description  : This program accepts an amount in US Dollars
//                 from the user and converts it into
//                 Indian Rupees.
//
//  Example:
//      Input  : 10
//      Output : 700
//
//      Input  : 3
//      Output : 270
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iAmout = 0;
    int iDollar = 70;
    
    iAmout = iNo * iDollar;

    return iAmout;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: \n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value of INR is %d", iRet);

    return 0;
}