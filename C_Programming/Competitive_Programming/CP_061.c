//////////////////////////////////////////////////////////////////
//
//  File Name    : Difference_Between_Odd_And_Even_Index_Sum
//
//  Description  : This program accepts an array from the user
//                 and returns the difference between the sum
//                 of elements at odd index and even index.
//
//  Example:
//      Input  : 85  66  3  80  93  88
//      Output : 53 (234 - 181)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iEvenSum = 0, iOddSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    return iOddSum - iEvenSum;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Result is : %d", iRet);

    free(p);

    return 0;
}