//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_055
//
//  Description       : This program displays the address of an array,
//                      the address of the entire array, and the address
//                      of the first element of the array.
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
    int Arr[] = {10,20,30,40,50};

    printf("%p\n", (void *)Arr);
    printf("%p\n", (void *)&Arr);
    printf("%p\n", (void *)&Arr[0]);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input
//
//  Sample Output :
//      0x7ffeefbff5a0
//      0x7ffeefbff5a0
//      0x7ffeefbff5a0
//
//  Note           :
//      The actual memory address may be different each time
//      the program is executed.
//
//////////////////////////////////////////////////////////////////
