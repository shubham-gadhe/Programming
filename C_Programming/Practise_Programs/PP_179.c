//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_179
//
//  Description       : This program demonstrates the bitwise NOT
//                      operator by complementing all bits of an
//                      unsigned integer mask.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask = 0xFFFFFFBF;

    printf("Before : %X\n", iMask);

    iMask = ~iMask;

    printf("After : %X\n", iMask);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//
//      Before : FFFFFFBF
//      After : 40
//
//////////////////////////////////////////////////////////////////