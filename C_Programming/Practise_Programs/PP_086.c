//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_086
//
//  Description       : This program dynamically allocates memory
//                      for an integer array, accepts elements from
//                      the user, calculates the sum of all even
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
//  Function Name     : SumEven()
//
//  Description       : It is used to calculate and return the sum
//                      of all even elements present in the array.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 04/08/2026
//
//////////////////////////////////////////////////////////////////

int SumEven(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSum = iSum + Arr[iCnt];
        }
    }

    return iSum;
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

    iRet = SumEven(Brr, iLength);

    printf("Sum of even elements are : %d\n", iRet);

    free(Brr);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      5
//      10
//      15
//      20
//      25
//      30
//
//  Sample Output :
//      Sum of even elements are : 60
//
//////////////////////////////////////////////////////////////////
