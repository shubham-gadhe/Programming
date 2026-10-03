//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_074
//
//  Description       : This program demonstrates passing an array
//                      of smaller size to a function that attempts
//                      to access eight elements.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display()
//
//  Description       : It is used to display eight elements from
//                      the array using a for loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/08/2026
//
//////////////////////////////////////////////////////////////////

void Display(int Arr[])
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < 8; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }
}

int main()
{
    int Brr[4] = {10,20,30,40};

    Display(Brr);

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
//      40
//      Undefined / Garbage Values
//      Undefined / Garbage Values
//      Undefined / Garbage Values
//      Undefined / Garbage Values
//
//  Note           :
//      The array contains only 4 elements, but Display() attempts
//      to access 8 elements. Accessing Brr[4] to Brr[7] is
//      out-of-bounds and results in undefined behavior.
//
//////////////////////////////////////////////////////////////////
