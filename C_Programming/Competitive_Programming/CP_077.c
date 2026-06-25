//////////////////////////////////////////////////////////////////
//
//  File Name    : Find_Smallest_Element
//
//  Description  : This program accepts an array from the user
//                 and returns the smallest element present
//                 in the array.
//
//  Example:
//      Input  : 85  66  3  66  93  88
//      Output : 3
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSmall = Arr[0];

    for(iCnt = 1; iCnt < iLength; iCnt++)
    {        
        if(Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }
    }
    return iSmall;
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

    printf("Enter %d elements \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Minimum(p, iSize);

    printf("Smallest Number is : %d", iRet);

    free(p);

    return 0;
}