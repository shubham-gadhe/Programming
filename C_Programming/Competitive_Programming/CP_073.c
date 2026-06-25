//////////////////////////////////////////////////////////////////
//
//  File Name    : Last_Occurrence_Of_Given_Number
//
//  Description  : This program accepts an array and a number
//                 from the user and returns the index of the
//                 last occurrence of the given number.
//
//  Example:
//      Input  : 85   66   3   66  93  88 
//      Number : 66
//      Output : 3
//
//      Input  : 85   66   3   66  93  88 
//      Number : 93
//      Output : 4
//
//      Input  : 85   11   3   15  11  111 
//      Number : 12
//      Output : -1
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = iLength = 1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;            
        }
    }
    return -1;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
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

    printf("Enter %d elements\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number.");
    }
    else
    {
        printf("Last occurrence of number is : %d", iRet);
    }

    free(p);

    return 0;
}