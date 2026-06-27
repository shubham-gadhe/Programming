//////////////////////////////////////////////////////////////////
//
//  File Name    : Addition_Of_Two_Numbers
//
//  Description  : This program accepts two numbers
//                 from the user and performs their
//                 addition using a user-defined
//                 function.
//
//  Example:
//      Input  : 10.1 11.2
//      Output : 21.299999
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Enhanced Version: Added user-defined function for better
//                    code modularity and reusability.
//
//////////////////////////////////////////////////////////////////

/*
    Algorithm

    START

        Accept first number as No1
        Accept second number as No2

        Call AddTwoNumbers() by passing No1 & No2

        Receive the result

        Display the result

    STOP
*/

#include<stdio.h>

float AddTwoNumbers(float fNo1, float fNo2)
{
    float fAns = 0.0f;

    fAns = fNo1 + fNo2;

    return fAns;
}

int main()
{
    float fValue1 = 0.0f;                   // To store first input
    float fValue2 = 0.0f;                   // To store second input
    float fResult = 0.0f;                   // To store the result

    printf("Enter first number : \n");
    scanf("%f", &fValue1);

    printf("Enter second number : \n");
    scanf("%f", &fValue2);

    fResult = AddTwoNumbers(fValue1, fValue2);            // Perform the Addition
    
    printf("Addition is : %f\n" , fResult);

    return 0;
}