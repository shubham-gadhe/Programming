//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_102
//
//  Description       : This program demonstrates the use of the
//                      null character '\0' inside a character array.
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
    char str[] = {'J','a','y','\0','G', 'a', 'n' , 'e' , 's' , 'h', '\0'};

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
//      Jay
//
//////////////////////////////////////////////////////////////////