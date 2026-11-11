//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_263
//
//  Description       : Demonstrates recursive function calling
//                      using a user-defined function.
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
//  Description       : Displays the message "Jay Ganesh..." and
//                      calls itself recursively without a
//                      terminating condition.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/11/2026
//
//  Input             : No input.
//
//  Output            : Displays "Jay Ganesh..." repeatedly until
//                      stack overflow or abnormal termination.
//
//  Time Complexity  : O(n)
//
//  Space Complexity : O(n)
//
//////////////////////////////////////////////////////////////////

void Display()
{
    printf("Jay Ganesh...\n");

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
//  Jay Ganesh...
//  Jay Ganesh...
//  Jay Ganesh...
//  ...
//  (Continues until stack overflow or abnormal termination.)
//
//////////////////////////////////////////////////////////////////