//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_108
//
//  Description       : This program demonstrates string input using
//                      scanf() and highlights the issue with %s when
//                      reading a string containing spaces.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%s", Arr);       // ISSUE

    printf("Enter string is : %s\n", Arr);
    
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
//      Enter string is : Jay
//
//////////////////////////////////////////////////////////////////