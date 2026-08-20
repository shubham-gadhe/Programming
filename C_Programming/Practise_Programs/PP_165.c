//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_165
//
//  Description       : This program demonstrates the smallest
//                      hexadecimal value that can be represented
//                      by an unsigned integer, which is zero.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UNIT;

int main()
{
    UNIT iMask = 0x00000000;    
    
    printf("%d\t%X\n", iMask, iMask);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//
//      0       0
//
//////////////////////////////////////////////////////////////////