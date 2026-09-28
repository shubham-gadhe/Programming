//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_052
//
//  Description       : This program extracts and displays each digit
//                      of an integer starting from the least
//                      significant digit using a while loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/07/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iNo = 751;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      751
//
//  Sample Output :
//      1
//      5
//      7
//
//////////////////////////////////////////////////////////////////
