/*
==============================================================================
 Program     : Dynamically Allocate Memory for an Integer Array

 Description : Accepts the number of elements from the user, dynamically
               allocates memory for an integer array, accepts array elements,
               and finally deallocates the allocated memory.

 Author      : Shubham Gadhe
==============================================================================
*/

#include<stdio.h>  

/*
    Note:
    This program uses malloc() and free(), which are declared in <stdlib.h>.
    Compilation will fail if <stdlib.h> is not included.
*/

// Error due to stdlib.h
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
    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }
    
    // Step 4 : Use the memory (Logic)

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

 10
 20
 30
 40
 50

 Sample Output
------------------------------------------------------------------------------
 Memory allocated successfully and array elements accepted.

 Note:
 - This program intentionally omits <stdlib.h>, which causes a compilation
   error because malloc() and free() are declared in that header.
 - The loop starts from index 1, so the first element (Brr[0]) is skipped.
==============================================================================
*/