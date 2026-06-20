////////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Divisibility_By_Five
//
//  Description  : This program accepts a number from the user
//                 and checks whether it is divisible by 5.
//
//  Example:
//      Input  : 10
//      Output : Divisible by 5
//
//      Input  : 18
//      Output : Not Divisible by 5
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5 == 0))
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

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}