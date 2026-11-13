//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_270
//
//  Description       : Demonstrates recursive function calling
//                      using a static storage class variable
//                      with a terminating condition and displays
//                      incrementing values.
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
//                      displays its value, increments it and
//                      calls itself recursively.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/11/2026
//
//  Input             : No input.
//
//  Output            : Displays incrementing values from 1 to 4.
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
        printf("Jay Ganesh...%d\n", i);
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
//  Output            : Displays values from 1 to 4 through
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
//  Jay Ganesh...1
//  Jay Ganesh...2
//  Jay Ganesh...3
//  Jay Ganesh...4
//
//////////////////////////////////////////////////////////////////