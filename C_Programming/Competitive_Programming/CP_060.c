//////////////////////////////////////////////////////////////////
//
//  File Name    : Count_Digits_Less_Than_Six
//
//  Description  : This program accepts a number from the user
//                 and counts how many digits are less than 6
//                 in that number.
//
//  Example:
//      Input  : 12389
//      Output : 4
//
//      Input  : 67890
//      Output : 2
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int Count(int iNo)
{
    int iFreq = 0, iDigit = 0, iCnt = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d", iRet);

    return 0;
}