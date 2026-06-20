////////////////////////////////////////////////////////////////////
//
//  File Name    : Divide_Two_Numbers.c
//
//  Description  : This program performs division of two integers.
//                 If the divisor is zero, the function returns -1
//                 because division by zero is not possible.
//
//  Example:
//      Input  : 15     5
//      Output : 3
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;
    
    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);

    printf("Division is %d", iRet);

    return 0;
}