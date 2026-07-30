//////////////////////////////////////////////////////////////////
//
//  File Name    : Toggle_String_Case
//
//  Description  : This program accepts a string from the
//                 user and toggles the case of each
//                 alphabetic character.
//
//  Example:
//      Input  : MarvellouS Multi OS
//      Output : mARVELLOUs mULTI os
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void strtoggle(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        
        str++;
    }
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter the String : ");
    scanf("%[^'\n']s", arr);

    strtoggle(arr);

    printf("Modified String is : %s", arr);

    return 0;
}