/*
==============================================================================
 File Name   : PP_082.c
 
 Program     : Display Elements of a Dynamically Allocated Array

 Description : Accepts the number of elements from the user, dynamically
               allocates memory for an integer array, accepts array elements,
               displays the elements using a user-defined function, and
               finally releases the allocated memory.

 Author      : Shubham Gadhe
==============================================================================
*/

#include<stdio.h>  
#include<stdlib.h>  

/*
==============================================================================
 Function    : Display

 Description : Displays all elements of the specified integer array.

 Parameters  : Arr   - Pointer to the integer array.
               iSize - Number of elements in the array.

 Returns     : None

 Complexity  : Time  : O(n)
               Space : O(1)

 Note        : n represents the number of elements in the array.
==============================================================================
*/

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    
    printf("Elements of the array are : \n");

    // Display all array elements.
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;

    // Step 1 : Accept the number of elements
    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    // Step 2 : Allocate the memory
    Brr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the values from user
    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }
    
    // Step 4 : Use the memory (Logic)
    Display(Brr, iLength);

    // Step 5 : Deallocate the memory 
    free(Brr);

    return 0;  
}

/*
==============================================================================
 Sample Input
------------------------------------------------------------------------------
 Enter number of elements :
 5

 Enter the elements :
 10
 20
 30
 40
 50

 Sample Output
------------------------------------------------------------------------------
 Elements of the array are :
 10
 20
 30
 40
 50
==============================================================================
*/
