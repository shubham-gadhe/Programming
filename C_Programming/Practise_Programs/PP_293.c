//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_293
//
//  Description       : Displays the digits of a given integer
//                      in reverse order using recursion.
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
//  Function Name     : Display
//
//  Description       : Extracts digits from the given integer
//                      using modulo and division operations.
//                      Displays each digit after the recursive
//                      call, resulting in the original order.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/11/2026
//
//  Input             : Integer number.
//
//  Output            : Displays the digits of the number,
//                      one digit per line, in original order.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        Display(iNo);
        printf("%d\n", iDigit);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Accepts an integer from the user and
//                      calls Display() to print its digits
//                      using recursion.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/11/2026
//
//  Input             : An integer number.
//
//  Output            : Displays the digits of the entered number.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

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
//  1
//  2
//  3
//  4
//  5
//
//////////////////////////////////////////////////////////////////