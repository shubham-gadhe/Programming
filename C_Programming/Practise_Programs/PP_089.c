//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_089
//
//  Description       : This program dynamically allocates memory
//                      for an integer array, accepts elements from
//                      the user, and searches for the presence of
//                      the number 11 using linear search.
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
#include<stdbool.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : LinearSearch()
//
//  Description       : It is used to search for the number 11
//                      in the array using linear search and
//                      returns true if the element is present,
//                      otherwise returns false.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 04/08/2026
//
//////////////////////////////////////////////////////////////////

bool LinearSearch(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;
    bool bRet = false;

    printf("Enter the number of elements : \n");
    scanf("%d", &iLength);

    Brr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    bRet = LinearSearch(Brr, iLength);

    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }

    free(Brr);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      5
//      10
//      20
//      11
//      30
//      40
//
//  Sample Output :
//      Element is present
//
//////////////////////////////////////////////////////////////////
