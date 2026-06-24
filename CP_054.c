//////////////////////////////////////////////////////////////////
//
//  File Name    : Sum_Of_Even_Numbers_In_Range
//
//  Description  : This program accepts a starting point and
//                 an ending point from the user and returns
//                 the sum of all even numbers within that range.
//
//  Example:
//      Input  : Start = 1, End = 10
//      Output : 30
//
//      Input  : Start = 5, End = 15
//      Output : 60
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;
   
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }        
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

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition is :%d", iRet);

    return 0;
}