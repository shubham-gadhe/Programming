//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_081
//
//  Description       : This program dynamically allocates memory
//                      for an integer array using malloc(), accepts
//                      elements from the user, and releases the
//                      allocated memory using free().
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 04/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    free(Brr);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      4
//      10
//      20
//      30
//      40
//
//  Sample Output :
//      No output
//
//////////////////////////////////////////////////////////////////
