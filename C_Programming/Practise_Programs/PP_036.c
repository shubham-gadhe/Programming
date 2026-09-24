//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_036
//
//  Description       : This program accepts a number from the user
//                      and displays numbers starting from 1 up to
//                      one less than the given number.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/07/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display()
//
//  Description       : It is used to display numbers starting from
//                      1 up to one less than the given number using
//                      a for loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/07/2026
//
//////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt = iCnt + 1)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}

int main(void)
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      Enter number : 5
//
//  Sample Output :
//      1    2    3    4
//
//////////////////////////////////////////////////////////////////
