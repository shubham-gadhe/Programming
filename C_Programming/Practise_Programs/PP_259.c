//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_259
//
//  Description       : Demonstrates the use of an auto storage
//                      class variable inside a user-defined
//                      function.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/11/2026
//
//  Time Complexity   : Display() - O(1)
//                      main()    - O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Uses an auto storage class variable and
//                      a for loop to display the message
//                      "Jay Ganesh..." four times.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/11/2026
//
//  Input             : None.
//  Output            : Prints the message four times.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void Display()
{
    auto int i = 0;

    for(i = 1; i <= 4; i++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    Display();

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input
//
//  No input required.
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  Jay Ganesh...
//  Jay Ganesh...
//  Jay Ganesh...
//  Jay Ganesh...
//
//////////////////////////////////////////////////////////////////