//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_140
//
//  Description       : This program demonstrates the display of an
//                      integer value in Decimal, Octal and Hexadecimal
//                      number systems using format specifiers.
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
    int No = 197;

    printf("Decimal : %d\n", No);
    printf("Octal : %o\n", No);
    printf("HexaDecimal : %x\n", No);
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//
//      Decimal : 197
//      Octal : 305
//      HexaDecimal : c5
//
//////////////////////////////////////////////////////////////////