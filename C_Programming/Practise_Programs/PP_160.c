//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_160
//
//  Description       : This program displays the decimal value of
//                      powers of 2 from the 1st bit to the 32nd bit
//                      using the left shift operator.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UNIT;

int main()
{
    UNIT iMask = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 32; iCnt++)
    {
        printf("%d : %up\n", iCnt, iMask);  
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
//      1 : 1p
//      2 : 2p
//      3 : 4p
//      4 : 8p
//      5 : 16p
//      ...
//      31 : 2147483648p
//      32 : 0p
//
//////////////////////////////////////////////////////////////////