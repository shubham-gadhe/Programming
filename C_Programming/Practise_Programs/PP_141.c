//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_141
//
//  Description       : This program converts a decimal number into
//                      its binary representation using division by 2.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/08/2026
//
//  Time Complexity   : O(log n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iNo = 0, iDigit = 0;

    printf("Enter Number : \n");
    scanf("%d", &iNo);

    while(iNo != 0)
    {
        iDigit = iNo % 2;

        printf("%d", iDigit);
        
        iNo = iNo / 2;
    }

    printf("\n");    
    
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
//      0101
//
//////////////////////////////////////////////////////////////////