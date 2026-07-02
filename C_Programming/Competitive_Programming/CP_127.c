//////////////////////////////////////////////////////////////////
//
//  File Name    : Count_Small_Alphabets
//
//  Description  : This program accepts a string from the
//                 user and counts the number of
//                 lowercase alphabets.
//
//  Example:
//      Input  : Marvellous
//      Output : 9
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int iCountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <='z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    iRet = iCountSmall(arr);

    printf("%d", iRet);

    return 0;
}