//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_268
//
//  Description       : Demonstrates recursive function calling
//                      with a conditional statement and a static
//                      storage class variable.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/11/2026
//
//  Time Complexity   : O(n) - Recursive function calls
//
//  Space Complexity  : O(n) - Recursive call stack
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Initializes a static variable and assigns
//                      it the value one. Checks the condition,
//                      displays a message, increments the variable
//                      and calls itself recursively.
//
//                      Since the variable is assigned one during
//                      every recursive call, the condition always
//                      remains true. Therefore, recursion continues
//                      until stack overflow.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/11/2026
//
//  Input             : No input.
//
//  Output            : Displays "Jay Ganesh..." repeatedly until
//                      stack overflow or abnormal termination.
//
//  Time Complexity  : O(n) - Recursive function calls
//
//  Space Complexity : O(n) - Recursive call stack
//
//////////////////////////////////////////////////////////////////

void Display()
{
    static int i = 0;

    i = 1;  

    if(i <= 4)
    {
        printf("Jay Ganesh...\n");
        i++;
        Display();
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Entry point of the program. Calls the
//                      Display function to start recursion.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/11/2026
//
//  Input             : No user input.
//
//  Output            : Starts recursive display operations.
//
//  Time Complexity  : O(n) - Recursive function calls
//
//  Space Complexity : O(n) - Recursive call stack
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
//  Jay Ganesh...
//  ...
//  (Continues until stack overflow or abnormal termination.)
//
//////////////////////////////////////////////////////////////////