//////////////////////////////////////////////////////////////////
//
//  File Name    : First_Occurrence_Of_Character
//
//  Description  : This program accepts a string and a
//                 character from the user and
//                 returns the position of the
//                 first occurrence of the character.
//
//  Example:
//      Input  : Marvellous Multi OS
//               e
//
//      Output : Character location is : 5
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;

        if(ch == *str)
        {
            return iCount;
        }      

        str++;
    }
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

    iRet = FirstChar(arr, cValue);

    printf("Character location is : %d", iRet);

    return 0;
}