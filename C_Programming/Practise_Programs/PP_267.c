//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_267
//
//  Description       : Demonstrates recursive function calling
//                      with a conditional statement and an auto
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
//  Description       : Initializes an auto variable and checks
//                      a condition before displaying a message
//                      and calling itself recursively.
//
//                      Each recursive call creates a new local
//                      variable initialized to zero and then
//                      assigns it the value one. Therefore, the
//                      condition remains true and recursion
//                      continues until stack overflow.
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
    auto int i = 0;

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