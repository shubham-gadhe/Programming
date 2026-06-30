//////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Capital_Alphabet
//
//  Description  : This program accepts a character from the
//                 user and checks whether it is a
//                 capital alphabet or not.
//
//  Example:
//      Input  : F
//      Output : It is Capital Character...
//
//      Input  : d
//      Output : It is not a Capital Character...
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if(ch >= 41 && ch <= 90)
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character...");
    }
    else
    {
        printf("It is not a Capital Character...");
    }
    return 0;
}