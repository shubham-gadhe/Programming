//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_159
//
//  Description       : This program displays the decimal value of
//                      powers of 2 from the 1st bit to the 31st bit
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

    for(iCnt = 1; iCnt < 32; iCnt++)
    {
        printf("%d : %d\n", iCnt, iMask);  
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
//      5 : 16
//      ...
//      30 : 536870912
//      31 : 1073741824
//
//////////////////////////////////////////////////////////////////