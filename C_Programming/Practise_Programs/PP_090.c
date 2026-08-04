/*
==============================================================================
 File Name   : PP_090.c

 Program     : Search Element 11 in an Array

 Description : Accepts array elements from the user, searches for the
               value 11, and displays whether it is present or not.

 Author      : Shubham Gadhe

 Time Complexity  : O(n)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*
==============================================================================
 Function    : LinearSearch

 Description : Searches for the value 11 in the specified integer
               array and returns the search result.

 Parameters  : Arr   - Pointer to the integer array.
               iSize - Number of elements in the array.

 Returns     : true if 11 is present, otherwise false.

 Complexity  : Time  : O(n)
               Space : O(1)

 Note        : n represents the number of elements in the array.
==============================================================================
*/

bool LinearSearch(int Arr[], int iSize)
{
    int iCnt = 0;
    bool bFlag = false;

    // Search for the value 11.
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       if(Arr[iCnt] == 11)
       {
            bFlag = true;
            break;        
       }
    }
    return bFlag;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;
    bool bRet = false;

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

    // Search for the value 11.
    bRet = LinearSearch(Brr, iLength);
    
    // Display the result.
    if(bRet == true)
    {
        printf("Element is present... \n");
    }
    else
    {
        printf("Element is not present...\n");
    }

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
11
30
40

 Sample Output
------------------------------------------------------------------------------
Element is present...
==============================================================================
*/