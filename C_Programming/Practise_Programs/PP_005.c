//////////////////////////////////////////////////////////////////
//
//  File Name    : Addition_Of_Two_Numbers
//
//  Description  : This program accepts two numbers
//                 from the user and performs their
//                 addition.
//
//  Example:
//      Input  : 10.1 11.2
//      Output : 21.299999
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Enhanced Version: Used meaningful variable names and
//                    initialized variables with default values.
//
//////////////////////////////////////////////////////////////////

/*
    Algorithm

    START

        Accept first number as No1
        Accept second number as No2

        Perform addition of No1 & No2

        Display the result

    STOP
*/

#include<stdio.h>

int main()
{
    float fValue1 = 0.0f;                   // To store first input
    float fValue2 = 0.0f;                   // To store second input
    float fResult = 0.0f;                   // To store the result

    printf("Enter first number : \n");
    scanf("%f", &fValue1);

    printf("Enter second number : \n");
    scanf("%f", &fValue2);

    fResult = fValue1 + fValue2;            // Perform the Addition
    
    printf("Addition is : %f\n" , fResult);

    return 0;
}