//////////////////////////////////////////////////////////////////
//
//  File Name    : Count_Capital_Alphabets
//
//  Description  : This program accepts a string from the
//                 user and counts the number of
//                 uppercase alphabets.
//
//  Example:
//      Input  : Marvellous Multi OS
//      Output : 4
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20]= {'\0'};
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    iRet = CountCapital(arr);

    printf("%d", iRet);

    return 0;
}