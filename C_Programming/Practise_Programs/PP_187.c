//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_187
//
//  Description       : This program accepts an unsigned integer and
//                      two bit positions from the user and toggles
//                      both specified bits using bitwise XOR.
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

//////////////////////////////////////////////////////////////////
//
//  Function Name     : ToggleBits()
//
//  Description       : It is used to toggle the bits at two specified
//                      positions of the given number by creating
//                      masks and applying the bitwise XOR operator.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/08/2026
//
//////////////////////////////////////////////////////////////////

UINT ToggleBits(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;
    UINT iMask = 0;
    UINT iResult = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iMask = iMask1 | iMask2;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iLocation1 = 0;
    UINT iLocation2 = 0;
    UINT iRet = 0;

    printf("Enter Number : \n");
    scanf("%u", &iValue);

    printf("Enter First Bit Position : \n");
    scanf("%u", &iLocation1);

    printf("Enter Second Bit Position : \n");
    scanf("%u", &iLocation2);

    iRet = ToggleBits(iValue, iLocation1, iLocation2);

    printf("Updated Number : %u\n", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      10
//      3
//      8
//
//  Sample Output :
//
//      Enter Number :
//      Enter First Bit Position :
//      Enter Second Bit Position :
//      Updated Number : 142
//
//////////////////////////////////////////////////////////////////