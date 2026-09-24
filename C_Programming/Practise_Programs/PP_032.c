//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_037
//
//  Description       : This program accepts a frequency from the
//                      user and displays numbers from the given
//                      frequency down to 0.
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
//  Description       : It is used to display numbers from the
//                      given number down to 0. It also checks
//                      whether the given input is negative.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 08/07/2026
//
//////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        printf("Invalid input");
        return;
    }

    for(iCnt = iNo; iCnt >= 0; iCnt--)
    {
        printf("%d", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      Enter the frequency : 5
//
//  Sample Output :
//      543210
//
//////////////////////////////////////////////////////////////////
