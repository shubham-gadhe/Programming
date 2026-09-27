//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_051
//
//  Description       : This program extracts and displays each digit
//                      of an integer starting from the least
//                      significant digit using the modulus (%) and
//                      division (/) operators.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/07/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iNo = 751;
    int iDigit = 0;

    // Extract and display the last digit.
    iDigit = iNo % 10;
    printf("%d\n", iDigit);
    iNo = iNo / 10;

    // Extract and display the next digit.
    iDigit = iNo % 10;
    printf("%d\n", iDigit);
    iNo = iNo / 10;

    // Extract and display the remaining digit.
    iDigit = iNo % 10;
    printf("%d\n", iDigit);
    iNo = iNo / 10;    
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      751
//
//  Sample Output :
//      1
//      5
//      7
//
//////////////////////////////////////////////////////////////////
