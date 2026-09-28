//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_056
//
//  Description       : This program calculates and displays the
//                      total size of an integer array using the
//                      sizeof operator.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/07/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int Arr[7] = {10,20,30,40,50};

    printf("%zu\n", sizeof(Arr));

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input
//
//  Sample Output :
//      28
//
//  Note :
//      The array contains 7 integers. If an int occupies 4 bytes,
//      the total size of the array is 7 * 4 = 28 bytes.
//
//////////////////////////////////////////////////////////////////
