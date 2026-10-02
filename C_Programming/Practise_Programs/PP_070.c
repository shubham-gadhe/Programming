//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_070
//
//  Description       : This program demonstrates passing an array
//                      to a function and accessing its elements
//                      using array indexing.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/08/2026
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
//  Description       : It displays all the elements of the array
//                      using array indexing.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/08/2026
//
//////////////////////////////////////////////////////////////////

void Display(int Arr[])
{
    printf("%d\n", Arr[0]);
    printf("%d\n", Arr[1]);
    printf("%d\n", Arr[2]);
    printf("%d\n", Arr[3]);
    printf("%d\n", Arr[4]);
}

int main()
{
    int Brr[5] = {10,20,30,40,50};

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
//      50
//
//////////////////////////////////////////////////////////////////
