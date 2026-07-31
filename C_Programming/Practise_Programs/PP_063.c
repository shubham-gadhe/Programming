/*
==============================================================================
 File Name   : PP_063.c

 Program     : Demonstrate Call by Value

 Description : Demonstrates the concept of Call by Value. The function receives
               a copy of the original variable, so any modification made inside
               the function does not affect the original variable.

 Author      : Shubham Gadhe

 Time Complexity  : O(1)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h> 

/*
==============================================================================
 Function Name : CallByValue

 Description   : Increments the received value by one. Since the argument is
                 passed by value, the modification is made only on the local
                 copy of the variable.

 Input         : Integer
 Output        : None
==============================================================================
*/

void CallByValue(int iNo)
{
    iNo++;
}

/*
==============================================================================
 Entry Point Function
==============================================================================
*/

int main()
{
    int iValue = 11;

    // Call the function by passing the value of iValue
    CallByValue(iValue);

    // Display the value after the function call
    printf("Value after function call : %d\n", iValue);

    return 0;   
}

/*
==============================================================================
 Sample Output
------------------------------------------------------------------------------
Value after function call : 11
==============================================================================
*/