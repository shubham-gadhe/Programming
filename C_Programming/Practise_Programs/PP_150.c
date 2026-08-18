//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_150
//
//  Description       : This program uses a hexadecimal bit mask to
//                      check whether the 17th bit of a given unsigned
//                      integer is ON or OFF.
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
    UINT iMask = 0x00010000;    
    UINT iAns = 0;

    printf("Enter Number : \n");
    scanf("%d", &iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("17th bit is ON\n");
    }
    else
    {
        printf("17th bit is OFF\n");
    }

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      65536
//
//  Sample Output :
//
//      Enter Number :
//      17th bit is ON
//
//////////////////////////////////////////////////////////////////