//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_186
//
//  Description       : This program toggles the 3rd and 8th bits of
//                      a given unsigned integer by dynamically
//                      creating and combining two bit masks.
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
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;
    UINT iMask = 0;

    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter Number : \n");
    scanf("%u", &iNo);

    iMask1 = iMask1 << 2;
    iMask2 = iMask2 << 7;

    iMask = iMask1 | iMask2;

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