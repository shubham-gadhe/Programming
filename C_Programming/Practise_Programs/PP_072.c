/*
==============================================================================
 File Name   : PP_072.c

 Program     : Display Array Elements Using a Loop

 Description : Demonstrates passing an array to a function and displaying its
               elements using a for loop. This example also highlights the
               limitation of using a fixed loop count inside the function.

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
                 traverses only the first five elements because the loop count
                 is fixed.

 Input         : Integer array
 Output        : None
==============================================================================
*/

void Display(int Arr[])
{
    int iCnt = 0;
    
    // Display the first five elements of the array
    for(iCnt = 0; iCnt < 5; iCnt++)         // Issue
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
   int Brr[8] = {10,20,30,40,50,60,70,80};  

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

Note:
Only the first five elements are displayed because the function uses a fixed
loop count of 5. The remaining elements (60, 70, and 80) are not accessed.
==============================================================================
*/