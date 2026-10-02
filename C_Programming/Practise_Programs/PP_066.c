//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_066
//
//  Description       : This program demonstrates passing the base
//                      address of an array to a function and accessing
//                      the first element of the array using a pointer.
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
//  Description       : It displays the value stored at the memory
//                      location pointed to by the pointer.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/07/2026
//
//////////////////////////////////////////////////////////////////

void Display(int *iPtr)
{
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
//
//////////////////////////////////////////////////////////////////
