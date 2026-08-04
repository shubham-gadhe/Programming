/*
==============================================================================
 File Name   : PP_087.c

 Program     : Count Odd Elements in an Array

 Description : Accepts array elements from the user, counts the odd
               elements in the array, and displays the total count.

 Author      : Shubham Gadhe

 Time Complexity  : O(n)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h>
#include<stdlib.h>

/*
==============================================================================
 Function    : CountOdd

 Description : Counts and returns the number of odd elements present
               in the specified integer array.

 Parameters  : Arr   - Pointer to the integer array.
               iSize - Number of elements in the array.

 Returns     : Number of odd elements.

 Complexity  : Time  : O(n)
               Space : O(1)

 Note        : n represents the number of elements in the array.
==============================================================================
*/

int CountOdd(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    // Count the odd elements.
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iCount++;
        }
    }

    return iCount;
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

    // Count the odd elements.
    iRet = CountOdd(Brr, iLength);

    printf("Odd elements are :  %d\n", iRet);

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
Odd elements are : 3
==============================================================================
*/