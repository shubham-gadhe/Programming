//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_083
//
//  Description       : This program dynamically allocates memory
//                      for an integer array, accepts elements from
//                      the user, calculates the summation of all
//                      elements, and releases the allocated memory.
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

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Summation()
//
//  Description       : It is used to calculate and return the
//                      summation of all elements of the array.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 04/08/2026
//
//////////////////////////////////////////////////////////////////

int Summation(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    iRet = Summation(Brr, iLength);

    printf("Addition is : %d\n", iRet);

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
//      Addition is : 100
//
//////////////////////////////////////////////////////////////////
