//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_266
//
//  Description       : Demonstrates an infinite loop using a
//                      while loop to display continuously
//                      incrementing integer values.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/11/2026
//
//  Time Complexity   : O(n) - Infinite execution
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Initializes a local integer variable and
//                      continuously displays its value using
//                      an infinite while loop. The value is
//                      incremented after each display.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/11/2026
//
//  Input             : No input.
//
//  Output            : Displays "Jay Ganesh..." followed by
//                      continuously incrementing integer values.
//
//  Time Complexity  : O(n) - Infinite execution
//
//  Space Complexity : O(1)
//
//////////////////////////////////////////////////////////////////

void Display()
{
    int i = 1;

    while(1)
    {
        printf("Jay Ganesh...%d\n", i);
        i++;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Entry point of the program. Calls the
//                      Display function to start the infinite loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/11/2026
//
//  Input             : No user input.
//
//  Output            : Starts continuous display operations.
//
//  Time Complexity  : O(n) - Infinite execution
//
//  Space Complexity : O(1)
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
//  (Continues until the program is manually terminated.)
//
//////////////////////////////////////////////////////////////////