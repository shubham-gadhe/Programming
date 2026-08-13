//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_111
//
//  Description       : This program displays each character of a
//                      string using a character pointer and while loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char *str = "Ganesh";      

    while(*str != '\0')
    {
        printf("%c\n", *str);
        str++;
    }    

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//
//      G
//      a
//      n
//      e
//      s
//      h
//
//////////////////////////////////////////////////////////////////