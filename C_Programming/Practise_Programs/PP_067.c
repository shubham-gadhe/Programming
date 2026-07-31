/*
==============================================================================
 File Name   : PP_067.c

 Program     : Traverse Array Elements Using Pointer Arithmetic

 Description : Demonstrates pointer arithmetic by passing the base address of
               an array to a function. The pointer is incremented to access
               consecutive elements of the array.

 Author      : Shubham Gadhe

 Time Complexity  : O(1)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h>

/*
==============================================================================
 Function Name : Display

 Description   : Displays the first three elements of the array using pointer
                 dereferencing and pointer arithmetic.

 Input         : Address of an integer
 Output        : None
==============================================================================
*/

void Display(int *iPtr)
{
    // Display the first element
    printf("%d\n", *iPtr);     
    
    // Move the pointer to the next element
    iPtr++;

    // Display the second element
    printf("%d\n", *iPtr); 

    // Move the pointer to the next element
    iPtr++;

    // Display the third element
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
20
30
==============================================================================
*/