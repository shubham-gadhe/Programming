//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_167
//
//  Description       : This program toggles the 4th bit of a given
//                      integer number using the bitwise XOR operator.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : It accepts an integer number from the user
//                      and toggles its 4th bit using the bitwise
//                      XOR operator with an appropriate mask.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/08/2026
//
//////////////////////////////////////////////////////////////////

int main()
{
    UINT iNo = 0;
    UINT iMask = 0;

    printf("Enter Number : \n");
    scanf("%u", &iNo);

    iMask = 0x00000008;

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
//      Updated number : 2
//
//////////////////////////////////////////////////////////////////