//////////////////////////////////////////////////////////////////
//
//  File Name    : String_To_Uppercase
//
//  Description  : This program accepts a string from the
//                 user and converts all lowercase
//                 alphabets into uppercase.
//
//  Example:
//      Input  : MarvellouS Multi OS
//      Output : MARVELLOUS MULTI OS
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    struprx(arr);

    printf("Modified String is : %s", arr);

    return 0;
}