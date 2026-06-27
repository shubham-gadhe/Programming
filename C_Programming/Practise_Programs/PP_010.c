//////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Even_Odd
//
//  Description  : This program accepts a number
//                 from the user and checks whether
//                 it is even or odd using a
//                 user-defined function.
//
//  Example:
//      Input  : 11
//      Output : Number is Odd
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Enhanced Version: Added function for better code reusability
//
//////////////////////////////////////////////////////////////////

/*
    Algorithm

    START

        Accept number as No

        Call CheckEvenOdd() by passing No

        Display the result

    STOP
*/

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRemainder = 0;

    iRemainder = iNo % 2;

    if(iRemainder == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d", &iValue);
   
    CheckEvenOdd(iValue);

    return 0;
}