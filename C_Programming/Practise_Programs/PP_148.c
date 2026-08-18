//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_148
//
//  Description       : This program uses a bit mask to check whether
//                      the 7th bit of a given unsigned integer is ON
//                      or OFF.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/08/2026
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
    UINT iMask = 64;
    UINT iAns = 0;

    printf("Enter Number : \n");
    scanf("%d", &iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("7th bit is ON\n");
    }
    else
    {
        printf("7th bit is OFF\n");
    }

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      64
//
//  Sample Output :
//
//      Enter Number :
//      7th bit is ON
//
//////////////////////////////////////////////////////////////////