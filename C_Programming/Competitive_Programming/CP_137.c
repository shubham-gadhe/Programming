//////////////////////////////////////////////////////////////////
//
//  File Name    : Count_Character_Frequency
//
//  Description  : This program accepts a string and a
//                 character from the user and
//                 counts the frequency of the
//                 specified character in the string.
//
//  Example:
//      Input  : Marvellous Multi OS
//               M
//
//      Output : Character frequency is : 2
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(ch == *str)
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

int main()
{
    char arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s", arr);

    printf("Enter the Character : \n");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Character frequency is : %d", iRet);

    return 0;
}