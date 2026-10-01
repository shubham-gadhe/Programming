//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_064
//
//  Description       : This program demonstrates the concept of
//                      Call By Address in C. The address of a variable
//                      is passed to the function, allowing the function
//                      to modify the original variable.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/07/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : CallByAddress()
//
//  Description       : It increments the value of the original
//                      variable by using its address through a
//                      pointer.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/07/2026
//
//////////////////////////////////////////////////////////////////

void CallByAddress(int *iPtr)
{
    (*iPtr)++;
}

int main()
{
    int iValue = 11;

    CallByAddress(&iValue);

    printf("Value after function call : %d\n", iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input
//
//  Sample Output :
//      Value after function call : 12
//
//////////////////////////////////////////////////////////////////
