//////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Vowel_In_String
//
//  Description  : This program accepts a string from the
//                 user and checks whether it
//                 contains a vowel or not.
//
//  Example:
//      Input  : marvellous
//      Output : Contains Vowel..
//
//      Input  : xyz
//      Output : There is no Vowel...
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'a' || *str == 'E' || *str == 'e' || *str == 'I' ||
           *str == 'i' || *str == 'O' || *str == 'o' || *str == 'U' || *str == 'u')
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
    BOOL bRet = FALSE;

    printf("Enter the String : ");
    scanf("%[^'\n']s", arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel..");
    }
    else
    {
        printf("There is no Vowel...");
    }
    
    return 0;
}