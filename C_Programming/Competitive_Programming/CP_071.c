//////////////////////////////////////////////////////////////////
//
//  File Name    : Check_Presence_Of_Given_Number
//
//  Description  : This program accepts an array and a number
//                 from the user and checks whether the given
//                 number is present in the array or not.
//
//  Example:
//      Input  : 85   66    3   66   93   88
//      Number : 66
//      Output : Number is Present.
//
//      Input  : 85   11    3   15   11   111
//      Number : 12
//      Output : Number is Not Present.
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

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

    bRet = Check(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("Number is Present.");
    }
    else
    {
        printf("Number is Not Present.");
    }

    free(p);

    return 0;
}