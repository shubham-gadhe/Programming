//////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Digit
//
//  Description  : This program accepts a character from the
//                 user and checks whether it is a
//                 digit or not.
//
//  Example:
//      Input  : 7
//      Output : It is Digit...
//
//      Input  : d
//      Output : It is not a Digit...
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch >= 48 && ch <= 57)
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE; 

    printf("Enter the character : ");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit...");
    }
    else
    {
        printf("It is not a Digit...");
    }
    return 0;
}