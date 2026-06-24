//////////////////////////////////////////////////////////////////
//
//  File Name    : Multiply_Digits
//
//  Description  : This program accepts a number from the user
//                 and returns the multiplication of all
//                 digits present in that number.
//
//  Example:
//      Input  : 2395
//      Output : 270
//
//      Input  : 1234
//      Output : 24
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultDigits(int iNo)
{
    int iMult = 1;
    int iDigit = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }   

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;        
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d", iRet);

    return 0;
}