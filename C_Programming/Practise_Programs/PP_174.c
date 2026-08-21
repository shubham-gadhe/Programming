//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_174
//
//  Description       : This program turns OFF the 4th bit of a given
//                      unsigned integer using the bitwise AND
//                      operator and an appropriate bit mask.
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
    UINT iMask = 0xFFFFFFF7;

    printf("Enter Number : \n");
    scanf("%u", &iNo);

    iNo = iNo & iMask;
    
    printf("Updated number : %u\n", iNo);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      15
//
//  Sample Output :
//
//      Enter Number :
//      Updated number : 7
//
//////////////////////////////////////////////////////////////////