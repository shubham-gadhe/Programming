//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_163
//
//  Description       : This program demonstrates the right shift
//                      operation on an unsigned integer by displaying
//                      hexadecimal values for bit positions from
//                      1 to 32.
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
    UNIT iMask = 0x80000000;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 32; iCnt++)
    {
        printf("%d : %X\n", iCnt, iMask);
        iMask = iMask >> 1;
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
//      1 : 80000000
//      2 : 40000000
//      3 : 20000000
//      4 : 10000000
//      5 : 8000000
//      ...
//      31 : 2
//      32 : 1
//
//////////////////////////////////////////////////////////////////