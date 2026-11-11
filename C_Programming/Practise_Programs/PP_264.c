//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_264
//
//  Description       : Demonstrates recursive function calling
//                      and the behavior of an auto storage class
//                      variable during recursive execution.
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
//  Description       : Declares an auto variable, displays its
//                      value, increments it and calls itself
//                      recursively. Each recursive call creates
//                      a separate instance of the local variable.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/11/2026
//
//  Input             : No input.
//
//  Output            : Displays "Jay Ganesh...1" repeatedly
//                      until stack overflow or abnormal termination.
//
//  Time Complexity  : O(n)
//
//  Space Complexity : O(n)
//
//////////////////////////////////////////////////////////////////

void Display()
{
    auto int i = 1;

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
//  Jay Ganesh...1
//  Jay Ganesh...1
//  ...
//  (Continues until stack overflow or abnormal termination.)
//
//////////////////////////////////////////////////////////////////