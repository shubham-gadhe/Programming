/*
==============================================================================
 File Name   : PP_093.c

 Program     : Search an Element in an Array

 Description : Accepts array elements and a value from the user, searches
               the value in the array, and displays the search result.

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

 Description : Searches the specified element in the integer array
               and returns the search result.

 Parameters  : Arr   - Pointer to the integer array.
               iSize - Number of elements in the array.
               iNo   - Element to be searched.

 Returns     : true if the element is present, otherwise false.

 Complexity  : Time  : O(n)
               Space : O(1)

 Note        : n represents the number of elements in the array.
==============================================================================
*/

bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;

    // Search the specified element.
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       if(Arr[iCnt] == iNo)
       {
            iCount++; 
            break;       
       }
    }

    // Return the search result.
    if(iCount == 0)
    {
        return false;
    }
    else
    {
        return true;
    }

}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iValue = 0;
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

    // Accept the element to be searched.
    printf("Enter the element that you want Search : \n");
    scanf("%d", &iValue);

    // Search the specified element.
    bRet = LinearSearch(Brr, iLength, iValue);
    
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
30
40
50

Enter the element that you want Search :
30

 Sample Output
------------------------------------------------------------------------------
Element is present...
==============================================================================
*/