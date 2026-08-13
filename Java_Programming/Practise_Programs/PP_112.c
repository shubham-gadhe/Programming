//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_112
//
//  Description       : This program accepts a string from the user
//                      and displays the first three characters of
//                      the string using a separate function.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char str[])
{
    printf("%c\n", str[0]);
    printf("%c\n", str[1]);
    printf("%c\n", str[2]);
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
//      Ganesh
//
//  Sample Output :
//
//      Enter string :
//      G
//      a
//      n
//
//////////////////////////////////////////////////////////////////