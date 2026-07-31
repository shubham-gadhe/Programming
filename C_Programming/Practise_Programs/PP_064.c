/*
==============================================================================
 File Name   : PP_064.c

 Program     : Demonstrate Call by Address

 Description : Demonstrates the concept of Call by Address. The function
               receives the address of a variable, allowing it to modify the
               original value stored in memory.

 Author      : Shubham Gadhe

 Time Complexity  : O(1)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h>

/*
==============================================================================
 Function Name : CallByAddress

 Description   : Increments the value stored at the given memory address.
                 Since the address of the variable is passed, the original
                 value gets modified.

 Input         : Address of an integer
 Output        : None
==============================================================================
*/

void CallByAddress(int *iPtr)
{
    (*iPtr)++;
}

/*
==============================================================================
 Entry Point Function
==============================================================================
*/

int main()
{
    int iValue = 11;

    // Call the function by passing the address of iValue
    CallByAddress(&iValue);

    // Display the value after the function call
    printf("Value after function call : %d\n", iValue);

    return 0;   
}

/*
==============================================================================
 Sample Output
------------------------------------------------------------------------------
Value after function call : 12
==============================================================================
*/