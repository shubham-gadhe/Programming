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

    // Accept the number of elements.
    printf("Enter the number of elements : \n");
    scanf("%d", &iLength);

    // Dynamically allocate memory for the array.
    Brr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements : \n");
    
    // Accept array elements from the user.
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    // Calculate the summation of the array elements.
    iRet = Summation(Brr, iLength);

    printf("Summation is :  %d", iRet);

    // Release the dynamically allocated memory.
    free(Brr);    

    return 0;
}

/*
==============================================================================
 Sample Input
------------------------------------------------------------------------------
 Enter the number of elements :
 5

 Enter the elements :
 10
 20
 30
 40
 50

 Sample Output
------------------------------------------------------------------------------
 Summation is : 150
==============================================================================
*/