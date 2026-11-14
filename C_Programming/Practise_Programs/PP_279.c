//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_279
//
//  Description       : Demonstrates recursive function calling
//                      using an arithmetic decrement operation
//                      to display decrementing values until
//                      the value becomes zero. Displays a
//                      message after recursion completes.
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
//                      Displays the current value and calls
//                      itself recursively with the value
//                      decremented by one until it becomes zero.
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
        Display(iNo - 1);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Accepts an integer frequency from the
//                      user and passes it to the Display
//                      function. Displays "End of main..."
//                      after the recursive function completes.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/11/2026
//
//  Input             : Integer frequency entered by the user.
//
//  Output            : Displays decrementing values according
//                      to the entered frequency, followed by
//                      "End of main...".
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

    printf("End of main...");

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
//  End of main...
//
//////////////////////////////////////////////////////////////////