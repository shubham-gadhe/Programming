//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_144
//
//  Description       : This program counts the number of 1's in the
//                      binary representation of a given decimal number.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/08/2026
//
//  Time Complexity   : O(log n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iNo = 0, iCount = 0, iDigit = 0;

    printf("Enter Number : \n");
    scanf("%d", &iNo);

    while(iNo != 0)
    {
        iDigit = iNo % 2;

        if(iDigit == 1)
        {
            iCount++;
        }

        iNo = iNo / 2;
    }

    printf("Number of 1's are : %d\n", iCount);   
    
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
//      Number of 1's are : 2
//
//////////////////////////////////////////////////////////////////