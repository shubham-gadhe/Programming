////////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Even_Or_Odd
//
//  Description  : This program accepts a number from the user
//                 and checks whether the number is even or odd.
//
//  Example:
//      Input  : 6
//      Output : Given number is an Even Number
//
//      Input  : 11
//      Output : Given number is an Odd Number
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }    
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Given number is a Even Number");
    }
    else
    {
        printf("Given number is not a Even Number");
    }  

    return 0;
}