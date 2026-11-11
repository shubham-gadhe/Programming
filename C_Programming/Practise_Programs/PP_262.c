//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_262
//
//  Description       : Demonstrates multiple calls to a
//                      user-defined function.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/11/2026
//
//  Time Complexity   : O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Displays the message "Jay Ganesh..." on
//                      the console.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/11/2026
//
//  Input             : No input.
//
//  Output            : Displays "Jay Ganesh..."
//
//  Time Complexity  : O(1)
//
//  Space Complexity : O(1)
//
//////////////////////////////////////////////////////////////////

void Display()
{
    printf("Jay Ganesh...\n");
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Entry point of the program. Calls the
//                      Display function four times.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/11/2026
//
//  Input             : No user input.
//
//  Output            : Displays "Jay Ganesh..." four times.
//
//  Time Complexity  : O(1)
//
//  Space Complexity : O(1)
//
//////////////////////////////////////////////////////////////////

int main()
{
    Display();
    Display();
    Display();
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