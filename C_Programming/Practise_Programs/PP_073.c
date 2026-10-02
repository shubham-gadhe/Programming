//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_073
//
//  Description       : This program demonstrates passing an array
//                      to a function and displaying all the elements
//                      of the array using a for loop.
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
//                      the array using a for loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/08/2026
//
//////////////////////////////////////////////////////////////////

void Display(int Arr[])
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < 8; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }
}

int main()
{
    int Brr[8] = {10,20,30,40,50,60,70,80};

    Display(Brr);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input
//
//  Sample Output :
//      10
//      20
//      30
//      40
//      50
//      60
//      70
//      80
//
//////////////////////////////////////////////////////////////////
