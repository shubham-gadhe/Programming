//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_271
//
//  Description       : Demonstrates a user-defined function with
//                      a parameter to display a message multiple
//                      times using a while loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/11/2026
//
//  Time Complexity   : O(n) - Where n is the given input value.
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Accepts an integer parameter and displays
//                      the message "Jay Ganesh..." repeatedly
//                      using a while loop until the counter
//                      exceeds the given value.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/11/2026
//
//  Input             : Integer value specifying the number of
//                      times the message should be displayed.
//
//  Output            : Displays "Jay Ganesh..." iNo times.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    auto int i = 0;

    i = 1;

    while(i <= iNo)
    {
        printf("Jay Ganesh...\n");
        i++;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Entry point of the program. Calls the
//                      Display function with the value 7.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/11/2026
//
//  Input             : No user input.
//
//  Output            : Displays "Jay Ganesh..." seven times.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int main()
{
    Display(7);

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
//  Jay Ganesh...
//  Jay Ganesh...
//  Jay Ganesh...
//
//////////////////////////////////////////////////////////////////