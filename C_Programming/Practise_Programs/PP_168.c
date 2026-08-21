//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_168
//
//  Description       : This program toggles the 11th bit of a given
//                      integer number using the bitwise XOR operator.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 21/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0;

    printf("Enter Number : \n");
    scanf("%u", &iNo);

    iMask = 0x00000400;

    iNo = iNo ^ iMask;
    
    printf("Updated number : %u\n", iNo);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      10
//
//  Sample Output :
//
//      Enter Number :
//      Updated number : 1034
//
//////////////////////////////////////////////////////////////////