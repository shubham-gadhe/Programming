/*
==============================================================================
 File Name   : PP_076.c

 Program     : Display Array Elements Using Variable Array Size

 Description : Demonstrates passing an array and its size to a function.
               This example also highlights the limitation of initializing a
               Variable Length Array (VLA) using an initializer list.

 Author      : Shubham Gadhe

 Time Complexity  : O(n)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h>

/*
==============================================================================
 Function Name : Display

 Description   : Traverses the array and displays all its elements using the
                 specified array size.

 Input         : Integer array, Size of the array
 Output        : None
==============================================================================
*/

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    
    // Traverse the array and display each element
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }
}

/*
==============================================================================
 Entry Point Function
==============================================================================
*/

int main()
{
    int iLength = 4;
    
    // Declare an array of variable length
    // This statement generates an error because a Variable Length Array (VLA)
    // cannot be initialized using an initializer list.
    int Brr[iLength] = {10,20,30,40};   // Error
    
    // Pass the array and its size to the function
    Display(Brr, iLength);   
    
    return 0;  
}

/*
==============================================================================
 Compiler Error
------------------------------------------------------------------------------
Error:
A Variable Length Array (VLA) cannot be initialized using an initializer list.

Example:
int Brr[iLength] = {10,20,30,40};   // Error
==============================================================================
*/