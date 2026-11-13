//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_272
//
//  Description       : Demonstrates a user-defined function with
//                      a parameter to display a message multiple
//                      times based on user input.
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
//  Description       : Accepts the frequency from the user and
//                      passes it to the Display function.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/11/2026
//
//  Input             : Integer frequency entered by the user.
//
//  Output            : Displays "Jay Ganesh..." according to
//                      the entered frequency.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Frequency : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input:
//
//  Enter Frequency :
//  5
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
//
//////////////////////////////////////////////////////////////////