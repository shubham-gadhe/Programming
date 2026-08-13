//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_101
//
//  Description       : This program demonstrates the creation of a
//                      character array and displays the string using
//                      the %s format specifier.
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
    char str[] = {'J','a','y',' ','G', 'a', 'n' , 'e' , 's' , 'h', '\0'};

    printf("%s\n", str);        

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//
//      Jay Ganesh
//
//////////////////////////////////////////////////////////////////