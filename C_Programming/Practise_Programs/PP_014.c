//////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Even_Odd
//
//  Description  : This program accepts a number
//                 from the user and checks whether
//                 it is even or odd.
//
//  Example:
//      Input  : 20
//      Output : 20 Number is Even
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Enhanced Version: Optimized code by reducing lines and using
//                    direct return expression instead of extra 
//                    variable.
//
//////////////////////////////////////////////////////////////////

/*
    Algorithm

    START

        Accept number as No

        Call CheckEvenOdd() by passing No

        Receive the result

        If the result is true
            Display that No is Even

        Otherwise
            Display that No is Odd

    STOP
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter number to checked whether it is Even or Odd : ");
    scanf("%d", &iValue);
   
    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d Number is Even\n", iValue);
    }
    else
    {
        printf("%d Number is Odd\n", iValue);
    }
    return 0;
}