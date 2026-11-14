//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_278
//
//  Description       : Demonstrates recursive function calling
//                      using a pre-decrement operator to display
//                      decrementing values until the value
//                      becomes zero.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/11/2026
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
//  Description       : Accepts an integer parameter and checks
//                      whether it is not equal to zero.
//                      Displays the current value, decrements
//                      it using the pre-decrement operator and
//                      calls itself recursively until the
//                      value becomes zero.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/11/2026
//
//  Input             : Integer value specifying the frequency.
//
//  Output            : Displays decrementing values from iNo
//                      to 1 with the message "Jay Ganesh...".
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

void Display(int iNo)
{       
    if(iNo != 0)
    {
        printf("Jay Ganesh...%d\n", iNo);
        Display(--iNo);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Accepts an integer frequency from the
//                      user and passes it to the Display
//                      function to start recursive calls.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/11/2026
//
//  Input             : Integer frequency entered by the user.
//
//  Output            : Displays decrementing values according
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
//  Jay Ganesh...5
//  Jay Ganesh...4
//  Jay Ganesh...3
//  Jay Ganesh...2
//  Jay Ganesh...1
//
//////////////////////////////////////////////////////////////////