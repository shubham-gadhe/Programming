//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_118
//
//  Description       : This program counts the frequency of the
//                      character 'a' in a string using a function.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count()
//
//  Description       : It is used to count the frequency of the
//                      character 'a' present in the given string.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/08/2026
//
//////////////////////////////////////////////////////////////////

int Count(const char * str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'a')     
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
    
    iRet = Count(Arr);

    printf("Frequency is : %d\n", iRet);
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Ganesh
//
//  Sample Output :
//
//      Enter string :
//      Frequency is : 1
//
//////////////////////////////////////////////////////////////////