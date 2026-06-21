//////////////////////////////////////////////////////////////////
//
//  File Name    : Convert_Character_Case
//
//  Description  : This program accepts a character from the user
//                 and converts its case. If the character is
//                 uppercase, it converts it to lowercase.
//                 If the character is lowercase, it converts it
//                 to uppercase.
//
//  Example:
//      Input  : F
//      Output : f
//
//      Input  : s
//      Output : S
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c", cValue + 32);
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c", cValue - 32);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter character :\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}