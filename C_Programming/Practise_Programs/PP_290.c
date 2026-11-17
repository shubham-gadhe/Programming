
//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_290
//
//  Description       : Accepts an integer number from the user
//                      and displays each digit of the given
//                      number separately using a while loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/11/2026
//
//  Time Complexity   : O(n) - Where n is the number of digits.
//
//  Space Complexity  : O(1)
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
//                      the last digit using integer division
//                      until the number becomes zero.
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
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Accepts an integer number from the user,
//                      calls the Display function and displays
//                      each digit of the given number separately.
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
//  Space Complexity  : O(1)
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
