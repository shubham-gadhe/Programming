//////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Small_Alphabet
//
//  Description  : This program accepts a character from the
//                 user and checks whether it is a
//                 lowercase alphabet or not.
//
//  Example:
//      Input  : g
//      Output : It is Small case Character...
//
//      Input  : D
//      Output : It is not a Small Case Character...
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(ch >= 97 && ch <= 122)
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Character...");
    }
    else
    {
        printf("It is not a Small Case Character...");
    }
    return 0;
}