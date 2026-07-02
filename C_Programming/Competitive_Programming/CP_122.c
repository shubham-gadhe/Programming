//////////////////////////////////////////////////////////////////
//
//  File Name    : Toggle_Character_Case
//
//  Description  : This program accepts a character from the
//                 user and converts uppercase letters
//                 to lowercase and lowercase letters
//                 to uppercase.
//
//  Example:
//      Input  : Q
//      Output : q
//
//      Input  : m
//      Output : M
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 65 && ch <= 90)
    {
        printf("%c\t", ch + 32);
    }
    else if(ch >= 97 && ch <= 122)
    {
        printf("%c", ch - 32);
    }
    else
    {
        printf("%c", ch);
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the Character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}