/*
==============================================================================
 File Name   : PP_070.c

 Program     : Display Array Elements Using Array Indexing

 Description : Demonstrates how to access and display array elements using
               array indexing. The array is passed to a function and each
               element is accessed using its index.

 Author      : Shubham Gadhe

 Time Complexity  : O(1)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h>

/*
==============================================================================
 Function Name : Display

 Description   : Displays the elements of the array using array indexing.

 Input         : Integer array
 Output        : None
==============================================================================
*/

void Display(int Arr[])
{
    // Display all array elements using array indexing
    printf("%d\n", Arr[0]);      
    printf("%d\n", Arr[1]);
    printf("%d\n", Arr[2]);
    printf("%d\n", Arr[3]);
    printf("%d\n", Arr[4]);
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
40
50
==============================================================================
*/