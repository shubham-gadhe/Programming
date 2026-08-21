//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_170
//
//  Description       : This program accepts an integer number and a
//                      bit position from the user and toggles the
//                      specified bit using the bitwise XOR operator.
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
    UINT iMask = 0x1;
    UINT iPos = 0;

    printf("Enter Number : \n");
    scanf("%u", &iNo);

    printf("Enter Bit Position : \n");
    scanf("%u", &iPos);

    iMask = iMask << (iPos - 1);

    iNo = iNo ^ iMask;
    
    printf("Updated number : %u\n", iNo);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//    10
//    4
//
//  Sample Output :
//
//      Enter Number :
//      Enter Bit Position :
//      Updated number : 2
//
//////////////////////////////////////////////////////////////////