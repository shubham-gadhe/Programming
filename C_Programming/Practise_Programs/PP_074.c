/*
==============================================================================
 File Name   : PP_074.c

 Program     : Display Array Elements Using a Loop

 Description : Demonstrates passing an array to a function and displaying its
               elements using a for loop. This example illustrates the problem
               of accessing array elements beyond the actual array size.

 Author      : Shubham Gadhe

 Time Complexity  : O(1)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h>

/*
==============================================================================
 Function Name : Display

 Description   : Displays array elements using array indexing. The function
                 attempts to access eight elements irrespective of the actual
                 size of the array.

 Input         : Integer array
 Output        : None
==============================================================================
*/

void Display(int Arr[])
{
    int iCnt = 0;
    
    // Attempt to display eight array elements
    for(iCnt = 0; iCnt < 8; iCnt++)
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
   int Brr[4] = {10,20,30,40};  

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
<Garbage Value>
<Garbage Value>
<Garbage Value>
<Garbage Value>

Note:
The last four values are unpredictable because the function accesses memory
beyond the bounds of the array. This results in undefined behavior.
==============================================================================
*/