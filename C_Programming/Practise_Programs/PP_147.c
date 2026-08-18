//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_147
//
//  Description       : This program uses a typedef to create an
//                      alias for unsigned int and checks whether
//                      the 3rd bit of a number is ON or OFF.
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
    UINT iMask = 4;
    UINT iAns = 0;

    printf("Enter Number : \n");
    scanf("%d", &iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("3rd bit is ON\n");
    }
    else
    {
        printf("3rd bit is OFF\n");
    }

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      12
//
//  Sample Output :
//
//      Enter Number :
//      3rd bit is ON
//
//////////////////////////////////////////////////////////////////