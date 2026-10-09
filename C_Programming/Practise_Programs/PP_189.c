//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_101
//
//  Description       : This program counts the number of 1's in the
//                      binary representation of a given integer.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 09/10/2026
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

        iCount = iCount + iDigit;

        iNo = iNo / 2;
    }

    printf("Number of 1's are : %d\n", iCount);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      13
//
//  Sample Output :
//      Number of 1's are : 3
//
//////////////////////////////////////////////////////////////////
