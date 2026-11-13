//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_273
//
//  Description       : Demonstrates recursive function calling
//                      using a static storage class variable
//                      to display incrementing values based
//                      on user input.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/11/2026
//
//  Time Complexity   : O(n) - Where n is the given input value.
//
//  Space Complexity  : O(n) - Recursive call stack
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Accepts an integer parameter and uses a
//                      static variable to maintain its value
//                      across recursive function calls.
//                      Displays incrementing values until the
//                      static variable exceeds the given input.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/11/2026
//
//  Input             : Integer value specifying the frequency.
//
//  Output            : Displays incrementing values from 1 to
//                      iNo with the message "Jay Ganesh...".
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        printf("Jay Ganesh...%d\n", i);
        i++;
        Display(iNo);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Accepts the frequency from the user and
//                      passes it to the Display function to
//                      start recursive function calls.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/11/2026
//
//  Input             : Integer frequency entered by the user.
//
//  Output            : Displays incrementing values according
//                      to the entered frequency.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter frequency : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input:
//
//  Enter frequency : 5
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output:
//
//  Jay Ganesh...1
//  Jay Ganesh...2
//  Jay Ganesh...3
//  Jay Ganesh...4
//  Jay Ganesh...5
//
//////////////////////////////////////////////////////////////////