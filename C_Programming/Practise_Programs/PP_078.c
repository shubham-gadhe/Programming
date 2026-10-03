//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_078
//
//  Description       : This program accepts the size and elements
//                      of an array from the user and displays all
//                      the elements using a function.
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
//  Function Name     : Display()
//
//  Description       : It is used to display all the elements of
//                      the array using the given array size.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/08/2026
//
//////////////////////////////////////////////////////////////////

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }
}

int main()
{
    int iLength = 4;
    int iCnt = 0;

    int Brr[iLength];

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    Display(Brr, iLength);

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
//      10
//      20
//      30
//      40
//
//////////////////////////////////////////////////////////////////
