//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_105
//
//  Description       : This program demonstrates the use of a
//                      character pointer to access each character
//                      of a string using pointer increment.
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

    printf("%c\n", *str);
    str++;

    printf("%c\n", *str);
    str++;

    printf("%c\n", *str);
    str++;

    printf("%c\n", *str);
    str++;

    printf("%c\n", *str);
    str++;

    printf("%c\n", *str);
    str++;    

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