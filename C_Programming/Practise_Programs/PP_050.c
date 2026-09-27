//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_050
//
//  Description       : This program displays numbers from 5 to 1
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

    iCnt = 5;

    while(iCnt >= 1)
    {
        printf("%d\t", iCnt);
        iCnt--;
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
//      5    4    3    2    1
//
//////////////////////////////////////////////////////////////////
