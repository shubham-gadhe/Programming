//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_123
//
//  Description       : This program counts the number of small
//                      letters present in a given string.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 15/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(const char * str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z') 
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);  
    
    iRet = CountSmall(Arr);

    printf("Frequency is : %d\n", iRet);
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Jay Ganesh
//
//  Sample Output :
//
//      Enter string :
//      Frequency is : 7
//
//////////////////////////////////////////////////////////////////