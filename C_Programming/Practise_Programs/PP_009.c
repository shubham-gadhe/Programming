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
//  Base Version: Check number Even or Odd.
//
//////////////////////////////////////////////////////////////////

/*
    START
        Accept number as No

        If No is completely divisible by 2
            then print Even

        Otherwise 
            print odd
    STOP


    START
        Accept number as No

        Divide No by 2

        If remainder is 0
            then print as Even

        Otherwise
            print as Odd
    STOP
*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
    return 0;
}