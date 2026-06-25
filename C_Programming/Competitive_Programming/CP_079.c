//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Three_Digit_Numbers
//
//  Description  : This program accepts an array from the user
//                 and displays all elements that are
//                 three-digit numbers.
//
//  Example:
//      Input  : 8225  665  3  76  953  858
//      Output : 665  953  858
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0, iNo = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        if((iNo >= 100) && (iNo <= 999))
        {
            printf("%d\n", Arr[iCnt]);
        }             
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    Digits(p, iSize);

    free(p);

    return 0;
}