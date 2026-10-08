//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_100
//
//  Description       : This program demonstrates how a string can
//                      be initialized using individual characters
//                      in a character array with a null character.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char str[] = {'J','a','y',' ','G','a','n','e','s','h','\0'};

    printf("%s\n", str);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input required.
//
//  Sample Output :
//      Jay Ganesh
//
//////////////////////////////////////////////////////////////////
