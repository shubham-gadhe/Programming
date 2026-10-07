//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_094
//
//  Description       : This program dynamically allocates memory
//                      for an integer array, accepts elements from
//                      the user, and searches for a specified
//                      element using linear search.
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
//  Description       : It is used to search for a specified
//                      element in the array using linear search.
//                      It returns true if the element is present,
//                      otherwise returns false.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 04/08/2026
//
//////////////////////////////////////////////////////////////////

bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iSize)
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

    printf("Enter the number of elements : \n");
    scanf("%d", &iLength);

    Brr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    printf("Enter the element that you want Search : \n");
    scanf("%d", &iValue);

    bRet = LinearSearch(Brr, iLength, iValue);

    if(bRet == true)
    {
        printf("Element is present...\n");
    }
    else
    {
        printf("Element is not present...\n");
    }

    free(Brr);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      6
//      10
//      20
//      30
//      40
//      50
//      60
//      30
//
//  Sample Output :
//      Element is present...
//
//////////////////////////////////////////////////////////////////
