//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_300
//
//  Description       : Attempts to display array elements in
//                      reverse order using recursion and a
//                      static variable.
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
//  Description       : Increments a static index before making
//                      recursive calls and displays array
//                      elements while returning from recursion.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/11/2026
//
//  Input             : Integer array and its size.
//
//  Output            : Attempts to display array elements
//                      in reverse order. However, the current
//                      implementation accesses Arr[iSize]
//                      during the first return, which is
//                      outside the valid array index range.
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
        i++;
        Display(Arr, iSize);
        printf("%d\n", Arr[i]);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Initializes an integer array and passes
//                      it along with its size to the Display()
//                      function.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/11/2026
//
//  Input             : No user input.
//
//  Output            : Calls Display() to process the array
//                      recursively. The program has undefined
//                      behavior due to an out-of-bounds access.
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
//  No predictable output.
//
//  Note: The function accesses Arr[5], which is outside the
//        valid array indices (0 to 4). Therefore, the program
//        may produce garbage output or behave unpredictably.
//
//////////////////////////////////////////////////////////////////