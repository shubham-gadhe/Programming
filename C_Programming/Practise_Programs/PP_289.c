
//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_289
//
//  Description       : Demonstrates the use of typedef to create
//                      an alias for unsigned long int and uses
//                      recursion to calculate the factorial of
//                      a given number using a static variable.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/11/2026
//
//  Time Complexity   : O(n) - Where n is the given input value.
//
//  Space Complexity  : O(n) - Due to recursive function calls.
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Factorial
//
//  Description       : Accepts an integer parameter and
//                      calculates its factorial recursively.
//                      Uses a static variable of ULONG type
//                      to store the multiplication result.
//                      Calls itself with the decremented value
//                      until the input becomes zero and returns
//                      the calculated factorial.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/11/2026
//
//  Input             : Integer value whose factorial is to
//                      be calculated.
//
//  Output            : Returns the factorial of the given number
//                      using the ULONG type alias.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n) - Due to recursive function calls.
//
//////////////////////////////////////////////////////////////////

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    static ULONG iMult = 1;

    if(iNo != 0)
    {
        iMult = iMult * iNo;
        iNo--;
        Factorial(iNo);
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
//  Date              : 17/11/2026
//
//  Input             : Integer value entered by the user.
//
//  Output            : Displays the calculated factorial.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n) - Due to recursive function calls.
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

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
