//////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Zero_Digit
//
//  Description  : This program accepts a number from the user
//                 and checks whether it contains the digit
//                 zero or not.
//
//  Example:
//      Input  : 1024
//      Output : It Contains Zero
//
//      Input  : 1234
//      Output : There is no Zero
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");    
    }
    return 0;
}