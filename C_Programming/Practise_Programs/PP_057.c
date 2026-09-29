//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_057
//
//  Description       : This program demonstrates partial array
//                      initialization by assigning values to
//                      selected array elements and displaying
//                      initialized and uninitialized elements.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/07/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int Arr[7];

    Arr[0] = 10;
    Arr[3] = 20;
    Arr[6] = 30;

    printf("%zu\n", sizeof(Arr));

    printf("%d\n", Arr[0]);
    printf("%d\n", Arr[3]);
    printf("%d\n", Arr[6]);

    printf("%d\n", Arr[2]);
    printf("%d\n", Arr[5]);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input
//
//  Sample Output :
//      28
//      10
//      20
//      30
//      Garbage Value
//      Garbage Value
//
//  Note           :
//      Arr[0], Arr[3], and Arr[6] are explicitly initialized.
//      Arr[2] and Arr[5] contain indeterminate values because
//      they are not initialized.
//
//////////////////////////////////////////////////////////////////
