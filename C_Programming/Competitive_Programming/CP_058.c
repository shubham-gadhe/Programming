//////////////////////////////////////////////////////////////////
//
//  File Name    : Count_Digit_Two
//
//  Description  : This program accepts a number from the user
//                 and counts how many times digit 2 appears
//                 in that number.
//
//  Example:
//      Input  : 12234
//      Output : 2
//
//      Input  : 5678
//      Output : 0
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountTwo(int iNo)
{
    int iFreq = 0;
    int iDigit = 0;
    int iCnt = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("%d", iRet);

    return 0;
}