//////////////////////////////////////////////////////////////////
//
//  File Name    : Count_Even_Numbers_In_Array
//
//  Description  : This program accepts an array from the user
//                 and counts how many even numbers are present
//                 in the array.
//
//  Example:
//      Input  : 85  66  3  80  93  88
//      Output : 3
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int iCountEven(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
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

    iRet = iCountEven(p, iSize);

    printf("Result is : %d", iRet);

    free(p);

    return 0;
}