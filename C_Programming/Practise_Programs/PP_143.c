//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_143
//
//  Description       : This program demonstrates the bitwise AND,
//                      OR and XOR operations on two integer numbers.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iNo1 = 0, iNo2 = 0, iAns = 0 ;

    printf("Enter First Number : \n");
    scanf("%d", &iNo1);

    printf("Enter Second Number : \n");
    scanf("%d", &iNo2);
    
    iAns = iNo1 & iNo2;

    printf("AND : %d\n", iAns);

    iAns = iNo1 | iNo2;

    printf("OR : %d\n", iAns);

    iAns = iNo1 ^ iNo2;

    printf("XOR : %d\n", iAns);
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      12
//      10
//
//  Sample Output :
//
//      Enter First Number :
//      Enter Second Number :
//      AND : 8
//      OR : 14
//      XOR : 6
//
//////////////////////////////////////////////////////////////////