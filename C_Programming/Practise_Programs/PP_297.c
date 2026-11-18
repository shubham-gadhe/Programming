//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_297
//
//  Description       : Displays all elements of an integer array
//                      using a separate user-defined function.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/11/2026
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1)
//
//  Note              : n represents the number of elements
//                      present in the array.
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Accepts an integer array and its size,
//                      then displays all array elements using
//                      a for loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/11/2026
//
//  Input             : Integer array and its size.
//
//  Output            : Displays all elements of the array.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void Display(int Arr[], int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        printf("%d\n", Arr[i]);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Initializes an integer array and passes
//                      it along with its size to the Display()
//                      function to print all its elements.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/11/2026
//
//  Input             : No user input.
//
//  Output            : Displays all elements of the array.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int main()
{
    int Brr[] = {10, 20, 30, 40, 50};

    Display(Brr, 5);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input
//
//  No user input required.
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  10
//  20
//  30
//  40
//  50
//
//////////////////////////////////////////////////////////////////