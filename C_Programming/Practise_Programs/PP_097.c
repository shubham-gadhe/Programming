//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_097
//
//  Description       : This program dynamically allocates memory
//                      for an integer array, accepts elements from
//                      the user, and finds the minimum element
//                      present in the array.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Minimum()
//
//  Description       : It is used to find and return the minimum
//                      element present in the array.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/08/2026
//
//////////////////////////////////////////////////////////////////

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = 0;

    iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter the number of elements : \n");
    scanf("%d", &iLength);

    Brr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    iRet = Minimum(Brr, iLength);

    printf("Minimum element is %d", iRet);

    free(Brr);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      5
//      30
//      10
//      25
//      5
//      20
//
//  Sample Output :
//      Minimum element is 5
//
//////////////////////////////////////////////////////////////////
