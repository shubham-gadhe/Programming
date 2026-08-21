//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_166
//
//  Description       : This program demonstrates the largest value
//                      that can be represented by a 32-bit unsigned
//                      integer using its hexadecimal representation.
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
    UNIT iMask = 0xFFFFFFFF;    
    
    printf("%u\t%X\n", iMask, iMask);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//
//      4294967295    FFFFFFFF
//
//////////////////////////////////////////////////////////////////