//////////////////////////////////////////////////////////////////
//
//  File Name    : String_To_Lowercase
//
//  Description  : This program accepts a string from the
//                 user and converts all uppercase
//                 alphabets into lowercase.
//
//  Example:
//      Input  : MarvellouS Multi OS
//      Output : marvellous multi os
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
           *str = *str + 32;
        }
        
        str++;
    }
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter the String : ");
    scanf("%[^'\n']s", arr);

    strlwrx(arr);

    printf("Modified string is : %s", arr);

    return 0;
}