/*
==============================================================================
 File Name   : PP_098.c

 Program     : Update Array Elements by Incrementing Each Element

 Description : Initializes an integer array, displays its elements before
               the function call, increments each array element using a
               user-defined function, and displays the updated elements.

 Author      : Shubham Gadhe

 Time Complexity  : O(n)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h>

/*
==============================================================================
 Function    : Update

 Description : Increments each element of the specified integer array by 1.

 Parameters  : Arr   - Pointer to the integer array.
               iSize - Number of elements in the array.

 Returns     : None

 Complexity  : Time  : O(n)
               Space : O(1)

 Note        : n represents the number of elements in the array.
==============================================================================
*/

void Update(int Arr[], int iSize)
{
    int iCnt = 0;

    // Increment each array element by 1.
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Arr[iCnt]++;        // data update karel
    }
}

int main()
{
    int Brr[] = {10,20,30,40,50};
    int iCnt = 0;

    // Display array elements before the function call.
    printf("Array elements before function call : \n");
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n", Brr[iCnt]);
    }

    // Update the array elements.
    Update(Brr,5);

    // Display array elements after the function call.
    printf("Array elements after function call : \n");
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n", Brr[iCnt]);
    }
    
    return 0;
}

/*
==============================================================================
 Sample Output
------------------------------------------------------------------------------
Array elements before function call :
10
20
30
40
50

Array elements after function call :
11
21
31
41
51
==============================================================================
*/