//////////////////////////////////////////////////////////////////
//
//  File Name    : Difference_Of_Small_And_Capital_Alphabets
//
//  Description  : This program accepts a string from the
//                 user and displays the difference
//                 between the number of lowercase
//                 and uppercase alphabets.
//
//  Example:
//      Input  : MarvellouS
//      Output : 6
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int Difference(char *str)
{
    int iCapCnt = 0;
    int iSmallCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCapCnt++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iSmallCnt++;
        }
        str++;
    }
    return iSmallCnt - iCapCnt;
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}