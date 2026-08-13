//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_110
//
//  Description       : This program accepts a string from the user
//                      and displays the string using a separate
//                      function.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char *str)
{
    printf("Input string is : %s\n", str);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);  
    
    Display(Arr);
    
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
//      Input string is : Jay Ganesh
//
//////////////////////////////////////////////////////////////////