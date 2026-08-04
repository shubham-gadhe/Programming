/*
==============================================================================
 File Name   : PP_086.c

 Program     : Calculate Sum of Even Elements in an Array

 Description : Accepts array elements from the user, calculates the sum of
               all even elements, and displays the result.

 Author      : Shubham Gadhe

 Time Complexity  : O(n)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h>
#include<stdlib.h>

/*
==============================================================================
 Function    : SumEven

 Description : Calculates and returns the summation of all even elements
               present in the specified integer array.

 Parameters  : Arr   - Pointer to the integer array.
               iSize - Number of elements in the array.

 Returns     : Summation of all even elements in the array.

 Complexity  : Time  : O(n)
               Space : O(1)

 Note        : n represents the number of elements in the array.
==============================================================================
*/

int SumEven(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    // Calculate the summation of all even elements.
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSum = iSum + Arr[iCnt];
        }
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

    // Accept array elements from the user.
    printf("Enter the elements : \n");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    // Calculate the summation of even elements.
    iRet = SumEven(Brr, iLength);

    printf("Sum of even elements are :  %d\n", iRet);

    // Release the dynamically allocated memory.
    free(Brr);    

    return 0;
}

/*
==============================================================================
 Sample Input
------------------------------------------------------------------------------
 Enter the number of elements :
 6

 Enter the elements :
 10
 15
 20
 13
 8
 9

 Sample Output
------------------------------------------------------------------------------
 Sum of even elements are : 38
==============================================================================
*/