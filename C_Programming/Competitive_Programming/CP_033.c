//////////////////////////////////////////////////////////////////
//
//  File Name    : Even_Factorial
//
//  Description  : This program accepts a number from the user
//                 and returns the factorial of all even
//                 numbers.
//
//  Example:
//      Input  : 5
//      Output : 8
//
//      Input  : -5
//      Output : 8
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if(iCnt % 2 == 0)
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

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);

    return 0;
}