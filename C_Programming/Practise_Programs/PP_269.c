//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_269
//
//  Description       : Demonstrates recursive function calling
//                      with a static storage class variable and
//                      a terminating condition.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/11/2026
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
//  Description       : Uses a static variable to maintain its
//                      value across recursive function calls.
//                      Checks whether the variable is less than
//                      or equal to four. If the condition is true,
//                      displays a message, increments the variable
//                      and calls itself recursively.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/11/2026
//
//  Input             : No input.
//
//  Output            : Displays "Jay Ganesh..." four times.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

void Display()
{
    static int i = 1;

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
//  Date              : 13/11/2026
//
//  Input             : No user input.
//
//  Output            : Displays the message four times through
//                      recursive function calls.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
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
//
//////////////////////////////////////////////////////////////////