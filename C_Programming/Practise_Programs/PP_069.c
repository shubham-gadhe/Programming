/*
==============================================================================
 File Name   : PP_069.c

 Program     : Traverse Array Elements Using an Array Parameter

 Description : Demonstrates that an array parameter behaves like a pointer
               inside a function. Pointer arithmetic is used to access
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
                 dereferencing and pointer arithmetic. Although the parameter
                 is declared as an array, it is treated as a pointer inside
                 the function.

 Input         : Integer array
 Output        : None
==============================================================================
*/

void Display(int Arr[])
{
    // Display the first element
    printf("%d\n", *Arr);      
    
    // Move to the next array element
    Arr++;

    // Move to the next array element
    printf("%d\n", *Arr); 

    // Display the third element
    Arr++;

    printf("%d\n", *Arr);
}

/*
==============================================================================
 Entry Point Function
==============================================================================
*/

int main()
{
   int Brr[5] = {10,20,30,40,50};  

   // Pass the array to the function
   Display(Brr);    

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