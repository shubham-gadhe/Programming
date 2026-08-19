//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_156
//
//  Description       : This program demonstrates the left shift
//                      operation on an unsigned integer and displays
//                      the result in hexadecimal format.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/08/2026
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

    printf("%X\n", iMask);  
    iMask = iMask << 1;

    printf("%X\n", iMask);  
    iMask = iMask << 1;

    printf("%X\n", iMask);  
    iMask = iMask << 1;

    printf("%X\n", iMask);  
    iMask = iMask << 1;

    printf("%X\n", iMask);  
    iMask = iMask << 1;

    printf("%X\n", iMask);  
    iMask = iMask << 1;

    printf("%X\n", iMask);  
    iMask = iMask << 1;

    printf("%X\n", iMask);  
    iMask = iMask << 1;

    printf("%X\n", iMask);  
    iMask = iMask << 1;

    printf("%X\n", iMask);  
    iMask = iMask << 1;

    printf("%X\n", iMask);  
    iMask = iMask << 1;

    printf("%X\n", iMask);  
    iMask = iMask << 1;

    printf("%X\n", iMask);  
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
//      10
//      20
//      40
//      80
//      100
//      200
//      400
//      800
//      1000
//
//////////////////////////////////////////////////////////////////