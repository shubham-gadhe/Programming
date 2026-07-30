//////////////////////////////////////////////////////////////////
//
//  File Name    : Search_Character_In_String
//
//  Description  : This program accepts a string and a
//                 character from the user and
//                 checks whether the character
//                 is present in the string.
//
//  Example:
//      Input  : Marvellous Multi OS
//               e
//
//      Output : Character Found.
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(ch == *str)
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20] = {'\0'};
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the String : \n");
    scanf("%[^'\n']s", arr);

    printf("Enter the Character : \n");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character Found.");
    }
    else
    {
        printf("Character Not Found.");
    }

    return 0;
}