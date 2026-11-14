//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_277
//
//  Description       : Demonstrates recursive function calling
//                      with a post-decrement operator.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/11/2026
//
//  Time Complexity   : Infinite - Recursive function does not
//                      reach its terminating condition.
//
//  Space Complexity  : O(n) - Recursive call stack until
//                      stack overflow.
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
//                      itself recursively using the post-
//                      decrement operator. Since post-decrement
//                      passes the original value to the recursive
//                      call, the value does not decrease in the
//                      next function call, causing infinite
//                      recursion for non-zero input.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/11/2026
//
//  Input             : Integer value entered by the user.
//
//  Output            : Repeatedly displays the same value with
//                      the message "Jay Ganesh..." until
//                      stack overflow or abnormal termination.
//
//  Time Complexity   : Unbounded - Infinite recursive calls.
//
//  Space Complexity  : O(n) - Recursive call stack.
//
//////////////////////////////////////////////////////////////////

void Display(int iNo)
{       
    if(iNo != 0)
    {
        printf("Jay Ganesh...%d\n", iNo);
        Display(iNo--);       
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
//  Output            : Starts recursive function calls and
//                      repeatedly displays the same value
//                      for non-zero input.
//
//  Time Complexity   : Unbounded - Depends on infinite recursion.
//
//  Space Complexity  : O(n) - Recursive call stack.
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
//  Enter frequency : 3
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output:
//
//  Jay Ganesh...3
//  Jay Ganesh...3
//  Jay Ganesh...3
//  Jay Ganesh...3
//  ...
//  (Continues until stack overflow or abnormal termination.)
//
//////////////////////////////////////////////////////////////////