//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_079
//
//  Description       : This program accepts elements of an array
//                      from the user and calculates the summation
//                      of all array elements using a function.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Summation()
//
//  Description       : It is used to calculate and return the
//                      summation of all elements of the array.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/08/2026
//
//////////////////////////////////////////////////////////////////

int Summation(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main()
{
    int iLength = 4;
    int iCnt = 0;
    int iRet = 0;

    int Brr[iLength];

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    iRet = Summation(Brr, iLength);

    printf("Addition of all elements : %d\n", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      10
//      20
//      30
//      40
//
//  Sample Output :
//      Addition of all elements : 100
//
//////////////////////////////////////////////////////////////////
