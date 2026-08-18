//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_155
//
//  Description       : This program demonstrates the left shift
//                      operation on an unsigned integer.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UNIT;

int main()
{
    UNIT iMask = 0x1;
    int iCnt = 0;

    printf("%d\n", iMask);  
    iMask = iMask << 1;

    printf("%d\n", iMask);  
    iMask = iMask << 1;

    printf("%d\n", iMask);  
    iMask = iMask << 1;

    printf("%d\n", iMask);  
    iMask = iMask << 1;

    printf("%d\n", iMask);  
    iMask = iMask << 1;

    printf("%d\n", iMask);  
    iMask = iMask << 1;

    printf("%d\n", iMask);  
    iMask = iMask << 1;

    printf("%d\n", iMask);  
    iMask = iMask << 1;

    printf("%d\n", iMask);  
    iMask = iMask << 1;

    printf("%d\n", iMask);  
    iMask = iMask << 1;

    printf("%d\n", iMask);  
    iMask = iMask << 1;

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//
//      1
//      2
//      4
//      8
//      16
//      32
//      64
//      128
//      256
//      512
//      1024
//
//////////////////////////////////////////////////////////////////