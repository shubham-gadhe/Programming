//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_096
//
//  Description       : This program dynamically allocates memory
//                      for an integer array, accepts elements from
//                      the user, and finds the maximum element
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
//  Function Name     : Maximum()
//
//  Description       : It is used to find and return the maximum
//                      element present in the array.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/08/2026
//
//////////////////////////////////////////////////////////////////

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = 0;

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
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

    iRet = Maximum(Brr, iLength);

    printf("Maximum element is %d", iRet);

    free(Brr);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      5
//      10
//      25
//      15
//      40
//      20
//
//  Sample Output :
//      Maximum element is 40
//
//////////////////////////////////////////////////////////////////
