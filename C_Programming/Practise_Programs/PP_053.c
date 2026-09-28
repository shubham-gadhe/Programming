//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_053
//
//  Description       : This program accepts a number from the user
//                      and displays each digit starting from the
//                      least significant digit using a function.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/07/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DisplayDigits()
//
//  Description       : It is used to extract and display each digit
//                      of the given number starting from the least
//                      significant digit.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/07/2026
//
//////////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    DisplayDigits(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      751
//
//  Sample Output :
//      1
//      5
//      7
//
//////////////////////////////////////////////////////////////////
