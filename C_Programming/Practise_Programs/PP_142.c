//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_142
//
//  Description       : This program demonstrates the bitwise AND
//                      operator on two integer numbers.
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

    printf("Result is : %d\n", iAns);
    
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
//      Result is : 8
//
//////////////////////////////////////////////////////////////////