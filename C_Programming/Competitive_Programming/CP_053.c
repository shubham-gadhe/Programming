//////////////////////////////////////////////////////////////////
//
//  File Name    : Sum_Of_Numbers_In_Range
//
//  Description  : This program accepts a starting point and
//                 an ending point from the user and returns
//                 the sum of all numbers within that range.
//
//  Example:
//      Input  : Start = 1, End = 5
//      Output : 15
//
//      Input  : Start = 5, End = 10
//      Output : 45
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;
   
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Staring Point : \n");
    scanf("%d", &iValue1);

    printf("Enter Ending Point : \n");
    scanf("%d", &iValue2);

    if(iValue1 > iValue2 || (iValue1 <= 0))
    {
        printf("Invalid range");
        return 0;
    }

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is :%d", iRet);

    return 0;
}