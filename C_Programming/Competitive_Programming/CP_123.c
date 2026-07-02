//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Alphabet_Sequence
//
//  Description  : This program accepts an alphabet from the
//                 user and displays the remaining
//                 uppercase letters or previous
//                 lowercase letters.
//
//  Example:
//      Input  : Q
//      Output : Q  R   S   T   U   V   W   X   Y   Z
//
//      Input  : m
//      Output : m  i   k   j   i   h   g   f   e   d   c   b   a
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    char cCap = '\0';
    char cSmall = '\0';

    if(ch >= 65 && ch <= 90)
    {
        for(cCap = ch; cCap <= 90; cCap++)
        {
            printf("%c\t", cCap);
        }
    }
    else if(ch >= 97 && ch <= 122)
    {
        for(cSmall = ch; cSmall >= 97; cSmall--)
        {
            printf("%c\t", cSmall);
        } 
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