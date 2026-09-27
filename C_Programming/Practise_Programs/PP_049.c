//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_049
//
//  Description       : This program displays numbers from 1 to 5
//                      using a while loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/07/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iCnt = 0;

    iCnt = 1;

    while(iCnt <= 5)
    {
        printf("%d\t", iCnt);
        iCnt++;
    }

    printf("\n");

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input
//
//  Sample Output :
//      1    2    3    4    5
//
//////////////////////////////////////////////////////////////////
