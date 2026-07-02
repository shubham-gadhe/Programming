//////////////////////////////////////////////////////////////////
//
//  File Name    : Reverse_String
//
//  Description  : This program accepts a string from the
//                 user and displays the string
//                 in reverse order.
//
//  Example:
//      Input  : MarvellouS
//      Output : SuollevraM
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Reverse(char *str)
{
    char *Start = str;   

    while(*str != '\0')
    {
        str++;
    }

    str--;

    while(Start <= str)
    {
        printf("%c", *str);
        str--;
    }
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter the String : ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return 0;
}