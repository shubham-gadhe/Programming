//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_299
//
//  Description       : Displays all elements of an integer array
//                      using recursion and a static variable.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/11/2026
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//  Note              : n represents the number of elements
//                      present in the array. Recursive calls
//                      require O(n) stack space.
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Displays array elements recursively.
//                      Uses a static variable to maintain the
//                      current array index across recursive calls.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/11/2026
//
//  Input             : Integer array and its size.
//
//  Output            : Displays all elements of the array.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

void Display(int Arr[], int iSize)
{
    static int i = 0;

    if(i < iSize)
    {
        printf("%d\n", Arr[i]);
        i++;
        Display(Arr, iSize);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Initializes an integer array and passes
//                      it along with its size to the Display()
//                      function to print all its elements
//                      recursively.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/11/2026
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