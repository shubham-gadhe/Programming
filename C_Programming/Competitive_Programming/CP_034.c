//////////////////////////////////////////////////////////////////
//
//  File Name    : Calculate_Odd_Factorial
//
//  Description  : This program accepts a number from the user
//                 and calculates the product of all odd
//                 numbers from the given number down to 1.
//
//  Example:
//      Input  : 5
//      Output : 15
//
//      Input  : -5
//      Output : 15
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iFact = iFact * iCnt;
        }               
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d", iRet);

    return 0;
}