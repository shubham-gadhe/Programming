//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_162
//
//  Description       : This program demonstrates the left shift
//                      operation on an unsigned integer by displaying
//                      hexadecimal values for bit positions from
//                      1 to 33.
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
    UNIT iMask = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 33; iCnt++)
    {
        printf("%d : %X\n", iCnt, iMask);
        iMask = iMask << 1;
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
//      1 : 1
//      2 : 2
//      3 : 4
//      4 : 8
//      5 : 10
//      ...
//      32 : 80000000
//      33 : 0
//
//////////////////////////////////////////////////////////////////