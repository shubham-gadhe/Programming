//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_285
//
//  Description       : Demonstrates recursive function calling
//                      using a static storage class variable
//                      to calculate the summation of positive
//                      natural numbers from the given input
//                      down to 1.
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
//  Description       : Accepts an integer parameter and uses a
//                      static variable to maintain the summation
//                      across recursive function calls.
//                      Adds the current value to the summation,
//                      decrements the value and calls itself
//                      recursively while the value is greater
//                      than zero. Returns the calculated sum.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 15/11/2026
//
//  Input             : Integer value specifying the upper limit.
//
//  Output            : Returns the summation of positive natural
//                      numbers from iNo down to 1.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int Summation(int iNo)
{
    static int  iSum = 0;

    if(iNo > 0)
    {
        iSum = iSum + iNo;
        iNo--; 
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