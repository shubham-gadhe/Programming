//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_276
//
//  Description       : Demonstrates a user-defined function with
//                      a parameter to display a message multiple
//                      times using a while loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/11/2026
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
//                      using a while loop until the value
//                      becomes zero. Decrements the value
//                      after each iteration.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/11/2026
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
    while(iNo != 0)
    {
        printf("Jay Ganesh...\n");
        iNo--;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Entry point of the program. Calls the
//                      Display function with the value 3.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/11/2026
//
//  Input             : No user input.
//
//  Output            : Displays "Jay Ganesh..." three times.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int main()
{
    Display(3);

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
//
//////////////////////////////////////////////////////////////////