/*
==============================================================================
 Program     : Calculate Summation of Array Elements

 Description : Accepts the number of elements from the user, dynamically
               allocates memory for an integer array, accepts array elements,
               calculates the summation of all elements using a user-defined
               function, and finally releases the allocated memory.

 Author      : Shubham Gadhe
==============================================================================
*/

#include<stdio.h>  
#include<stdlib.h>

/*
==============================================================================
 Function    : Summation

 Description : Calculates and returns the summation of all elements in the
               specified integer array.

 Parameters  : Arr   - Pointer to the integer array.
               iSize - Number of elements in the array.

 Returns     : Summation of all array elements.

 Complexity  : Time  : O(n)
               Space : O(1)

 Note        : n represents the number of elements in the array.
==============================================================================
*/

int Summation(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    // Calculate the summation of all array elements.
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

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
    iRet = Summation(Brr, iLength);

    printf("Addition is : %d\n", iRet);

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
 Addition is : 150
==============================================================================
*/