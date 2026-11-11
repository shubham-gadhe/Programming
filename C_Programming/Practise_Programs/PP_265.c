//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_265
//
//  Description       : Demonstrates recursive function calling
//                      and the behavior of a static storage
//                      class variable during recursive execution.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/11/2026
//
//  Time Complexity   : O(n) - Due to recursive function calls
//
//  Space Complexity  : O(n) - Due to recursive call stack
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Declares a static variable, displays its
//                      value, increments it and calls itself
//                      recursively. The static variable retains
//                      its updated value across recursive calls.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/11/2026
//
//  Input             : No input.
//
//  Output            : Displays increasing values starting from
//                      1 until stack overflow or abnormal
//                      termination.
//
//  Time Complexity  : O(n)
//
//  Space Complexity : O(n)
//
//////////////////////////////////////////////////////////////////

void Display()
{
    static int i = 1;

    printf("Jay Ganesh...%d\n", i);
    i++;

    Display();
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Entry point of the program. Calls the
//                      Display function to start recursion.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/11/2026
//
//  Input             : No user input.
//
//  Output            : Starts recursive display operations.
//
//  Time Complexity  : O(n)
//
//  Space Complexity : O(n)
//
//////////////////////////////////////////////////////////////////

int main()
{
    Display();

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input:
//
//  No input required.
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output:
//
//  Jay Ganesh...1
//  Jay Ganesh...2
//  Jay Ganesh...3
//  Jay Ganesh...4
//  ...
//  (Continues until stack overflow or abnormal termination.)
//
//////////////////////////////////////////////////////////////////