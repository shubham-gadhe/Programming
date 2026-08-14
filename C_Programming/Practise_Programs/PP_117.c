//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_117
//
//  Description       : This program calculates the length of a
//                      string using a constant character pointer.
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
//  Function Name     : strlenX()
//
//  Description       : It is used to calculate the length of the
//                      given string using a constant character
//                      pointer.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/08/2026
//
//////////////////////////////////////////////////////////////////

int strlenX(const char * str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
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
    
    iRet = strlenX(Arr);

    printf("String length is : %d\n", iRet);
    
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
//      String length is : 10
//
//////////////////////////////////////////////////////////////////