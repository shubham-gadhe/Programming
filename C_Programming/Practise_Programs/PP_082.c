 //////////////////////////////////////////////////////////////////
//
//  File Name         : PP_082
//
//  Description       : This program dynamically allocates memory
//                      for an integer array, accepts elements from
//                      the user, displays the elements using a
//                      function, and releases the allocated memory.
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
//  Function Name     : Display()
//
//  Description       : It is used to display all the elements of
//                      the dynamically allocated array.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 04/08/2026
//
//////////////////////////////////////////////////////////////////

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Elements of the array are : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    Display(Brr, iLength);

    free(Brr);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      4
//      10
//      20
//      30
//      40
//
//  Sample Output :
//      Elements of the array are :
//      10
//      20
//      30
//      40
//
//////////////////////////////////////////////////////////////////
