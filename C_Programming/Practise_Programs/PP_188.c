//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_188
//
//  Description       : This program accepts a string from the user
//                      and displays the input string using a
//                      separate Display function.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char str[])
{
    printf("Input string is : %s\n", str);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");

    scanf("*%*[^'\n']s", Arr);  

    Display(Arr);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter string :
//      Hello World
//
//  Sample Output :
//      Input string is : Hello World
//
//////////////////////////////////////////////////////////////////