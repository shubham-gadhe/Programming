//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_067
//
//  Description       : This program demonstrates pointer arithmetic
//                      by accessing consecutive elements of an array
//                      using a pointer.
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
//                      array by incrementing the pointer after
//                      accessing each element.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/07/2026
//
//////////////////////////////////////////////////////////////////

void Display(int *iPtr)
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
