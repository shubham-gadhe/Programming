//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Digits_From_String
//
//  Description  : This program accepts a string from the
//                 user and displays all the
//                 digits present in the string.
//
//  Example:
//      Input  : Marve89llous121
//      Output : 89121
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }

        *str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s", arr);

    DisplayDigit(arr);

    return 0;
}