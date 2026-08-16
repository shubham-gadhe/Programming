//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_134
//
//  Description       : This program demonstrates swapping of two
//                      integer values using a temporary variable.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 16/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int i = 11;
    int j = 21;
    int temp = 0;

    temp = i;
    i = j;
    j = temp;

    printf("%d\n", i);
    printf("%d\n", j);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//
//      21
//      11
//
//////////////////////////////////////////////////////////////////