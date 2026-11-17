
//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_292
//
//  Description       : Accepts an integer number from the user
//                      and displays each digit of the given
//                      number separately using recursion and
//                      a local variable.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/11/2026
//
//  Time Complexity   : O(n) - Where n is the number of digits.
//
//  Space Complexity  : O(n) - Due to recursive function calls.
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Accepts an integer parameter and extracts
//                      each digit using the modulus operator.
//                      Displays the extracted digit and removes
//                      the last digit using integer division.
//                      Calls itself recursively until the
//                      number becomes zero. Uses a local
//                      variable to store the extracted digit.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/11/2026
//
//  Input             : Integer number whose digits are to
//                      be displayed.
//
//  Output            : Displays each digit of the given number
//                      separately in reverse order.
//
//  Time Complexity   : O(n) - Where n is the number of digits.
//
//  Space Complexity  : O(n) - Due to recursive function calls.
//
//////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
        Display(iNo);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Accepts an integer number from the user,
//                      calls the Display function and displays
//                      each digit of the given number separately
//                      using recursion.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/11/2026
//
//  Input             : Integer number entered by the user.
//
//  Output            : Displays each digit separately in
//                      reverse order.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n) - Due to recursive function calls.
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
//  Sample Input:
//
//  Enter Number : 12345
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output:
//
//  5
//  4
//  3
//  2
//  1
//
//////////////////////////////////////////////////////////////////
