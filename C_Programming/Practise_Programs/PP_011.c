//////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Even_Odd
//
//  Description  : This program accepts a number
//                 from the user and checks whether
//                 it is even or odd.
//
//  Example:
//      Input  : 11
//      Output : Number is Odd
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Enhanced Version: Added return value based function for
//                    better code structure and control flow.
//
//////////////////////////////////////////////////////////////////

/*
    Algorithm

    START

        Accept number as No

        Call CheckEvenOdd() by passing No

        Receive the result

        If the result is 0
            Display "Number is Even"

        Otherwise
            Display "Number is Odd"

    STOP
*/

#include<stdio.h>

int CheckEvenOdd(int iNo)
{
    int iRemainder = 0;

    iRemainder = iNo % 2;

    return iRemainder;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d", &iValue);
   
    iRet = CheckEvenOdd(iValue);

    if(iRet == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
    return 0;
}