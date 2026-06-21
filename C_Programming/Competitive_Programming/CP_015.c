//////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Vowel
//
//  Description  : This program accepts a character from the user
//                 and checks whether the entered character is
//                 a vowel (A, E, I, O, U, a, e, i, o, u)
//                 or not.
//
//  Example:
//      Input  : A
//      Output : It is Vowel...
//
//      Input  : M
//      Output : It is not Vowel...
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if((cValue == 'A') || (cValue == 'E') || 
       (cValue == 'I') || (cValue == 'O') || 
       (cValue == 'U') || (cValue == 'a') || 
       (cValue == 'e') || (cValue == 'i') || 
       (cValue == 'o') || (cValue == 'u'))
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
    char cValue =  '\0';
    BOOL bRet = FALSE;

    printf("Enter character :\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == 1)
    {
        printf("It is Vowel...");
    }
    else
    {
        printf("It is not Vowel...");
    }

    return 0;
}