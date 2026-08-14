//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_115
//
//  Description       : This program demonstrates modification of
//                      the first character of a string using a
//                      character pointer.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : strlenX()
//
//  Description       : It is used to modify the first character of
//                      the given string using a character pointer.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/08/2026
//
//////////////////////////////////////////////////////////////////

void strlenX(char *str)
{
    *str = 'A';
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);  
    
    strlenX(Arr);

    printf("String is : %s\n", Arr);
    
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
//      String is : Aanesh
//
//////////////////////////////////////////////////////////////////