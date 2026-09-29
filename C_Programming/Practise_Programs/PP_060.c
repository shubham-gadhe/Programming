//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_060
//
//  Description       : This program initializes an integer array
//                      and displays all the elements of the array
//                      using a for loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/07/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};

    int iCnt = 0;

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input
//
//  Sample Output :
//      10
//      20
//      30
//      40
//      50
//
//////////////////////////////////////////////////////////////////
