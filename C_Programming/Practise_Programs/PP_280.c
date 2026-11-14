//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_280
//
//  Description       : Demonstrates a user-defined function
//                      that calculates the summation of natural
//                      numbers from 1 to the given input using
//                      a for loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/11/2026
//
//  Time Complexity   : O(n) - Where n is the given input value.
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Summation
//
//  Description       : Accepts an integer parameter and
//                      calculates the sum of natural numbers
//                      from 1 to iNo using a for loop.
//                      Returns the calculated summation.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/11/2026
//
//  Input             : Integer value specifying the upper limit.
//
//  Output            : Returns the summation of natural numbers
//                      from 1 to iNo.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int Summation(int iNo)
{
    int iSum = 0;
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        iSum = iSum + i;
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
//  Date              : 14/11/2026
//
//  Input             : Integer value entered by the user.
//
//  Output            : Displays the calculated summation.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1)
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