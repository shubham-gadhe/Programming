//////////////////////////////////////////////////////////////////
//
//  File Name    : Difference_Between_Even_And_Odd_Factorials
//
//  Description  : This program accepts a number from the user
//                 and returns the difference between the
//                 factorial of even numbers and the factorial
//                 of odd numbers.
//
//  Example:
//      Input  : 5
//      Output : -7
//
//      Input  : -5
//      Output : -7
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else 
        {
            iOddFact = iOddFact * iCnt;
        }              
    } 
    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Even Factorial of number is %d", iRet);

    return 0;
}