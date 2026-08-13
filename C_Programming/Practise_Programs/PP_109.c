//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_109
//
//  Description       : This program demonstrates string input using
//                      scanf() with a scanset to accept spaces in
//                      the input string.
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
    scanf("%[^'\n']s", Arr);    // Regular expression (Regex)       

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
//      Enter string is : Jay Ganesh
//
//////////////////////////////////////////////////////////////////