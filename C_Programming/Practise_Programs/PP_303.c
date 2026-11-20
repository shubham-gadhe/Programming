//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_303
//
//  Description       : Accepts a string from the user and
//                      displays the entered string.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/11/2026
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//  Note              : n represents the length of the string.
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Declares a character array, accepts a
//                      string from the user using scanf(), and
//                      displays the string using printf().
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/11/2026
//
//  Input             : A string entered by the user.
//
//  Output            : Displays the entered string.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter string : \n");
    scanf("*%*[^'\n']s", Arr);

    printf("%s\n", Arr);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input
//
//  Enter string :
//  Hello
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  Enter string :
//  Hello
//
//////////////////////////////////////////////////////////////////