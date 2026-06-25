//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Numbers_Divisible_By_2_And_5
//
//  Description  : This program accepts an array from the user
//                 and displays all elements which are divisible
//                 by both 2 and 5.
//
//  Example:
//      Input  : 85  66  3  80  93  88
//      Output : 80
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0 && Arr[iCnt] % 5 == 0 )
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
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

    Display(p, iSize);
    
    free(p);

    return 0;
}