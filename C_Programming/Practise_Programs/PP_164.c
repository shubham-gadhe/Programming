//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_164
//
//  Description       : This program demonstrates the right shift
//                      operation on an unsigned integer and shows
//                      the value of the mask for 33 iterations,
//                      including the extra iteration beyond 32 bits.
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

    for(iCnt = 1; iCnt <= 33; iCnt++)   
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
//      ...
//      31 : 2
//      32 : 1
//      33 : 0
//
//////////////////////////////////////////////////////////////////