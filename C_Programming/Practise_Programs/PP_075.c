/*
==============================================================================
 File Name   : PP_075.c

 Program     : Display Array Elements Using Array Size

 Description : Demonstrates passing both the array and its size to a function.
               The function traverses the array using the provided size and
               displays all its elements.

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
                 size provided by the caller.

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
   int Brr[4] = {10,20,30,40};  

   // Pass the array and its size to the function
   Display(Brr, 4);    

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
==============================================================================
*/