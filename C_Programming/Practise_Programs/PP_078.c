/*
==============================================================================
 File Name   : PP_078.c

 Program     : Accept and Display Variable Length Array Elements

 Description : Demonstrates the use of a Variable Length Array (VLA). The
               program accepts array elements from the user, stores them in
               the array, and displays all the entered elements by passing
               the array and its size to a function.

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
    int iCnt = 0;
    
    // Declare a Variable Length Array (VLA)
    int Brr[iLength]; 
    
    // Accept array elements from the user
    printf("Enter the elements : \n");    

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    
    // Pass the array and its size to the function
    Display(Brr, iLength);   
    
    return 0;  
}

/*
==============================================================================
 Sample Input
------------------------------------------------------------------------------
10
20
30
40

 Sample Output
------------------------------------------------------------------------------
10
20
30
40
==============================================================================
*/