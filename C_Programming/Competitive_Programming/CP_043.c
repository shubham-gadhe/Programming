//////////////////////////////////////////////////////////////////
//
//  File Name    : Count_Digits_In_Range
//
//  Description  : This program accepts a number from the user
//                 and returns the count of digits that are
//                 between 3 and 7.
//
//  Example:
//      Input  : 2395
//      Output : 3
//
//      Input  : 1289
//      Output : 0
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountRange(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }   

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if((iDigit >= 3) && (iDigit <= 7))
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("%d", iRet);

    return 0;
}