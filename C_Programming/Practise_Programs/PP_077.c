/*
==============================================================================
 File Name   : PP_077.c

 Program     : Display Variable Length Array Elements

 Description : Demonstrates the use of a Variable Length Array (VLA). The
               array elements are assigned individually and then displayed by
               passing the array and its size to a function.

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
                 specified array size.

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
    int iLength = 4;
    
    // Declare a Variable Length Array (VLA)
    int Brr[iLength];   

    // Assign values to the array elements
    Brr[0] = 10;
    Brr[1] = 20;
    Brr[2] = 30;
    Brr[3] = 40;
    
    // Pass the array and its size to the function
    Display(Brr, iLength);   
    
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