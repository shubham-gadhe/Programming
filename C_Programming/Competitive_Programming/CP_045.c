//////////////////////////////////////////////////////////////////
//
//  File Name    : Difference_Between_Even_And_Odd_Digit_Sum
//
//  Description  : This program accepts a number from the user
//                 and returns the difference between the sum
//                 of even digits and the sum of odd digits.
//
//  Example:
//      Input  : 2395
//      Output : -15
//
//      Input  : 2468
//      Output : 20
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int iNo)
{
    int iCnt = 0;
    int iDigit = 0, iEvenSum = 0, iOddSum = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }   
     
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }
        iNo = iNo / 10;        
    }
    return iEvenSum - iOddSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d", iRet);

    return 0;
}