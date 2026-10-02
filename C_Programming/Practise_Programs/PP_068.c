//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_068
//
//  Description       : This program demonstrates passing an array
//                      to a function using array notation and
//                      accessing consecutive elements using
//                      pointer arithmetic.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/07/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display()
//
//  Description       : It displays consecutive elements of the
//                      array by using an array parameter and
//                      incrementing the pointer after accessing
//                      each element.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/07/2026
//
//////////////////////////////////////////////////////////////////

void Display(int iPtr[])
{
    printf("%d\n", *iPtr);

    iPtr++;

    printf("%d\n", *iPtr);

    iPtr++;

    printf("%d\n", *iPtr);
}

int main()
{
    int Arr[5] = {10,20,30,40,50};

    Display(Arr);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input
//
//  Sample Output :
//      10
//      20
//      30
//
//////////////////////////////////////////////////////////////////
