/*
==============================================================================
 File Name   : PP_065.c

 Program     : Demonstrate Array Base Address

 Description : Demonstrates that the name of an array represents the base
               address of its first element. The array name is passed to a
               function, where it is received as a pointer.

 Author      : Shubham Gadhe

 Time Complexity  : O(1)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h>

/*
==============================================================================
 Function Name : Display

 Description   : Displays the address received through the pointer parameter.

 Input         : Address of an integer
 Output        : None
==============================================================================
*/

void Display(int *iPtr)
{
   printf("Value of iPtr : %d\n", iPtr);
}

/*
==============================================================================
 Entry Point Function
==============================================================================
*/

int main()
{
   int Arr[5] = {10,20,30,40,50};

   // Display the base address of the array
   printf("Base address of Arr : %d\n", Arr);

   // Pass the base address of the array to the function
   Display(Arr);    

   return 0;  
}

/*
==============================================================================
 Sample Output
------------------------------------------------------------------------------
Base address of Arr : 6422296
Value of iPtr : 6422296

Note:
The actual memory address may vary from one system or execution to another.
==============================================================================
*/