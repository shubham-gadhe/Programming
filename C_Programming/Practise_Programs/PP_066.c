/*
==============================================================================
 File Name   : PP_066.c

 Program     : Display First Element of an Array Using a Pointer

 Description : Demonstrates that when an array is passed to a function, its
               base address is received as a pointer. Dereferencing the pointer
               accesses the first element of the array.

 Author      : Shubham Gadhe

 Time Complexity  : O(1)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h>

/*
==============================================================================
 Function Name : Display

 Description   : Displays the value stored at the memory location pointed to
                 by the given pointer.

 Input         : Address of an integer
 Output        : None
==============================================================================
*/

void Display(int *iPtr)
{
    printf("%d\n", *iPtr);   
}

/*
==============================================================================
 Entry Point Function
==============================================================================
*/

int main()
{
   int Arr[5] = {10,20,30,40,50};  

   // Pass the base address of the array to the function
   Display(Arr);    

   return 0;  
}

/*
==============================================================================
 Sample Output
------------------------------------------------------------------------------
10
==============================================================================
*/