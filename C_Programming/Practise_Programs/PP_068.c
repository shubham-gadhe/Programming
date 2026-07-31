/*
==============================================================================
 File Name   : PP_068.c

 Program     : Traverse Array Elements Using Array Parameter

 Description : Demonstrates that an array parameter in a function is treated
               as a pointer. Pointer arithmetic is used to access consecutive
               elements of the array.

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
                 dereferencing and pointer arithmetic. Although the parameter
                 is declared as an array, it behaves as a pointer.

 Input         : Integer array
 Output        : None
==============================================================================
*/

void Display(int iPtr[])
{
    // Display the first element
    printf("%d\n", *iPtr);      
    
    // Move to the next array element
    iPtr++;

    // Display the second element
    printf("%d\n", *iPtr); 

    // Move to the next array element
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

   // Pass the array to the function
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