//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_158
//
//  Description       : This program displays numbers from 1 to 1000
//                      in decimal and hexadecimal formats.
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
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 1000; iCnt++)
    {
        printf("%d\t%X\n", iCnt, iCnt);
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
//      1       1
//      2       2
//      3       3
//      4       4
//      5       5
//      ...
//      10      A
//      ...
//      100     64
//      ...
//      1000    3E8
//
//////////////////////////////////////////////////////////////////