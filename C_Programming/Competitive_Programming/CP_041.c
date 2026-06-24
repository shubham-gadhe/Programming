//////////////////////////////////////////////////////////////////
//
//  File Name    : Count_Even_Digits
//
//  Description  : This program accepts a number from the user
//                 and returns the count of even digits
//                 present in that number.
//
//  Example:
//      Input  : 2395
//      Output : 1
//
//      Input  : 2468
//      Output : 4
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountEven(int iNo)
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

        if(iDigit % 2 == 0)
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

    iRet = CountEven(iValue);

    printf("%d", iRet);

    return 0;
}