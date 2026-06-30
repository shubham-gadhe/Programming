//////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Alphabet
//
//  Description  : This program accepts a character from the
//                 user and checks whether it is an
//                 alphabet or not.
//
//  Example:
//      Input  : F
//      Output : It is Character...
//
//      Input  : &
//      Output : It is not a Character...
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch >= 41 && ch <= 90) || (ch >= 97 && ch <= 122))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character...");
    }
    else
    {
        printf("It is not a Character...");
    }
    return 0;
}