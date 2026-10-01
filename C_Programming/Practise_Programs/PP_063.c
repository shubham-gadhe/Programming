//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_063
//
//  Description       : This program demonstrates the concept of
//                      Call By Value in C. A copy of the value is
//                      passed to the function, so changes made
//                      inside the function do not affect the
//                      original variable.
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
//  Function Name     : CallByValue()
//
//  Description       : It increments the local copy of the value
//                      passed to the function. The original variable
//                      remains unchanged.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/07/2026
//
//////////////////////////////////////////////////////////////////

void CallByValue(int iNo)
{
    iNo++;
}

int main()
{
    int iValue = 11;

    CallByValue(iValue);

    printf("Value after function call : %d\n", iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input
//
//  Sample Output :
//      Value after function call : 11
//
//////////////////////////////////////////////////////////////////
