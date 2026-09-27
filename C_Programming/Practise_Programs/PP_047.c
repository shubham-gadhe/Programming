//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_047
//
//  Description       : This program displays the message
//                      "Jay Ganesh..." five times using
//                      a while loop.
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
        printf("Jay Ganesh...\n");
        iCnt++;
    }

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input
//
//  Sample Output :
//      Jay Ganesh...
//      Jay Ganesh...
//      Jay Ganesh...
//      Jay Ganesh...
//      Jay Ganesh...
//
//////////////////////////////////////////////////////////////////
