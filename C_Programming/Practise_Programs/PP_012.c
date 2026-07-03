//////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Even_Odd
//
//  Description  : This program accepts a number
//                 from the user and checks whether
//                 it is even or odd.
//
//  Example:
//      Input  : 15
//      Output : 15 Number is Odd
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Enhanced Version: Added return value function and displays
//                    both the input number and its Even/Odd result.
//
//////////////////////////////////////////////////////////////////

/*
    Algorithm

    START

        Accept number as No

        Call CheckEvenOdd() by passing No

        Receive the result

        If the result is 0
            Display that No is Even

        Otherwise
            Display that No is Odd

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
    
    printf("Enter number to check whether it is Even or Odd : ");
    scanf("%d", &iValue);
   
    iRet = CheckEvenOdd(iValue);

    if(iRet == 0)
    {
        printf("%d Number is Even\n", iValue);
    }
    else
    {
        printf("%d Number is Odd\n", iValue);
    }
    return 0;
}

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
    
    printf("Enter number to checked whether it is Even or Odd : ");
    scanf("%d", &iValue);
   
    iRet = CheckEvenOdd(iValue);

    if(iRet == 0)
    {
        printf("%d Number is Even\n", iValue);
    }
    else
    {
        printf("%d Number is Odd\n", iValue);
    }
    return 0;
}