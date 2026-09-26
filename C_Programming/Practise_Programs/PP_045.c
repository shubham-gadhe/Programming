 //////////////////////////////////////////////////////////////////
//
//  File Name         : PP_045
//
//  Description       : This program accepts a number from the user
//                      and displays numbers from the negative of
//                      the given number up to the given number.
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
//  Description       : It is used to display numbers starting from
//                      the negative of the given number up to the
//                      given number using a for loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/07/2026
//
//////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
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
//      -5    -4    -3    -2    -1    0    1    2    3    4    5
//
//////////////////////////////////////////////////////////////////
