//////////////////////////////////////////////////////////////////
//
//  File Name    : Count_Frequency_Of_Given_Number
//
//  Description  : This program accepts an array and a number
//                 from the user and counts how many times
//                 the given number appears in the array.
//
//  Example:
//      Input  : 85  66  3  66  93  88 
//      Number : 66
//      Output : 2
//
//      Input  : 85  11  3  15  11  111 
//      Number : 6
//      Output : 0
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    printf("Enter the number : ");
    scanf("%d", &iValue);

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

    iRet = Frequency(p, iSize, iValue);

    printf("%d", iRet);

    free(p);

    return 0;
}