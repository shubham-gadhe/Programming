//////////////////////////////////////////////////////////////////
//
//  File Name    : Count_White_Spaces
//
//  Description  : This program accepts a string from the
//                 user and counts the total
//                 number of white spaces.
//
//  Example:
//      Input  : MarvellouS Infosystems 
//      Output : 1
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != 0)
    {
        if(*str == ' ')
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("%d", iRet);

    return 0;
}