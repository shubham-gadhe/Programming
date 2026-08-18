//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_154
//
//  Description       : This program checks whether a bit at a given
//                      position in an unsigned integer is ON or OFF
//                      using a bit mask.
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
    UINT iMask = 0x1;
    UINT iPos = 0;
    UINT iAns = 0;

    printf("Enter Number : \n");
    scanf("%d", &iNo);

    printf("Enter Position : \n");
    scanf("%d", &iPos);    

    iMask = iMask << (iPos - 1);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      12
//      3
//
//  Sample Output :
//
//      Enter Number :
//      Enter Position :
//      Bit is ON
//
//////////////////////////////////////////////////////////////////