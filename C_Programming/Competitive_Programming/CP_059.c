//////////////////////////////////////////////////////////////////
//
//  File Name    : Count_Digit_Four
//
//  Description  : This program accepts a number from the user
//                 and counts how many times digit 4 appears
//                 in that number.
//
//  Example:
//      Input  : 14424
//      Output : 3
//
//      Input  : 5678
//      Output : 0
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountFour(int iNo)
{
    int iFreq = 0, iDigit = 0, iCnt = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCnt++;
        }
        iNo = iNo / 10;        
    } 
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d", iRet);

    return 0;
}