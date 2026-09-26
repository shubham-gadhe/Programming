//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_042
//
//  Description       : This program accepts a number from the user
//                      and displays negative numbers starting from
//                      the negative of the given number up to -1.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/07/2026
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
//  Description       : It is used to display negative numbers
//                      starting from the negative of the given
//                      number up to -1 using a for loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/07/2026
//
//////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt < 0; iCnt++)
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
//      5
//
//  Sample Output :
//      -5    -4    -3    -2    -1
//
//////////////////////////////////////////////////////////////////
