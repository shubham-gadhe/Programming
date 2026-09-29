//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_058
//
//  Description       : This program demonstrates partial array
//                      initialization using a global array and
//                      displays initialized and uninitialized
//                      array elements.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/07/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int Arr[7];

int main()
{
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
//      0
//      0
//
//  Note           :
//      Since Arr is a global array, all elements are automatically
//      initialized to 0. Therefore, Arr[2] and Arr[5] contain 0.
//
//////////////////////////////////////////////////////////////////
