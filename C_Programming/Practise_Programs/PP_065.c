//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_065
//
//  Description       : This program demonstrates passing the base
//                      address of an array to a function using a
//                      pointer.
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
//  Description       : It displays the address received through
//                      the pointer parameter.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/07/2026
//
//////////////////////////////////////////////////////////////////

void Display(int *iPtr)
{
    printf("Value of iPtr : %p\n", (void *)iPtr);
}

int main()
{
    int Arr[5] = {10,20,30,40,50};

    printf("Base address of Arr : %p\n", (void *)Arr);

    Display(Arr);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input
//
//  Sample Output :
//      Base address of Arr : 0x7ffe12345678
//      Value of iPtr : 0x7ffe12345678
//
//  Note           :
//      The actual memory address may be different each time
//      the program is executed. Both addresses are the same
//      because the base address of the array is passed to Display().
//
//////////////////////////////////////////////////////////////////
