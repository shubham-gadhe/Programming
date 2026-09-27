//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_048
//
//  Description       : This program displays the message
//                      "Jay Ganesh..." five times using
//                      a do-while loop.
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

    do
    {
        printf("Jay Ganesh...\n");
        iCnt++;
    }while(iCnt <= 5);

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
