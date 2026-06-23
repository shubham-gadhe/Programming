//////////////////////////////////////////////////////////////////
//
//  File Name    : Calculate_Factorial
//
//  Description  : This program accepts a number from the user
//                 and calculates its factorial.
//  Example:
//      Input  : 5
//      Output : 120
//
//      Input  : -5
//      Output : 120
//      
//      Input  : 4
//      Output : 24
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iSum = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        iSum = iSum * iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d", iRet);

    return 0;
}