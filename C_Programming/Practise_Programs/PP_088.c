/*
==============================================================================
 File Name   : PP_088.c

 Program     : Count Frequency of 11 in an Array

 Description : Accepts array elements from the user, counts the frequency
               of the value 11, and displays the result.

 Author      : Shubham Gadhe

 Time Complexity  : O(n)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h>
#include<stdlib.h>

/*
==============================================================================
 Function    : CountFrequency

 Description : Counts and returns the frequency of the value 11
               present in the specified integer array.

 Parameters  : Arr   - Pointer to the integer array.
               iSize - Number of elements in the array.

 Returns     : Frequency of the value 11.

 Complexity  : Time  : O(n)
               Space : O(1)

 Note        : n represents the number of elements in the array.
==============================================================================
*/

int CountFrequency(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    // Count the frequency of 11.
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
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

    // Count the frequency of 11.
    iRet = CountFrequency(Brr, iLength);

    printf("Frequency :  %d\n", iRet);

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
11
10
11
20
11
30

 Sample Output
------------------------------------------------------------------------------
Frequency : 3
==============================================================================
*/