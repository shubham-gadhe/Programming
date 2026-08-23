//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_184
//
//  Description       : This program toggles the 3rd and 8th bits of
//                      a given unsigned integer using the bitwise
//                      XOR operator and an appropriate bit mask.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

// Position 3rd and 8th
int main()
{
    UINT iMask = 0x00000084;
    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter Number : \n");
    scanf("%u", &iNo);

    iResult = iNo ^ iMask;

    printf("Updated No : %u\n", iResult);

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
//      Updated No : 142
//
//////////////////////////////////////////////////////////////////