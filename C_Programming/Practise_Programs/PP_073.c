/*
==============================================================================
 File Name   : PP_073.c

 Program     : Display Array Elements Using a Loop

 Description : Demonstrates passing an array to a function and displaying all
               its elements using a for loop.

 Author      : Shubham Gadhe

 Time Complexity  : O(n)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h>

/*
==============================================================================
 Function Name : Display

 Description   : Traverses the array and displays all its elements using
                 array indexing.

 Input         : Integer array
 Output        : None
==============================================================================
*/

void Display(int Arr[])
{
    int iCnt = 0;
    
    // Traverse the array and display each element
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
60
70
80
==============================================================================
*/