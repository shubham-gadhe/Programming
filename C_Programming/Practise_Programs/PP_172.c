//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_172
//
//  Description       : This program accepts an integer number and a
//                      bit position from the user and toggles the
//                      specified bit after validating the bit position.
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

//////////////////////////////////////////////////////////////////
//
//  Function Name     : ToggleBit()
//
//  Description       : It is used to toggle the bit at the specified
//                      position of the given number using the bitwise
//                      XOR operator. It also validates whether the
//                      bit position is between 1 and 32.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 21/08/2026
//
//////////////////////////////////////////////////////////////////

UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x1;
    UINT iResult = 0;

    // Adding Filter
    if((iPos < 1) || (iPos > 32))
    {
        printf("Invalid Bit Position\n");
        return iNo;
    }

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    UINT iLocation = 0;

    printf("Enter Number : \n");
    scanf("%u", &iValue);

    printf("Enter Bit Position : \n");
    scanf("%u", &iLocation);
    
    iRet = ToggleBit(iValue, iLocation);

    printf("Updated number is : %u\n", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      10
//      4
//
//  Sample Output :
//
//      Enter Number :
//      Enter Bit Position :
//      Updated number is : 2
//
//////////////////////////////////////////////////////////////////