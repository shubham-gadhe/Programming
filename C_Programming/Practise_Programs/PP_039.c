//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_039
//
//  Description       : This program accepts a number from the user
//                      and displays all odd numbers from 1 up to
//                      the given number.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/07/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display()
//
//  Description       : It is used to display all odd numbers
//                      starting from 1 up to the given number
//                      using a for loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 07/07/2026
//
//////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      Enter number :
//      10
//
//  Sample Output :
//      1    3    5    7    9
//
//////////////////////////////////////////////////////////////////
