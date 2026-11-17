//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_294
//
//  Description       : Calculates the summation of all digits
//                      of a given integer using recursion.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/11/2026
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//  Note              : n represents the number of digits in the
//                      given integer. Recursive calls require
//                      O(n) stack space.
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Summation
//
//  Description       : Extracts each digit from the given integer
//                      and adds it to a static variable using
//                      recursive calls. Returns the sum of all
//                      digits after processing the number.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/11/2026
//
//  Input             : Integer number.
//
//  Output            : Returns the summation of all digits.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int Summation(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        Summation(iNo);
    }

    return iSum;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Accepts an integer from the user, calls
//                      Summation() to calculate the sum of its
//                      digits, and displays the result.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/11/2026
//
//  Input             : An integer number.
//
//  Output            : Displays the summation of all digits.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = Summation(iValue);
    printf("Summation is : %d\n", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input
//
//  Enter Number : 12345
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  Enter Number : 12345
//  Summation is : 15
//
//////////////////////////////////////////////////////////////////