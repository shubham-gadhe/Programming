//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_085
//
//  Description       : This program dynamically allocates memory
//                      for an integer array, accepts elements from
//                      the user, counts the number of even elements,
//                      and releases the allocated memory.
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
//  Function Name     : CountEven()
//
//  Description       : It is used to count and return the number
//                      of even elements present in the array.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 04/08/2026
//
//////////////////////////////////////////////////////////////////

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
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

    iRet = CountEven(Brr, iLength);

    printf("Even elements are : %d\n", iRet);

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
//      Even elements are : 3
//
//////////////////////////////////////////////////////////////////
