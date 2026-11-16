//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_287
//
//  Description       : Demonstrates a user-defined function
//                      that calculates the factorial of a given
//                      number using a while loop and returns
//                      the result as an unsigned long integer.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 16/11/2026
//
//  Time Complexity   : O(n) - Where n is the given input value.
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Factorial
//
//  Description       : Accepts an integer parameter and
//                      calculates its factorial by multiplying
//                      the current value with the result and
//                      decrementing the value until it becomes
//                      zero. Returns the calculated factorial
//                      as an unsigned long integer.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 16/11/2026
//
//  Input             : Integer value whose factorial is to
//                      be calculated.
//
//  Output            : Returns the factorial of the given number
//                      as an unsigned long integer.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

unsigned long int Factorial(int iNo)
{
    unsigned long int iMult = 1;

    while(iNo != 0)
    {
        iMult = iMult * iNo;
        iNo--;
    }   

    return iMult;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Accepts an integer value from the user,
//                      calls the Factorial function and displays
//                      the returned factorial using the %lu
//                      format specifier.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 16/11/2026
//
//  Input             : Integer value entered by the user.
//
//  Output            : Displays the calculated factorial.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    unsigned long int iRet = 0;

    printf("Enter frequency : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial is : %lu\n", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input:
//
//  Enter frequency : 5
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output:
//
//  Factorial is : 120
//
//////////////////////////////////////////////////////////////////