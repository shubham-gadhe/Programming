//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_152
//
//  Description       : This program uses a hexadecimal bit mask to
//                      check whether the 13th bit of a given unsigned
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
    UINT iMask = 0x1000;    
    UINT iAns = 0;

    printf("Enter Number : \n");
    scanf("%d", &iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("13th bit is ON\n");
    }
    else
    {
        printf("13th bit is OFF\n");
    }

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      4096
//
//  Sample Output :
//
//      Enter Number :
//      13th bit is ON
//
//////////////////////////////////////////////////////////////////