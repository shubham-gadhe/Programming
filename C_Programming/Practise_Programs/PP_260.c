//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_260
//
//  Description       : Demonstrates the use of an auto storage
//                      class variable and a while loop to display
//                      a message multiple times.
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
//                      a while loop to display the message
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

    i = 1;

    while(i <= 4)
    {
        printf("Jay Ganesh...\n");
        i++;
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