//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_282
//
//  Description       : Demonstrates recursive function calling
//                      using static storage class variables to
//                      calculate the summation of natural
//                      numbers from 1 to the given input.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 15/11/2026
//
//  Time Complexity   : O(n) - Where n is the given input value.
//
//  Space Complexity  : O(n) - Recursive call stack
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Summation
//
//  Description       : Accepts an integer parameter and uses
//                      static variables to maintain the
//                      summation and counter values across
//                      recursive function calls.
//                      Calculates the sum of natural numbers
//                      from 1 to iNo and returns the result.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 15/11/2026
//
//  Input             : Integer value specifying the upper limit.
//
//  Output            : Returns the summation of natural numbers
//                      from 1 to iNo.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int Summation(int iNo)
{
    static int  iSum = 0;
    static int i = 1;

    if(i <= iNo)
    {
        iSum = iSum + i;
        i++; 
        Summation(iNo);
    }      

    return iSum;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Accepts an integer value from the user,
//                      calls the Summation function and displays
//                      the returned summation.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 15/11/2026
//
//  Input             : Integer value entered by the user.
//
//  Output            : Displays the calculated summation.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter frequency : ");
    scanf("%d", &iValue);

    iRet = Summation(iValue);
    printf("Summation is : %d\n", iRet);

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
//  Summation is : 15
//
//////////////////////////////////////////////////////////////////