/*
==============================================================================
 File Name   : PP_096.c

 Program     : Find the Maximum Element in an Array

 Description : Accepts array elements from the user, finds the maximum
               element in the array using a user-defined function, and
               displays the result.

 Author      : Shubham Gadhe

 Time Complexity  : O(n)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h>
#include<stdlib.h>

/*
==============================================================================
 Function    : Maximum

 Description : Finds and returns the largest element present in the
               specified integer array.

 Parameters  : Arr   - Pointer to the integer array.
               iSize - Number of elements in the array.

 Returns     : Maximum element in the array.

 Complexity  : Time  : O(n)
               Space : O(1)

 Note        : n represents the number of elements in the array.
==============================================================================
*/

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = 0;

    iMax = Arr[0];

    // Find the maximum element.
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       if(Arr[iCnt] > iMax)     
       {
            iMax = Arr[iCnt];       
       }
    }

    return iMax;
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

    // Accept array elements from the user.
    printf("Enter the elements : \n");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    // Find the maximum element.
    iRet = Maximum(Brr, iLength);
    
    // Display the result.
    printf("Maximum element is %d", iRet);

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
85
40
50

 Sample Output
------------------------------------------------------------------------------
Maximum element is 85
==============================================================================
*/