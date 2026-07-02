//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Character_ASCII_Values
//
//  Description  : This program accepts a character from the
//                 user and displays its decimal,
//                 octal, and hexadecimal values.
//
//  Example:
//      Input  : A
//      Output : Decimal     : 65
//               Octal       : 101
//               Hexadecimal : 0x41
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal : %d\nOcatal : %o\nHexadeciaml : 0x%x\n", ch, ch, ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}