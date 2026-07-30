//////////////////////////////////////////////////////////////////
//
//  File Name    : Last_Occurrence_Of_Character
//
//  Description  : This program accepts a string and a
//                 character from the user and
//                 returns the position of the
//                 last occurrence of the character.
//
//  Example:
//      Input  : Marvellous Multi OS
//               M
//
//      Output : Character location is : 12
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCount = 0, iLast = 0;

    while(*str != '\0')
    {
        iCount++;

        if(ch == *str)
        {
            iLast = iCount ;
        }

        str++;
    }

    return iLast;
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

    iRet = LastChar(arr, cValue);

    printf("Character location is : %d", iRet);

    return 0;
}