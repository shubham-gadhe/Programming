//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_098
//
//  Description       : This program demonstrates how an array can
//                      be passed to a function and updated. The
//                      function increments each element of the
//                      array by 1.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Update()
//
//  Description       : It is used to increment each element of
//                      the array by 1.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 05/08/2026
//
//////////////////////////////////////////////////////////////////

void Update(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Arr[iCnt]++;
    }
}

int main()
{
    int Brr[] = {10,20,30,40,50};
    int iCnt = 0;

    printf("Array elements before function call : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n", Brr[iCnt]);
    }

    Update(Brr, 5);

    printf("Array elements after function call : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n", Brr[iCnt]);
    }

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input required.
//
//  Sample Output :
//      Array elements before function call :
//      10
//      20
//      30
//      40
//      50
//      Array elements after function call :
//      11
//      21
//      31
//      41
//      51
//
//////////////////////////////////////////////////////////////////
