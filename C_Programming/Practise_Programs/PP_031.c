//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_036
//
//  Description       : This program accepts a frequency from the
//                      user and displays numbers from 0 to the
//                      given frequency.
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
//  Description       : It is used to display numbers from 0 to
//                      the given number. It also checks whether
//                      the given input is negative.
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

    for(iCnt = 0; iCnt <= iNo; iCnt++)
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
//      012345
//
//////////////////////////////////////////////////////////////////
